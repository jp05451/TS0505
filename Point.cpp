#include "Point.h"

void Point::Set(double x, double y)
{
				p[0] = x;
				p[1] = y;
}
void Point::Move(double x, double y)
{
				p[0] += x;
				p[1] += y;
}
void Point::Reflect()
{
				p[0] *= -1;
				p[1] *= -1;
}
void Point::Rotate()
{
				double tempx, tempy;
				tempx = p[0];
				tempy = p[1];
				p[0] = tempy;
				p[1] = tempx * -1;
}
const double Point::GetHorizontal()
{
				if (p[0] == -0)
								p[0] = abs(p[0]);
				return p[0];
}
const double Point::GetVertical()
{
				if (p[1] == -0)
								p[1]=abs(p[1]);
				return p[1];
}
Point::Point(Point& refrence)
{
				for (int i = 0; i < 2; i++)
				{
								this->p[i]=refrence.p[i];
				}
}
Point::~Point(){}
Point::Point() {}