#ifndef __container_atd__
#define __container_atd__

namespace simple_shapes {
	// ������ �� �������� �������������� ������.
	// ������ ��������� ����� ������ ��� ��������������
	// ���������� ���������� �� ���������
	struct Shape;
	// ���������� ��������� �� ������ ����������� �������
	struct Container
	{
		enum { max_len = 100 }; // ������������ �����
		int len; // ������� �����
		Shape *cont[max_len];
	};
} // end simple_shapes namespace
#endif