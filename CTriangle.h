//Filename: CTriangle.h
//Description: An abstract class to encapsulate the Polygon properties
//Author: Mia Buchanan
//Date Last Modified: 10.01.21

#include "CPolygon.h"
#include "CLine.h"

#pragma once
#if !defined(_CTRIANGLE_H_)
#define _CTRIANGLE_H_

class CTriangle : public CPolygon //makes Polygon child of Rectangle
{
public:
    CTriangle(real x1 = 1.0, real y1 = 1.0, //Default contructor
              real x2 = 2.0, real y2 = 2.0,
              real x3 = 3.0, real y3 = 3.0);
    ~CTriangle(void); //Default destructor

    //Accessor Functions
    void set(real x1, real y1, real x2, real y2, real x3, real y3, int r, int g, int b);
    


public:
    real calcArea();  //Calculate the area of this Triangle
    bool draw();    //Stub that would normally draw this Triangle

private:
    CLine m_line1;
    CLine m_line2;
    CLine m_line3;
};

#endif //_CTRIANGLE_H_
