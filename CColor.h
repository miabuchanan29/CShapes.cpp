//Filename: CColor.h
//Description: An abstract class to encapsulate the Color properties
//Author: Mia Buchanan
//Date Last Modified: 10.24.21

#include "ShapesGlobals.h"
#pragma once
#if !defined(_CCOLOR_H_)
#define _CCOLOR_H_




class CColor
{
public:
    CColor(int red = 0, int green = 0, int blue = 0);  //Defualt constructor
    ~CColor(void); //Default destructor

//Acessor Functions
    
    inline int getR() {return m_red;}
    inline int getG() {return m_green;}
    inline int getB() {return m_blue;}
    inline int r() {return m_red;}
    inline int g() {return m_green;}
    inline int b() {return m_blue;}

    inline void set(int red = 0, int green = 0, int blue = 0) {r(red); g(green); b(blue);}
    inline void setR(int val) {r(val);}
    inline void setG(int val) {g(val);}
    inline void setB(int val) {b(val);}

    inline void r(int val) {if (val >= MIN_COLOR_VALUE && val <= MAX_COLOR_VALUE) m_red = val;}
    inline void g(int val) {if (val >= MIN_COLOR_VALUE && val <= MAX_COLOR_VALUE) m_green = val;}
    inline void b(int val) {if (val >= MIN_COLOR_VALUE && val <= MAX_COLOR_VALUE) m_blue = val;}



public:

private:
    int m_red;
    int m_green;
    int m_blue;
};

#endif //_CCOLOR_H_