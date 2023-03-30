#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {
    // Load the image from file
    Mat image = imread("input.jpg");

    // Check for failure
    if (image.empty()) {
        cout << "Could not open or find the image" << endl;
        return -1;
    }

    // Convert the image to grayscale
    Mat gray_image;
    cvtColor(image, gray_image, COLOR_BGR2GRAY);

    // Apply Gaussian blur to the image
    Mat blurred_image;
    GaussianBlur(gray_image, blurred_image, Size(5, 5), 0);

    // Apply Canny edge detection to the image
    Mat edges;
    Canny(blurred_image, edges, 50, 150);

    // Save the output image
    imwrite("output.jpg", edges);

    // Display the input and output images
    imshow("Input Image", image);
    imshow("Output Image", edges);
    waitKey(0);

    return 0;
}
