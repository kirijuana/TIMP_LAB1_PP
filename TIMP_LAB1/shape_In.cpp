#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"

using namespace std;

namespace simple_shapes {
	// —игнатуры требуемых внешних функций
	void In(Rectangle &r, ifstream &ist);
	void In(Circle &c, ifstream &ist);
	void In(Triangle &t, ifstream &ist);
	// ¬вод параметров обобщенной фигуры из файла
	Shape* In(ifstream &ifst)
	{
		Shape *sp;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			sp = new Shape;
			sp->k = Shape::key::RECTANGLE;
			In(sp->r, ifst);
			break;
		case 2:
			sp = new Shape;
			sp->k = Shape::key::CIRCLE;
			In(sp->c, ifst);
			break;
		case 3:
			sp = new Shape;
			sp->k = Shape::key::TRIANGLE;
			In(sp->t, ifst);
			break;
		default:
			return 0;
		}
		ifst >> sp->density;
		return sp;
	}
} // end simple_shapes namespace