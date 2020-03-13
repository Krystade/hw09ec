/*
 * hw09ec.h
 *
 *  Created on: Mar 5, 2020
 *      Author: jschmid20
 */

#ifndef HW09EC_H_
#define HW09EC_H_

#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "Circle.h"

void DrawShape(Circle c){
	c.move(10, 11);
	c.updateDimensions(81);
}

void DrawShape(Rectangle r){
	r.move(10, 11);
	r.updateDimensions(8, 5);
}

#endif /* HW09EC_H_ */
