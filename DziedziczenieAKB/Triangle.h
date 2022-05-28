#pragma once
#include "Figure.h"

class Triangle : public Figure
{
private:
	float m_a;
	float m_area;
	float m_perimeter;

public:
	Triangle(string name = "", float a = 0);
	virtual ~Triangle() {}
	virtual float Area() const;
	virtual float Perimeter() const;
	virtual void Info() const;
};