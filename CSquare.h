//Filename: CSquare.h
//Description: An abstract class to encapsulate the Polygon properties
//Author: Mia Buchanan
//Date Last Modified: 10.01.21

#include "CRectangle.h"

#pragma once
#if !defined(_CSQUARE_H_)
#define _CSQUARE_H_

class CSquare : public CRectangle //makes square child of Rectangle
{
public:
    CSquare(real myWidth = 1.0);  //Defualt constructor
    ~CSquare(void); //Default destructor

//Accessor Functions
    void set(real myWidth, int r = 0, int g = 0, int b = 0);
    void setDimension(real x, real y);
    
    //inline real width() {return m_width;}
    //inline real height() {return m_height;}
    inline void w(real n) {m_width = n; m_height = n;}
    inline void h(real n) {m_width = n; m_height = n;}
    inline void width(real n) {m_width = n; m_height = n;}
    inline void height(real n) {m_width = n; m_height = n;}

public:
    real calcArea();  //Calculate the area of this Square
    bool draw();    //Stub that would normally draw this Square

private:

};

#endif //_CSQUARE_H_
