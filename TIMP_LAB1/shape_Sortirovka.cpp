#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"
using namespace std;
namespace simple_shapes {
	int Perimeter(shape &s);
	//-----------------------------------------------------
	// Cравнение ключей двух программных объектов
	bool Compare(shape *first, shape *second) {
		return Perimeter(*first) < Perimeter(*second);
	}
} // end simple_shapes namespace
// Сигнатуры требуемых функций
