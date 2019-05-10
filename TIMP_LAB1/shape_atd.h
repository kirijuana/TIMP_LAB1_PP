#ifndef __shape_atd__
#define __shape_atd__
#include "circle_atd.h"
#include "triangle_atd.h"
#include "rectangle_atd.h"

namespace simple_shapes {
	// ���������, ���������� ��� ��������� ������
	struct shape {
		// �������� ������ ��� ������ �� �����
		enum key { RECTANGLE, CIRCLE, TRIANGLE };
		key k; // ����
			   // ������������ ������������
		float density;
		union { // ���������� ���������
			rectangle r;
			circle c;
			triangle t;

		};
	};
} // end simple_shapes namespace
#endif