#include "stdafx.h"
#include <fstream>
#include "container_atd.h"
#include "shape_atd.h"
using namespace std;
namespace simple_shapes {
	// Ñèãíàòóðû òðåáóåìûõ âíåøíèõ ôóíêöèé
	void Out(shape &s, ofstream &ofst);
	// Âûâîä ñîäåðæèìîãî êîíòåéíåðà â óêàçàííûé ïîòîê
	void OutRect(container &c, ofstream &ofst) {
		ofst << "Only rectangles." << endl;
		for (int i = 0; i < c.len; i++) {
			ofst << i << ": ";
			if (c.cont[i]->k == shape::RECTANGLE)
				Out(*(c.cont[i]), ofst);
			else
				ofst << endl;
		}
	}
} // end simple_shapes namespace