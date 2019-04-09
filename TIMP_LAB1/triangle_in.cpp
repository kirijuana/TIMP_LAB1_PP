#include "stdafx.h"
#include <fstream>
#include "triangle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// Ââîä ïàðàìåòðîâ êðóãà èç ïîòîêà
	void In(triangle &t, ifstream &ifst)
	{
		if (t.a <= 0 || t.b <= 0 || t.c <= 0)
		{
			cout << "Please enter a valid triangle value";
		}
		ifst >> t.a >> t.b >> t.c >> t.colour;
	}
} // end simple_shapes namespace