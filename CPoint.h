//Filename: CPoint.h
//Description: An abstract class to encapsulate the point properties
//Author: Mia Buchanan
//Date Last Modified: 10.24.21

#pragma once
#if !defined(_CPOINT_H_)
#define _CPOINT_H_

typedef double real;

class CPoint
{
public:
    CPoint(real newX=0.0, real newY=0.0);  //Defualt constructor
    ~CPoint(void); //Default destructor

    //Accessor Functions
    inline real getX(){return m_xLocation;}
    inline real getY() {return m_yLocation;}
    inline real x() {return m_xLocation;}
    inline real y() {return m_yLocation;}

    inline void set(real newX = 0.0, real newY = 0.0) {x(newX); y(newY);}
    inline void setX(real val) {x(val);}
    inline void setY(real val) {y(val);}
    inline void x(real val) {if (val >= 0.0) m_xLocation = val;}
    inline void y(real val) {if (val >= 0.0) m_yLocation = val;}

public:
    real calculateDistance(CPoint p);  //Calculate the distance between this and another point

private:
    real m_xLocation;
    real m_yLocation;
};

real calculateDistance(CPoint p1, CPoint p2);

#endif //_CPOINT_H_