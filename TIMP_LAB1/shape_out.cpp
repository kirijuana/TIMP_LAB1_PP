#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"
using namespace std;
namespace simple_shapes {
	// ��������� ��������� ������� �������.
	void Out(rectangle &r, ofstream &ofst);
	void Out(circle &t, ofstream &ofst);
	void Out(triangle &t, ofstream &ofst);
	// ����� ���������� ������� ������ � �����
	void Out(shape &s, ofstream &ofst) {
		switch (s.k) {
		case shape::key::RECTANGLE:
			Out(s.r, ofst);
			break;
		case shape::key::CIRCLE:
			Out(s.t, ofst);
			break;
		case shape::key::TRIANGLE:
			Out(s.t, ofst);
		default:
			ofst << "Incorrect figure!" << endl;
		}
	}
} // end simple_shapes namespace