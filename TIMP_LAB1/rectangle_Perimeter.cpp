#include "stdafx.h"
#include <fstream>
#include "rectangle_atd.h"

using namespace std;

namespace simple_shapes {
	// ���� ���������� �������������� �� �����
	int Perimeter(Rectangle &r)
	{
		return r.x + r.y;
	}
}// end simple_shapes namespace