#include "stdafx.h"
#include <fstream>
#include "triangle_atd.h"
using namespace std;
namespace simple_shapes {
	
	void Out(triangle &t, ofstream &ofst)
	{
		ofst << "It is Triangle: a = "
			<< t.a << ", b = " << t.b << ", c = " << t.c << ", Colour =  " << t.colour << endl;
	}
} // end simple_shapes namespace