#include "CImg.cpp"
#include <iostream>
#include <complex>
#include <cmath>
using namespace cimg_library;

//complex funtion to map image
std::complex<double> f(std::complex<double> z){
  std::complex<double> scale (0.01,0);
  std::complex<double> out = z*z*scale;

  return out;
}

int main() {
  //load image and define vars
  CImg<double> image ("img.jpg");
  int width  = image.width();
  int height = image.height();
  int size   = width * height;
  //resulting image
  CImg<double> result(width,height,1,3,0);

  //loop though every pixel
  for (int x = 0; x < width; ++x) {
    for (int y = 0; y  < height; ++y) {
      double real = x-width/2;
      double imag = y-height/2;
      //complex number for each pixle
      std::complex<double> z (real,imag);
      //function application
      z = f(z);
      //periodic image circulation
      double xprime = fmod(abs(z.real() + width/2),width);
      double yprime = fmod(abs(z.imag() + height/2),height);
      //copy the pixle in the resulting location of the input image
      result(x,y,0,0) = image(xprime,yprime,0,0);
      result(x,y,0,1) = image(xprime,yprime,0,1);
      result(x,y,0,2) = image(xprime,yprime,0,2);
    }
  }

  result.save("result.jpg");

  return 0;
}
