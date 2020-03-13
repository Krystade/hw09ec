/*
 * Circle.cpp
 *
 *  Created on: Mar 5, 2020
 *      Author: jschmid20
 */

#include "Circle.h"

void Circle::print(){
	Shape::print();
	cout << "radius: " << r << endl;
}


void Circle::updateDimensions(int r){
	this->r = r;
}
