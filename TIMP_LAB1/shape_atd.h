#ifndef __shape_atd__
#define __shape_atd__
// ����������� ����������� ����� ������
#include "rectangle_atd.h"
#include "circle_atd.h"
#include "triangle_atd.h"
#include "rectangle_atd.h"

namespace simple_shapes {
	// ���������, ���������� ��� ��������� ������
	struct Shape {
		// �������� ������ ��� ������ �� �����
		enum key { RECTANGLE, CIRCLE, TRIANGLE };
		key k; // ����
		float density;
			   // ������������ ������������
		union { // ���������� ���������
			Rectangle r;
			Circle c;
			Triangle t;
		};
	};
} // end simple_shapes namespace
#endif
