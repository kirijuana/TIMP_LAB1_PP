#include "stdafx.h"
#include <fstream>
#include "container_atd.h"

using namespace std;

namespace simple_shapes {
	// ��������� ��������� ������� �������
	void Out(Shape &s, ofstream &ofst);
	int Perimeter(Shape &s);
	// ����� ����������� ���������� � ��������� �����
	void Out(Container &c, ofstream &ofst) {
		ofst << "Container contains " << c.len
			<< " elements." << endl;
		for (int i = 0; i < c.len; i++) {
			ofst << i << ": ";
			Out(*(c.cont[i]), ofst);
			ofst << "perimeter = "
				<< Perimeter(*(c.cont[i])) << endl;
		}
	}}