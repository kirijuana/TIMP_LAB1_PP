#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"
using namespace std;
namespace simple_shapes {
	// —игнатуры требуемых внешних функций
	int Perimeter(rectangle &r);
	int Perimeter(circle &t);
	// ¬вод параметров обобщенной фигуры из файла
	int Perimeter(shape &s)
	{
		switch (s.k) {
		case shape::key::RECTANGLE:
			return Perimeter(s.r);
		case shape::key::TRIANGLE:
				return Perimeter(s.t);
		default:
			return -1;
		}
	}
} // end simple_shapes namespace
