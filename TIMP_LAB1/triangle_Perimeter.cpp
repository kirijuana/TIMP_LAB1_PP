#include "stdafx.h"
#include <fstream>
#include "triangle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {

	int Perimeter(triangle &t)
	{
		if (t.a < 0)
		{
			cout << "Incorrect triangle value - a < 0";
			exit(1);
		}
		if (t.a == 0)
		{
			cout << "Incorrect triangle value - a = 0";
			exit(1);
		}
		if (t.b < 0)
		{
			cout << "Incorrect triangle value - b < 0";
			exit(1);
		}
		if (t.b == 0)
		{
			cout << "Incorrect triangle value - b = 0";
			exit(1);
		}
		if (t.c < 0)
		{
			cout << "Incorrect triangle value - c < 0";
			exit(1);
		}
		if (t.c == 0)
		{
			cout << "Incorrect triangle value - c = 0";
			exit(1);
		}
		return t.a + t.b + t.c;
	}
} // end simple_shapes namespace