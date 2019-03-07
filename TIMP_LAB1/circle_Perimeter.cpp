#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {

	int Perimeter(circle &r)
	{
		return r.a + r.b;
	}
} // end simple_shapes namespace