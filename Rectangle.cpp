/*
 * Rectangle.cpp
 *
 *  Created on: Mar 5, 2020
 *      Author: jschmid20
 */

#ifndef RECTANGLE_CPP_
#define RECTANGLE_CPP_

#include "Rectangle.h"

Rectangle::Rectangle(int x, int y, int l, int w) : Shape(x, y){
	this->l = l;
	this->w = w;
}
Rectangle::Rectangle() : Shape(0, 0){
	this->l = 0;
	this->w = 0;
}

double Rectangle::calcPerimeter(){
	return 2*l + 2*w;
}
double Rectangle::calcArea(){
	return l*w;
}

void Rectangle::printPerimeter(){
	cout << calcPerimeter();
}
void Rectangle::printArea(){
	cout << calcArea();
}
void Rectangle::print(){
	Shape::print();
	cout << "length: " << l << "\nwidth: " << w << endl;
}
void Rectangle::updateDimensions(int l, int w){
	this->l = l;
	this->w = w;
}


#endif /* RECTANGLE_CPP_ */
