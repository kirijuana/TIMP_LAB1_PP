#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {

	int Perimeter(circle &c)
	{
		if (c.R < 0)
		{
			cout << "Incorrect rectangle value - R < 0";
		}
		if (c.R == 0)
		{
			cout << "Incorrect rectangle value - R = 0";
		}
		
		while (!(cin >> c.R) || (cin.peek() != '\n'))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Error!" << endl;
		}
		return c.R * 2 * 3.14;
	}
} // end simple_shapes namespace