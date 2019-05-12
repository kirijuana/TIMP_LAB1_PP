#include "stdafx.h"
#include <fstream>
#include "container_atd.h"
#include "shape_atd.h"

using namespace std;

namespace simple_shapes {
	// Сигнатуры требуемых внешних функций
	void Out(Shape &s, ofstream &ofst);
	// Вывод содержимого контейнера в указанный поток
	void OutRect(Container &c, ofstream &ofst) {
		ofst << "Only rectangles." << endl;
		for (int i = 0; i < c.len; i++) {
			ofst << i << ": ";
			if (c.cont[i]->k == Shape::RECTANGLE)
				Out(*(c.cont[i]), ofst);
			else
				ofst << endl;
		}
	}
} // end simple_shapes namespace