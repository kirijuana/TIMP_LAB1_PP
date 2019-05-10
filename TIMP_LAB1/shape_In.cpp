#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// ��������� ��������� ������� �������
	void In(rectangle &r, ifstream &ist);
	void In(circle &c, ifstream &ist);
	void In(triangle &t, ifstream &ist);
	// ���� ���������� ���������� ������ �� �����
	shape* In(ifstream &ifst)
	{
		shape *sp;
		int k;
		ifst >> k;
		if (k != 1 && k != 2 && k != 3)
		{
			cout << "Incorrect value Key";
			exit(1);
		}
		switch (k) {
		case 1:
			sp = new shape;
			sp->k = shape::key::RECTANGLE;
			In(sp->r, ifst);
			break;
		case 2:
			sp = new shape;
			sp->k = shape::key::CIRCLE;
			In(sp->c, ifst);
			break;
		case 3:
			sp = new shape;
			sp->k = shape::key::TRIANGLE;
			In(sp->t, ifst);
			break;
		default:
			return 0;
		}
		ifst >> sp->density;
		if (ifst.fail())

		{
			cout << "Wrong input shape!" << endl;
		}
		return sp;
	}
} // end simple_shapes namespace