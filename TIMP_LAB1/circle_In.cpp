#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"

using namespace std;

namespace simple_shapes {
	// ���� ���������� ����� �� ������
	void In(Circle &t, ifstream &ifst)
	{
		ifst >> t.x >> t.y >> t.R >> t.colour;
	}
} // end simple_shapes namespace