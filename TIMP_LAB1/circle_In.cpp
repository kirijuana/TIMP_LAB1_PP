#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// ���� ���������� ����� �� ������
	void In(circle &t, ifstream &ifst)
	{
		ifst >> t.x >> t.R >> t.colour;
	}
} // end simple_shapes namespace