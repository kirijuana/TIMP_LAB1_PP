#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// ����� ���������� ����� � �����
	int Perimeter(circle &c)
	{
		return c.R * 2 * 3.1415;
	}
} // end simple_shapes namespace
