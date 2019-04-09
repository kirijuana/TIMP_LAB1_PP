#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// ¬вод параметров круга из потока
	void In(circle &t, ifstream &ifst)
	{
		if (t.a <= 0 || t.b <= 0)
			cout << "Incorrect circle value";
		ifst >> t.a >> t.b >> t.colour;
	}
} // end simple_shapes namespace