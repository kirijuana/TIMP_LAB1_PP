#ifndef __shape_atd__
#define __shape_atd__
// Подключение необходимых типов данных
#include "rectangle_atd.h"
#include "circle_atd.h"
#include "triangle_atd.h"
#include "rectangle_atd.h"

namespace simple_shapes {
	// структура, обобщающая все имеющиеся фигуры
	struct Shape {
		// значения ключей для каждой из фигур
		enum key { RECTANGLE, CIRCLE, TRIANGLE };
		key k; // ключ
		float density;
			   // используемые альтернативы
		union { // используем включение
			Rectangle r;
			Circle c;
			Triangle t;
		};
	};
} // end simple_shapes namespace
#endif
