#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// ¬вод параметров круга из потока
	void In(circle &t, ifstream &ifst)
	{
		ifst >> t.a >> t.b;
	}
} // end simple_shapes namespace