#ifndef __container_atd__
#define __container_atd__
namespace simple_shapes {
	// —сылка на описание геометрической фигуры.
	// «нание структуры самой фигуры дл€ представленной
	// реализации контейнера не требуетс€
	struct shape;
	// ѕростейший контейнер на основе одномерного массива
	struct container
	{
		enum { max_len = 100 }; // максимальна€ длина
		int len; // текуща€ длина
		shape *cont[max_len];
	};
} // end simple_shapes namespace
#endif