//Filename: CPolygon.h
//Description: An abstract class to encapsulate the Polygon properties
//Author: Mia Buchanan
//Date Last Modified: 10.01.21

#include "CPolygon.h"

#pragma once
#if !defined(_CRECTANGLE_H_)
#define _CRECTANGLE_H_

class CRectangle : public CPolygon
{
public:
    CRectangle(real myWidth = 1.0, real myHeight = 2.0);  //Defualt constructor
    ~CRectangle(void); //Default destructor

    //Accessor Functions    
    void set(real myWidth, real myHeight, int r = 0, int g = 0, int b = 0);
    inline void setDimension(real x, real y) {m_width = x; m_height = y;}

    inline real w() {return m_width;}
    inline real h() {return m_height;}
    inline real width() {return m_width;}
    inline real height() {return m_height;}
    inline void w(real n) {m_width = n;}
    inline void h(real n) {m_height = n;}
    inline void width(real n) {m_width = n;}
    inline void height(real n) {m_height = n;}

public:
    real calcArea();  //Calculate the area of this Rectangle
    bool draw();    //Stub that would normally draw this Rectangle

protected:
   real m_width;
   real m_height;
};

#endif //_CRECTANGLE_H_