/*
 * Circle.h
 *
 *  Created on: Mar 5, 2020
 *      Author: jschmid20
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle : public Shape{
public:
	Circle (int r) : Shape(0, 0){this->r = r;}
	void print();
	void updateDimensions(int r);
	//� override Print // static polymorphism
	//� override UpdateDimensions // dynamic polymorphism
private:
	int r; // radius
};


#endif /* CIRCLE_H_ */
