# CImg-Conformal-Image-Mapping
Program to transform a picture according to complex function using the CImg library for C++.

One thing to note is the what is being graphed. In order to decide what color the pixel of the resulting picture should be, the fuction is applied to a complex number with the same real part as the x value of the pixel and the same imaginary part as the pixel. That result is then found in the original image and the pixel in the output is set the same color. In short if ![f(z)=z^{2}](https://latex.codecogs.com/svg.latex?f(x)%3Dz%5E%7B2%7D) then the resulting image would be a representation of ![f(z)=\sqrt{z}](https://latex.codecogs.com/svg.latex?f(x)%3D%5Csqrt%7Bz%7D).


## ![f(z)=z](https://latex.codecogs.com/svg.latex?f(x)%3Dz)

<p align="center" >
  <img src="https://raw.githubusercontent.com/Jerry-G/CImg-Conformal-Image-Mapping/master/img/00.jpg" width="256">
</p>

## ![f(z)=\sqrt{z}](https://latex.codecogs.com/svg.latex?f(x)%3D%5Csqrt%7Bz%7D)

<p align="center" >
  <img src="https://raw.githubusercontent.com/Jerry-G/CImg-Conformal-Image-Mapping/master/img/01.jpg" width="256">
</p>

## ![f(z)=\sqrt[3]{z}](https://latex.codecogs.com/svg.latex?f(z)%3D%5Csqrt%5B3%5D%7Bz%7D)

<p align="center" >
  <img src="https://raw.githubusercontent.com/Jerry-G/CImg-Conformal-Image-Mapping/master/img/02.jpg" width="256">
</p>

## ![f(z)=\sqrt[4]{z}](https://latex.codecogs.com/svg.latex?f(z)%3D%5Csqrt%5B4%5D%7Bz%7D)

<p align="center" >
  <img src="https://raw.githubusercontent.com/Jerry-G/CImg-Conformal-Image-Mapping/master/img/03.jpg" width="256">
</p>

## ![f(z)=\sqrt[\imath]{z}](https://latex.codecogs.com/svg.latex?f(z)%3D%5Csqrt%5B%5Cimath%5D%7Bz%7D)

<p align="center" >
  <img src="https://raw.githubusercontent.com/Jerry-G/CImg-Conformal-Image-Mapping/master/img/13.jpg" width="256">
</p>

## ![f(z)=e^z](https://latex.codecogs.com/svg.latex?f(z)%3De%5Ez)

<p align="center" >
  <img src="https://raw.githubusercontent.com/Jerry-G/CImg-Conformal-Image-Mapping/master/img/04.jpg" width="256">
</p>

## ![f(z)=\sqrt{e^z}](https://latex.codecogs.com/svg.latex?f(z)%3D%5Csqrt%7Be%5Ez%7D)

<p align="center" >
  <img src="https://raw.githubusercontent.com/Jerry-G/CImg-Conformal-Image-Mapping/master/img/05.jpg" width="256">
</p>

## ![f(z)=\sqrt[3]{e^z}](https://latex.codecogs.com/svg.latex?f(z)%3D%5Csqrt%5B3%5D%7Be%5Ez%7D)

<p align="center" >
  <img src="https://raw.githubusercontent.com/Jerry-G/CImg-Conformal-Image-Mapping/master/img/06.jpg" width="256">
</p>

## ![f(z)=\sqrt[4]{e^z}](https://latex.codecogs.com/svg.latex?f(z)%3D%5Csqrt%5B4%5D%7Be%5Ez%7D)

<p align="center" >
  <img src="https://raw.githubusercontent.com/Jerry-G/CImg-Conformal-Image-Mapping/master/img/07.jpg" width="256">
</p>

## ![f(z)=\sqrt[5]{e^z}](https://latex.codecogs.com/svg.latex?f(z)%3D%5Csqrt%5B5%5D%7Be%5Ez%7D)

<p align="center" >
  <img src="https://raw.githubusercontent.com/Jerry-G/CImg-Conformal-Image-Mapping/master/img/08.jpg" width="256">
</p>

## ![f(z)=\sqrt[18]{e^z}](https://latex.codecogs.com/svg.latex?f(z)%3D%5Csqrt%5B18%5D%7Be%5Ez%7D)

<p align="center" >
  <img src="https://raw.githubusercontent.com/Jerry-G/CImg-Conformal-Image-Mapping/master/img/09.jpg" width="256">
</p>

## ![f^{-1}(z)=\frac{ab}{b-a}+\imath b-a](https://latex.codecogs.com/svg.latex?f%5E%7B-1%7D(z)%3D%5Cfrac%7Bab%7D%7Bb-a%7D%2B%5Cimath%20b-a) when ![a=Real(z)](https://latex.codecogs.com/svg.latex?a%3D%5CRe(z)) and ![b=Imag(z)](https://latex.codecogs.com/svg.latex?b%3D%5CIm(z))

<p align="center" >
  <img src="https://raw.githubusercontent.com/Jerry-G/CImg-Conformal-Image-Mapping/master/img/10.jpg" width="256">
</p>

## ![f^{-1}(z)=\frac{ab}{32}+\imath b-a](https://latex.codecogs.com/svg.latex?f%5E%7B-1%7D(z)%3D%5Cfrac%7Bab%7D%7B32%7D%2B%5Cimath%20b-a) when ![a=Real(z)](https://latex.codecogs.com/svg.latex?a%3D%5CRe(z)) and ![b=Imag(z)](https://latex.codecogs.com/svg.latex?b%3D%5CIm(z))

<p align="center" >
  <img src="https://raw.githubusercontent.com/Jerry-G/CImg-Conformal-Image-Mapping/master/img/11.jpg" width="256">
</p>

## ![f^{-1}(z)=z^{(\frac{e^{\sin 1}}{2})}](https://latex.codecogs.com/svg.latex?f%5E%7B-1%7D(z)%3Dz%5E%7B(%5Cfrac%7Be%5E%7B%5Csin%201%7D%7D%7B2%7D)%7D)

<p align="center" >
  <img src="https://raw.githubusercontent.com/Jerry-G/CImg-Conformal-Image-Mapping/master/img/12.jpg" width="256">
</p>


