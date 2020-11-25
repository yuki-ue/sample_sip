#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
		cv::Mat image;
		image = imread("sample_image.png");

		if (image.empty())
				return -1;

		cv::namedWindow("test", 0);
		cv::imshow("test", image);

		return 0;
}
