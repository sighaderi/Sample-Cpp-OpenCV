In this example, we first load an image named "input.jpg" from the file system. We then convert the image to grayscale using the cvtColor function from OpenCV. Next, we apply a Gaussian blur to the grayscale image using the GaussianBlur function. Finally, we apply Canny edge detection to the blurred image using the Canny function.
The resulting edge-detected image is saved to a file named "output.jpg", and both the input and output images are displayed using the imshow function. The waitKey function is used to wait for a key press before closing the display windows.
Note that you'll need to install the OpenCV library and its dependencies to compile and run this example. You can do this using your package manager on Linux.