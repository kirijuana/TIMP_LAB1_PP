#ifndef __shape_atd__
#define __shape_atd__
// ����������� ����������� ����� ������
#include "rectangle_atd.h"
#include "circle_atd.h"
namespace simple_shapes {
	// ���������, ���������� ��� ��������� ������
	struct shape {
		// �������� ������ ��� ������ �� �����
		enum key { RECTANGLE, CIRCLE };
		key k; // ����
		int angle;
			   // ������������ ������������
		union { // ���������� ���������
			rectangle r;
			circle t;
		};
	};
} // end simple_shapes namespace
#endif
