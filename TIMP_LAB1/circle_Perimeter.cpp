#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {

	int Perimeter(circle &r)
	{
		if (r.b < 0)
		{
			cout << "Incorrect rectangle value - R < 0";
		}
		if (r.b == 0)
		{
			cout << "Incorrect rectangle value - R = 0";
		}
		return r.b * 2 * 3.14;
		if (r.b * 2 * 3.14 <= 0)

		{
			cout << "No roots perimeter circle!" << endl;
			return 0;
		}
	}
} // end simple_shapes namespace