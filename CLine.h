//Filename: CLine.h
//Description: An abstract class to encapsulate the Polygon properties
//Author: Mia Buchanan
//Date Last Modified: 10.01.21

#include "CShape.h"

#pragma once
#if !defined(_CLINE_H_)
#define _CLINE_H_

class CLine : public CShape //makes Line child of Rectangle
{
public:
    CLine(real x1 = 0.0, real y1 = 0.0, real x2 = 1.0, real y2=1.0);  //Defualt constructor
    ~CLine(void); //Default destructor

    //Accessor Functions
    inline real x1() {return m_point1.x();}
    inline real y1() {return m_point1.y();} //get functions line 19-22
    inline real x2() {return m_point2.x();}
    inline real y2() {return m_point2.y();}

    void set(real x1 = 0.0, real y1 = 0.0, real x2 = 1.0, real y2 = 1.0);
    inline void x1(real val) {m_point1.x(val);}
    inline void y1(real val) {m_point1.y(val);}
    inline void x2(real val) {m_point2.x(val);}
    inline void y2(real val) {m_point2.y(val);}


public:
    real calcLength();
    real calcArea();  //Calculate the area of this Line
    bool draw();    //Stub that would normally draw this Line

private:
    CPoint m_point1;
    CPoint m_point2;

};

#endif //_CLINE_H_