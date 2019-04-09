#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {

	int Perimeter(circle &r)
	{
		if (r.a <= 0 || r.b <= 0)
			cout << "Incorrect circle value";
		return r.a + r.b;
	}
} // end simple_shapes namespace