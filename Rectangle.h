/*
 * Rectangle.h
 *
 *  Created on: Mar 5, 2020
 *      Author: jschmid20
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape{
public:
	Rectangle (int x, int y, int l, int w);
	Rectangle ();

	double calcPerimeter();
	double calcArea();
	void printPerimeter();
	void printArea();
	void print();
	void updateDimensions(int l, int w);
	//… override Print // static polymorphism
	//… override UpdateDimensions // dynamic polymorphism
private:
	int l; // length
	int w; // width
};



#endif /* RECTANGLE_H_ */
