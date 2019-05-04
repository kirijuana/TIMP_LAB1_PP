#include "stdafx.h"
#include <fstream>
#include "triangle_atd.h"
using namespace std;
namespace simple_shapes {
	// ¬вод параметров пр€моугольника из файла
	int Perimeter(triangle &t)
	{
		return t.a + t.b + t.c;
	}
}// end simple_shapes namespace