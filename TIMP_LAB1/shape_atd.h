#ifndef __shape_atd__
#define __shape_atd__
// Подключение необходимых типов данных
#include "rectangle_atd.h"
#include "circle_atd.h"
namespace simple_shapes {
	// структура, обобщающая все имеющиеся фигуры
	struct shape {
		// значения ключей для каждой из фигур
		enum key { RECTANGLE, CIRCLE };
		key k; // ключ
		int angle;
			   // используемые альтернативы
		union { // используем включение
			rectangle r;
			circle t;
		};
	};
} // end simple_shapes namespace
#endif
