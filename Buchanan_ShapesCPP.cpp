//Filename: ShapesCPP.cpp
//Description: Main entry point to the Shapes Class
//Author: Mia Buchanan
//Date Last Modified: 10.24.21


#include <iostream>
using namespace std;
#include "CSquare.h"
#include "CCircle.h"
#include "CTriangle.h"



int main()
{
    cout << "Welcome to Shapes CPP!!" << endl;

    CShape *shapes[10];

    shapes[0] = new CCircle();
    ((CCircle*)shapes[0])->radius(2.0);
    cout << "Area of my circle: " << ((CCircle*)shapes[0])->calcArea() << endl;

    shapes[1] = new CSquare();
    ((CSquare*)shapes[1])->setDimension(3.0, 3.0);
    cout << "Area of my square: " << ((CSquare*)shapes[1])->calcArea() << endl;

    shapes[2] = new CEllipse();
    ((CEllipse*)shapes[2])->radius(1.3, 4.2);
    cout << "Area of my ellipse: " << ((CEllipse*)shapes[2])->calcArea() << endl;

    shapes[3] = new CRectangle();
    ((CRectangle*)shapes[3])->setDimension(3.2, 4.3);
    cout << "Area of my rectangle: " << ((CRectangle*)shapes[3])->calcArea() << endl;

    shapes[4] = new CLine();
    ((CLine*)shapes[4])->set();
    cout << "Length of my line: " << ((CLine*)shapes[4])->calcLength() << endl;

    shapes[5] = new CTriangle();
    ((CTriangle*)shapes[5])->set();
    cout << "Area of my triangle: " << ((CTriangle*)shapes[5])->calcArea() << endl;



    cout << "Still running Shapes CPP..." << endl;

    delete ((CCircle*)shapes[0]);
    delete ((CSquare*)shapes[1]);
    delete ((CEllipse*)shapes[2]);
    delete ((CRectangle*)shapes[3]);
    delete ((CLine*)shapes[4]);
    delete ((CTriangle*)shapes[5]);

    return 0;
}