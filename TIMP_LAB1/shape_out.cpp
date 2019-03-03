#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"
using namespace std;
namespace simple_shapes {
	// Сигнатуры требуемых внешних функций.
	void Out(rectangle &r, ofstream &ofst);
	void Out(circle &t, ofstream &ofst);
	void Out(shape &s, ofstream &ofst)
	{
		switch (s.k) {
		case shape::key::RECTANGLE:
			Out(s.r, ofst);
			break;
		case shape::key::CIRCLE:
			Out(s.t, ofst);
			break;
		default:
			ofst << "Incorrect figure!" << endl;
		}
		ofst << "angle = " << s.angle << endl;
	}
} // end simple_shapes namespace