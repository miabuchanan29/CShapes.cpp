//Filename: CPolygon.cpp
//Description: See header file for structural information
//Author: Mia Buchanan
//Date Last Modified: 10.24.21

#include <iostream>
using namespace std;
#include "CPolygon.h"
#include "ShapesGlobals.h"

CPolygon::CPolygon(void)
{
    m_numSides = 0;
    #ifdef _DEBUG
    cout << "Polygon class created (number of sides: " << m_numSides << ")" << endl;
    #endif
}

CPolygon::~CPolygon(void)
{
    #ifdef _DEBUG
    cout << "Polygon class destroyed" << endl;
    #endif
}



