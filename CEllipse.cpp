//Filename: CEllipse.cpp
//Description: See header file for structural information
//Author: Mia Buchanan
//Date Last Modified: 10.01.21

#include <iostream>
using namespace std;
#include "CEllipse.h"
#include "ShapesGlobals.h"

CEllipse::CEllipse(void)
{
    m_majorRadius = 4.2;
    m_minorRadius = 2.0;
    #ifdef _DEBUG
    cout << "Ellipse class created (" << m_majorRadius << ", " << m_minorRadius <<  ")" << endl;
    #endif
}

CEllipse::~CEllipse(void)
{
    #ifdef _DEBUG
    cout << "Ellipse class destroyed" << endl;
    #endif
}

void CEllipse::set(real radMinor, real radMajor, real x, real y, int r, int g, int b)
{
    this->radius(radMinor, radMajor);
    m_color.set(r, g, b);
    m_center.set(x, y);

}

void CEllipse::radius(real radMinor, real radMajor)
{
    if (radMinor <= 0.0 || radMajor <= 0.0) return;
    m_minorRadius = min(radMinor, radMajor);
    m_majorRadius = max(radMinor, radMajor);

    #ifdef _DEBUG
    cout << "Ellipse radii set (" << m_minorRadius << "," << m_majorRadius << ")" << endl;
    #endif
}

real CEllipse::calcArea()
{
    return M_PI * m_minorRadius * m_majorRadius;
}

bool CEllipse::draw()
{
    cout << "Drawing Ellipse" << endl;
    return true; 
}