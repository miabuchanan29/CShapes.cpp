//Filename: CTriangle.cpp
//Description: See header file for structural information
//Author: Mia Buchanan
//Date Last Modified: 10.01.21

#include <iostream>
using namespace std;
#include "CTriangle.h"
#include "CLine.h"
#include "ShapesGlobals.h"

CTriangle::CTriangle(real x1, real y1, real x2, real y2, real x3, real y3)
{
    set(x1, y1, x2, y2, x3, y3);
    m_numSides = 3;
   
   #ifdef _DEBUG
   cout << "Triangle class created (" << m_line1.x1() << ", " << m_line1.y1() << ", " << m_line1.x2() << ", " << m_line1.y2() << ")" << "(";
   cout << m_line2.x1() << ", " << m_line2.y1() << m_line2.x2() << ", " << m_line2.y2() << ") " << "(";
   cout << m_line3.x1() << ", " << m_line3.y1() << ", " << m_line3.x2() << ", " << m_line3.y2() << ")" << endl;
   #endif
}

CTriangle::~CTriangle(void)
{
    #ifdef _DEBUG
    cout << "Triangle class destroyed" << endl;
    #endif
}

void CTriangle::set(real x1, real y1, real x2, real y2, real x3, real y3, int r, int g, int b)
{
    m_line1.set(x1, y1, x2, y2);
    m_line2.set(x2, y2, x3, y3);
    m_line3.set(x3, y3, x1, y1);
    m_color.set(r, g, b);
}

real CTriangle::calcArea()
{
    real a = m_line1.calcLength();
    real b = m_line2.calcLength();
    real c = m_line3.calcLength();
    real s = (a + b + c)/2.0;

    return sqrt(s * (s - a) * (s - b) * (s - c));
}

bool CTriangle::draw()
{
    cout << "Drawing Triangle" << endl;
    return true;
}
