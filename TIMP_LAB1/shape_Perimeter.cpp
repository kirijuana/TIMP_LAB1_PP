#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"
using namespace std;
namespace simple_shapes {
	// Ñèãíàòóðû òðåáóåìûõ âíåøíèõ ôóíêöèé
	int Perimeter(rectangle &r);
	int Perimeter(circle &c);
	// Ââîä ïàðàìåòðîâ îáîáùåííîé ôèãóðû èç ôàéëà
	int Perimeter(shape &s)
	{
		switch (s.k) {

		case shape::key::RECTANGLE:
			return Perimeter(s.r);
		case shape::key::CIRCLE:
			return Perimeter(s.c);
		default:
			return -1;
		}
	}
} // end simple_shapes namespace