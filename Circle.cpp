/*
 * Circle.cpp
 *
 *  Created on: Mar 5, 2020
 *      Author: jschmid20
 */

#include "Circle.h"

void Circle::print(){
	cout << "r: " << r << endl;
}


void Circle::updateDimensions(int r){
	this->r = r;
}
