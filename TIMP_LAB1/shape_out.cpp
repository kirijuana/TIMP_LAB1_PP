#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"
using namespace std;
namespace simple_shapes {
	// Сигнатуры требуемых внешних функций.
	void Out(rectangle &r, ofstream &ofst);
	void Out(circle &c, ofstream &ofst);
	void Out(triangle &t, ofstream &ofst);
	// Вывод параметров текущей фигуры в поток
	void Out(shape &s, ofstream &ofst) {
		switch (s.k) {
		case shape::key::RECTANGLE:
			Out(s.r, ofst);
			break;
		case shape::key::CIRCLE:
			Out(s.c, ofst);
			break;
		case shape::key::TRIANGLE:
			Out(s.t, ofst); 
		default:
			ofst << "Incorrect figure!" << endl;
		}
		ofst << "angle = " << s.angle << endl;
	}
} // end simple_shapes namespace