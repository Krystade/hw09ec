//============================================================================
// Name        : hw09ec.cpp
// Author      : Jack Schmid
// Version     :
// Copyright   : Your copyright notice
// Description : Practicing Abstract Classes & Virtual Functions, Ansi-style
//============================================================================

#include "hw09ec.h"


int main() {
	//1 & 2
	Circle * pcirc = new Circle(10, 10, 5);
	Rectangle * prect = new Rectangle(20, 20, 5, 6);
	
	cout << "Original Circle\n";
	pcirc->print();
	pcirc->move(5,5);
	pcirc->updateDimensions(3);
	cout << "New Circle\n";
	pcirc->print();
	cout << endl;

	cout << "Original Rectangle\n";
	prect->print();
	prect->move(23, 12);
	prect->updateDimensions(3, 9);
	cout << "New Rectangle\n";
	prect->print();
	//3
	//Shape's move function does not need to be overridden because nothing changes 		between shape and circle or rectangle.

	//4
	//Print should be static binding and updateDimensions should be dynamic binding
	//static binding occurs at compile time while dynamic binding occurs at runtime
	//static polymorphism is overloading a method with a different signature while dynamic polymorphism is overloading a method with the same signature but in a different class

	//5
	DrawShape(*pcirc);
	DrawShape(*prect);
	return 0;
}

