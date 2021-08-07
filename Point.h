#ifndef  DEBUG
#include<iostream>
#include<cmath>

using namespace std;
#endif // DEBUG
class Point
{
public:
				void Set(double x, double y);
				void Move(double x, double y);
				void Rotate();
				void Reflect();
				Point(Point& refrence);
				Point();
				const double GetHorizontal();
				const double GetVertical();
				~Point();
private:
				double p[2] = { 0 };
};
