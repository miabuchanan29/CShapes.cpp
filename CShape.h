//Filename: CShape.h
//Description: An abstract class to encapsulate the Shape properties
//Author: Mia Buchanan
//Date Last Modified: 10.01.21

#include "CPoint.h"
#include "CColor.h"

#pragma once
#if !defined(_CSHAPE_H_)
#define _CSHAPE_H_

class CShape
{
public:
    CShape(void);  //Defualt constructor
    ~CShape(void); //Default destructor


public:
    virtual real calcArea() = 0;  //Calculate the area of this shape
    virtual bool draw() = 0;    //Stub that would normally draw this shape

    //Accessor Functions
    inline void setColor(int r, int g, int b) {m_color.set(r,g,b);}
    inline void setCenter(int x, int y) {m_center.set(x,y);}

protected:
    CPoint m_center;
    CColor m_color;
    real m_rotation;
};

#endif //_CSHAPE_H_