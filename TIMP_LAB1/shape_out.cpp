#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"

using namespace std;

namespace simple_shapes {
	// Сигнатуры требуемых внешних функций.
	void Out(Rectangle &r, ofstream &ofst);
	void Out(Circle &c, ofstream &ofst);
	void Out(Triangle &t, ofstream &ofst);
	// Вывод параметров текущей фигуры в поток
	void Out(Shape &s, ofstream &ofst) {
		switch (s.k) {
		case Shape::key::RECTANGLE:
			Out(s.r, ofst);
			break;
		case Shape::key::CIRCLE:
			Out(s.c, ofst);
			break;
		case Shape::key::TRIANGLE:
			Out(s.t, ofst);
			break;
		default:
			ofst << "Incorrect figure!" << endl;
		}
		ofst << "density = " << s.density << endl;
	}
} // end simple_shapes namespace