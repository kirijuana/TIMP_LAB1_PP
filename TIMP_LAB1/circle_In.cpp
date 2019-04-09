#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// ¬вод параметров круга из потока
	void In(circle &t, ifstream &ifst)
	{
		if (t.a < 0)
		{
			cout << "Incorrect rectangle value - x < 0";
		}
		if (t.b < 0)
		{
			cout << "Incorrect rectangle value - R < 0";
		}
		if (t.a == 0)
		{
			cout << "Incorrect rectangle value - x = 0";
		}
		if (t.b == 0)
		{
			cout << "Incorrect rectangle value - R = 0";
		}
		ifst >> t.a >> t.b >> t.colour;
	}
} // end simple_shapes namespace