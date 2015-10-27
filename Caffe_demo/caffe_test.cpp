#include <fstream>

#include "caffe/caffe.hpp"
#include "cv.h"
//#include "cxcore.h"
#include "highgui.h"

using namespace std;

using caffe::Blob;
using caffe::Caffe;
using caffe::Net;
using caffe::Layer;
using caffe::shared_ptr;
using caffe::vector;

vector<string> readSynsetWords(string synset_words_name);

int main()
{
	string prototxt = "D:\\Git\\caffe\\models\\bvlc_reference_caffenet\\test.prototxt";
	string model = "D:\\Git\\fast-rcnn\\data\\imagenet_models\\CaffeNet.v2.caffemodel";
    string synset_words = "D:\\Git\\caffe\\data\\ilsvrc12\\caffe_ilsvrc12.tar\\synset_words.txt";
	string img = "n02123597_10086_Siamese_cat.JPEG";

	Caffe::set_mode(Caffe::CPU);
	Net<float> caffe_net(prototxt, caffe::TEST);
	caffe_net.CopyTrainedLayersFrom(model);
	vector<Blob<float>*> input_blobs = caffe_net.input_blobs();

    // read synset_words
    vector<string> all_synset_words = readSynsetWords(synset_words);

	int resize_length = 256;
	//int crop_length = 224;
	int crop_length = 227;
	float mean_data[] = { 104, 117, 123 };
	cv::Mat cv_data_mean(resize_length, resize_length, CV_32FC3, 
		cv::Scalar(mean_data[0], mean_data[1], mean_data[2]));
	cv::Mat src = cv::imread(img);
	cv::Mat roi;
	cv::resize(src, src, cv::Size(resize_length, resize_length), 0, 0, cv::INTER_LINEAR);
	src.convertTo(src, CV_32FC3);
	src -= cv_data_mean;
	CHECK_EQ(input_blobs.size(), 1);
	src(cv::Rect((src.cols - crop_length) / 2, (src.rows - crop_length) / 2, crop_length, crop_length)).copyTo(roi);
	vector<cv::Mat> mat_vec;
	split(roi, mat_vec);
	float* dst_data = input_blobs[0]->mutable_cpu_data();
	float* src_data;
	for (int i = 0; i < mat_vec.size(); ++i)
	{
		for (int y = 0; y<mat_vec[i].rows; y++)
		{
			src_data = mat_vec[i].ptr<float>(y);
			memcpy(dst_data, src_data, sizeof(float)*mat_vec[i].cols);
			dst_data += mat_vec[i].cols;
		}
	}
	const vector<Blob<float>*> dt_result = caffe_net.Forward(input_blobs);
    float max_score = -1.0;
    int max_index = -1;
	for (int i = 0; i<dt_result[0]->count(); i++)
	{
		cout << i << ":" << dt_result[0]->cpu_data()[i] << endl;
        if (max_score < dt_result[0]->cpu_data()[i])
        {
            max_score = dt_result[0]->cpu_data()[i];
            max_index = i;
        }
	}
    cout << "max index: " << max_index << endl;
    cout << "max score: " << max_score << endl;
    cout << "recoginiton: " << all_synset_words[max_index] << endl;
	return 0;
}

vector<string> readSynsetWords(string synset_words_name)
{
    vector<string> synset_words;
    fstream fp;
    fp.open(synset_words_name, ios::in);

    string synset_word;
    while (getline(fp, synset_word))
    {
        synset_words.push_back(synset_word);
    }

    return synset_words;
}