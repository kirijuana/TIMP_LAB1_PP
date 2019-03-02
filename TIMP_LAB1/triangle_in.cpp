#include "stdafx.h"
#include <fstream>
#include "triangle_atd.h"
using namespace std;
namespace simple_shapes {
	// ¬вод параметров круга из потока
	void In(triangle &t, ifstream &ifst)
	{
		ifst >> t.a >> t.b >> t.c >> t.colour;
	}
} // end simple_shapes namespace