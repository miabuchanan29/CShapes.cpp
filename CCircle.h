//Filename: CCircle.h
//Description: An abstract class to encapsulate the Polygon properties
//Author: Mia Buchanan
//Date Last Modified: 10.24.21

#include "CEllipse.h"

#pragma once
#if !defined(_CCIRCLE_H_)
#define _CCIRCLE_H_

class CCircle : public CEllipse
{
public:
    CCircle(real rad = 1.0);  //Defualt constructor
    ~CCircle(void); //Default destructor

    //Accessor Functions
    inline real radius() {return m_minorRadius;}
    inline real r() {return m_minorRadius;}

    void set(real rad, real x, real y, int r = 0, int g = 0, int b = 0);
    void radius(real rad, real rad2 = -1.0);

public:
    real calcArea();  //Calculate the area of this Circle
    bool draw();    //Stub that would normally draw this Circle

public:

};

#endif //_CCIRCLE_H_