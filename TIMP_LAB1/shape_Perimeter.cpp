#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"
using namespace std;
namespace simple_shapes {
	
	int Perimeter(rectangle &r);
	int Perimeter(circle &c);
	int Perimeter(triangle &t);
	int Perimeter(shape &s)
	{
		switch (s.k) {

		case shape::key::RECTANGLE:
			return Perimeter(s.r);
		case shape::key::CIRCLE:
			return Perimeter(s.c);
		case shape::key::TRIANGLE:
			return Perimeter(s.t);
		default:
			return -1;
		}
	}
} // end simple_shapes namespace