#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"

using namespace std;

namespace simple_shapes {
	int Perimeter(Shape &s);
	// C�������� ������ ���� ����������� ��������
	bool Compare(Shape *first, Shape *second) {
		return Perimeter(*first) < Perimeter(*second);
	}
} // end simple_shapes namespace

