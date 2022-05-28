#include "Triangle.h"

Triangle::Triangle(string name, float a) : Figure(name)
{
	m_a = a;
	m_area = sqrt(3) / 4 * m_a * m_a;
	m_perimeter = 3 * m_a;
}

float Triangle::Area() const
{
	return m_area;
}

float Triangle::Perimeter() const
{
	return m_perimeter;
}

void Triangle::Info() const
{
	cout << "Triangle: " << Name() << endl;
	cout << "Dimensions: " << m_a << " x " << m_a << " x " << m_a << endl;
	cout << "Area: " << m_area << endl;
	cout << "Perimeter: " << m_perimeter << endl;
}