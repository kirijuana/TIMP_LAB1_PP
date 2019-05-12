#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"
using namespace std;
namespace simple_shapes {
	// ��������� ��������� ������� �������
	void In(rectangle &r, ifstream &ist);
	void In(circle &c, ifstream &ist);
	// ���� ���������� ���������� ������ �� �����
	shape* In(ifstream &ifst)
	{
		shape *sp;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			sp = new shape;
			sp->k = shape::key::RECTANGLE;
			In(sp->r, ifst);
			return sp;
		case 2:
			sp = new shape;
			sp->k = shape::key::CIRCLE;
			In(sp->c, ifst);
			return sp;
		default:
			return 0;
		}
	}
} // end simple_shapes namespace