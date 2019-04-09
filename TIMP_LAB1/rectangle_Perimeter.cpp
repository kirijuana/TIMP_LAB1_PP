#include "stdafx.h"
#include <fstream>
#include "rectangle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {

	int Perimeter(rectangle &r)
	{
		if (r.x < 0)
		{
			cout << "Incorrect rectangle value - x < 0";
		}
		if (r.x == 0)
		{
			cout << "Incorrect rectangle value - x = 0";
		}
		if (r.y == 0)
		{
			cout << "Incorrect rectangle value - y = 0";
		}
		if (r.y < 0)
		{
			cout << "Incorrect rectangle value - y < 0";
		}
		return r.x + r.y;
	}
}// end simple_shapes namespace