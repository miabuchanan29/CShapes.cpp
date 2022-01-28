//Filename: CSquare.cpp
//Description: See header file for structural information
//Author: Mia Buchanan
//Date Last Modified: 09.16.21

#include <iostream>
using namespace std;
#include "CSquare.h"
#include "ShapesGlobals.h"

CSquare::CSquare(real myWidth)
{
    m_numSides = 4;
    CRectangle::setDimension(myWidth, myWidth);
    #ifdef _DEBUG
    cout << "Square class created (" << CRectangle::width() <<  ")" << endl;
    #endif
}

CSquare::~CSquare(void)
{
    #ifdef _DEBUG
    cout << "Square class destroyed" << endl;
    #endif
}

void CSquare::set(real myWidth, int r, int g, int b)
{
    CRectangle::set(myWidth, myWidth, r, g, b);
}

real CSquare::calcArea()
{
    return m_width * m_height;
}

bool CSquare::draw()
{
    CRectangle::draw();
    cout << "Drawing Square" << endl;
    return true;
}
