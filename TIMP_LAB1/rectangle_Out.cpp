#include "stdafx.h"
#include <fstream>
#include "rectangle_atd.h"

using namespace std;

namespace simple_shapes {
	// ����� ���������� �������������� � �����
	void Out(rectangle &r, ofstream &ofst) {
		ofst << "It is Rectangle: x = " << r.x
			<< ", y = " << r.y << ", Colour = " << r.colour << endl;
	}
} // end simple_shapes namespace