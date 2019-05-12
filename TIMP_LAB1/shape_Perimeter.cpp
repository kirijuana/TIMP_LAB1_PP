#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"

using namespace std;

namespace simple_shapes {
	// ��������� ��������� ������� �������
	int Perimeter(Rectangle &r);
	int Perimeter(Circle &c);
	int Perimeter(Triangle &t);
	// ���� ���������� ���������� ������ �� �����
	int Perimeter(Shape &s)
	{
		switch (s.k) {
		case Shape::key::RECTANGLE:
			return Perimeter(s.r);
		case Shape::key::CIRCLE:
				return Perimeter(s.c);
		case Shape::key::TRIANGLE:
			return Perimeter(s.t);
		default:
			return -1;
		}
	}
} // end simple_shapes namespace

