//Filename: CShape.cpp
//Description: See header file for structural information
//Author: Mia Buchanan
//Date Last Modified: 10.24.21

#include <iostream>
using namespace std;
#include "CShape.h"
#include "ShapesGlobals.h"

CShape::CShape(void)
{
    m_color = CColor(4, 5, 7);
    #ifdef _DEBUG
    cout << "Shape class created" << endl;
    #endif
}

CShape::~CShape(void)
{
    #ifdef _DEBUG
    cout << "Shape class destroyed" << endl;
    #endif
}




