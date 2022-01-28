//Filename: CCircle.cpp
//Description: See header file for structural information
//Author: Mia Buchanan
//Date Last Modified: 10.01.21

#include <iostream>
using namespace std;
#include "CCircle.h"
#include "ShapesGlobals.h"

CCircle::CCircle(real m_majorRadius, real m_minorRadius)
{
    m_majorRadius = m_minorRadius;
    #ifdef _DEBUG
    cout << "Circle class created (" << m_majorRadius << ", " << m_minorRadius <<  ")" << endl;
    #endif
}

CCircle::~CCircle(void)
{
    #ifdef _DEBUG
    cout << "Circle class destroyed" << endl;
    #endif
}
void CCircle::set(real rad, real x, real y, int r, int g, int b)
{
    this->radius(rad);
    m_color.set(r,g,b);
    m_center.set(x,y);
}
void CCircle::radius(real rad, real rad2)
{
    if (rad <= 0.0) return;
    m_minorRadius = rad;
    m_majorRadius = rad;
}

real CCircle::calcArea()
{
    return CEllipse::calcArea();
}

bool CCircle::draw()
{
    CCircle::draw();
    cout << "Drawing Circle" << endl;
    return true;
}