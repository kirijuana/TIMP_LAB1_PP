#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// ¬вод параметров круга из потока
	void In(circle &c, ifstream &ifst)
	{
		if (c.x < 0)
		{
			cout << "Incorrect rectangle value - x < 0";
		}
		if (c.y < 0)
		{
			cout << "Incorrect rectangle value - R < 0";
		}
		if (c.x == 0)
		{
			cout << "Incorrect rectangle value - x = 0";
		}
		if (c.y == 0)
		{
			cout << "Incorrect rectangle value - R = 0";
		}
		if (c.R == 0)
		{
			cout << "Incorrect rectangle value - R = 0";
		}
		if (c.R < 0)
		{
			cout << "Incorrect rectangle value - R < 0";
		}
		ifst >> c.x >> c.y >> c.R >> c.colour;
	}
} // end simple_shapes namespace