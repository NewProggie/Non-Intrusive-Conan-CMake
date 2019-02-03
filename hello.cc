#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main() {
    const auto img = cv::Mat::zeros(480, 640, CV_8UC3);
    cv::imshow("Black Image", img);
    cv::waitKey(0);
    return 0;
}
