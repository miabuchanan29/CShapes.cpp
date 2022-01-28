//Filename: CPolygon.h
//Description: An abstract class to encapsulate the Polygon properties
//Author: Mia Buchanan
//Date Last Modified: 10.24.21

#include "CShape.h"

#pragma once
#if !defined(_CPOLYGON_H_)
#define _CPOLYGON_H_

class CPolygon : public CShape
{
public:
    CPolygon(void);  //Defualt constructor
    ~CPolygon(void); //Default destructor


protected:
   int m_numSides;
};

#endif //_CPOLYGON_H_