//Filename: CEllipse.h
//Description: An abstract class to encapsulate the Polygon properties
//Author: Mia Buchanan
//Date Last Modified: 10.01.21

#include "CShape.h"

#pragma once
#if !defined(_CELLIPSE_H_)
#define _CELIPSE_H_

class CEllipse : public CShape 
{
public:
    CEllipse(void);  //Defualt constructor
    ~CEllipse(void); //Default destructor

    //Accessor Functions
    inline real minor() {return m_minorRadius;}
    inline real major() {return m_majorRadius;}
    inline real m() {return m_minorRadius;}
    inline real M() {return m_majorRadius;}

    void set(real radMinor, real radMajor, real x, real y, int r = 0, int g = 0, int b = 0);
    void radius(real radMinor, real radMajor);


public:
    real calcArea();  //Calculate the area of this Ellipse
    bool draw();    //Stub that would normally draw this Ellipse

protected:

   real m_minorRadius;
   real m_majorRadius;

};

#endif //_CElLISPSE_H_