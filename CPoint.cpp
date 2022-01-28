//Filename: CPoint.cpp
//Description: See header file for structural information
//Author: Mia Buchanan
//Date Last Modified: 10.24.21

#include <iostream>
using namespace std;
#include "CPoint.h"
#include "ShapesGlobals.h"

CPoint::CPoint(real newX, real newY)
{
   set(newX, newY);

    #ifdef _DEBUG
    cout << "Point class created (" << x() << ", " << y() << ")" << endl;
    #endif
}

CPoint::~CPoint(void)
{
    #ifdef _DEBUG
    cout << "Point class destroyed" << endl;
    #endif
}

real CPoint::calculateDistance(CPoint p)
{
    #ifdef _DEBUG
    cout << "Class calculateDistance" << endl; 
    #endif
    real A2, B2;
    A2 = pow(this->x() - p.x(), 2.0);
    B2 = pow(this->y() - p.y(), 2.0);
    
    return sqrt(A2 + B2);
}

real calculateDistance(CPoint p1, CPoint p2)
{
    #ifdef _DEBUG
    cout << "Global calculateDistance" << endl;
    #endif
    return p1.calculateDistance(p2);
}