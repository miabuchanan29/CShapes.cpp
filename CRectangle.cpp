//Filename: CRectangle.cpp
//Description: See header file for structural information
//Author: Mia Buchanan
//Date Last Modified: 10.24.21

#include <iostream>
using namespace std;
#include "CRectangle.h"
#include "ShapesGlobals.h"

CRectangle::CRectangle(real myWidth, real myHeight)
{
    m_numSides = 4;
    set(myWidth, myHeight);
    #ifdef _DEBUG
    cout << "Rectangle class created (" << m_width << "," << m_height << ")" << endl;
    #endif
}

CRectangle::~CRectangle(void)
{
    #ifdef _DEBUG
    cout << "Rectangle class destroyed" << endl;
    #endif
}

void CRectangle::set(real myWidth, real myHeight, int r, int g, int b)
{
    m_width = myWidth;
    m_height = myHeight;
    m_color.set(r, g, b);
}

real CRectangle::calcArea()
{
    return m_width * m_height;
}

bool CRectangle::draw()
{
    cout << "Drawing Rectangle" << endl;
    return true;
}
