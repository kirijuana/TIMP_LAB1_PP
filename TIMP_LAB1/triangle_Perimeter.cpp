#include "stdafx.h"
#include <fstream>
#include "triangle_atd.h"
using namespace std;
namespace simple_shapes {
	// ���� ���������� �������������� �� �����
	int Perimeter(triangle &t)
	{
		return t.a + t.b + t.c;
	}
}// end simple_shapes namespace