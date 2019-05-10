#include "stdafx.h"
#include <fstream>
#include "triangle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// Ââîä ïàðàìåòðîâ êðóãà èç ïîòîêà
	void In(triangle &t, ifstream &ifst)
	{
		ifst >> t.a >> t.b >> t.c >> t.colour;
		if (ifst.fail())
		{
			cout << "Wrong input triangle!" << endl;
			exit(1);
		}
		if (t.a < 0)
		{
			cout << "Incorrect rectangle value - a < 0";
			exit(1);
		}
		if (t.a == 0)
		{
			cout << "Incorrect rectangle value - a = 0";
			exit(1);
		}
		if (t.b == 0)
		{
			cout << "Incorrect rectangle value - b = 0";
			exit(1);
		}
		if (t.b < 0)
		{
			cout << "Incorrect rectangle value - b < 0";
			exit(1);
		}
		if (t.c == 0)
		{
			cout << "Incorrect rectangle value - c = 0";
			exit(1);
		}
		if (t.c < 0)
		{
			cout << "Incorrect rectangle value - c < 0";
			exit(1);
		}
	}
} // end simple_shapes namespace