#include "stdafx.h"
#include <fstream>
#include "rectangle_atd.h"
#include <iostream>;
using namespace std;
namespace simple_shapes {
	// ¬вод параметров пр€моугольника из файла
	void In(rectangle &r, ifstream &ifst) {

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
		ifst >> r.x >> r.y >> r.colour;
	}
} // end simple_shapes namespace