#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"
using namespace std;
namespace simple_shapes {
	// Ñèãíàòóðû òðåáóåìûõ âíåøíèõ ôóíêöèé
	int Perimeter(rectangle &r);
	int Perimeter(circle &t);
	// Ââîä ïàðàìåòðîâ îáîáùåííîé ôèãóðû èç ôàéëà
	int Perimeter(shape &s)
	{
		switch (s.k) {
		case shape::key::CIRCLE:
			return Perimeter(s.t);
		case shape::key::RECTANGLE:
			return Perimeter(s.r);
		default:
			return -1;
		}
	}
} // end simple_shapes namespace