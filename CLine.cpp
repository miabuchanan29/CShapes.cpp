//Filename: CLine.cpp
//Description: See header file for structural information
//Author: Mia Buchanan
//Date Last Modified: 10.24.21

#include <iostream>
using namespace std;
#include "CLine.h"
#include "ShapesGlobals.h"

CLine::CLine(real x1, real y1, real x2, real y2)
{
    this->set(x1, y1, x2, y2);
    #ifdef _DEBUG
    cout << "Line class created (" << m_point1.x() << ", " << m_point1.y() <<  ") " << "(" << m_point2.x() << "," << m_point2.y() << ")" << endl;
    #endif
}

CLine::~CLine(void)
{
    #ifdef _DEBUG
    cout << "Line class destroyed" << endl;
    #endif
}
void CLine::set(real x1, real x2, real y1, real y2)
{
    m_point1.set(x1, y1);
    m_point2.set(x2, y2);
}

real CLine::calcLength()
{
    return calculateDistance(m_point1, m_point2);
    
}

real CLine::calcArea()
{
    return this->calcLength();
}

bool CLine::draw()
{  
    cout << "Drawing Line" << endl;
    return true;   
}