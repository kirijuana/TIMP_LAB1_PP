#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"
using namespace std;
namespace simple_shapes {
	// —игнатуры требуемых внешних функций
	void In(rectangle &r, ifstream &ist);
	void In(circle &t, ifstream &ist);
	void In(triangle &t, ifstream &ist);
	// ¬вод параметров обобщенной фигуры из файла
	shape* In(ifstream &ifst)
	{
		shape *sp;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			sp = new shape;
			sp->k = shape::key::RECTANGLE;
			In(sp->r, ifst);
			return sp;
		case 2:
			sp = new shape;
			sp->k = shape::key::CIRCLE;
			In(sp->t, ifst);
			return sp;
		case 3:
			sp = new shape;
			sp->k = shape::key::TRIANGLE;
			In(sp->t, ifst);
			return sp;
		default:
			return 0;
		}
	}
} // end simple_shapes namespace