﻿#include "stdafx.h"
#include <fstream>
#include "shape_atd.h"
#include "container_atd.h"
#include "rectangle_atd.h"
#include "circle_atd.h"

using namespace std;

namespace simple_shapes {
	// Ñèãíàòóðû òðåáóåìûõ
	void Out(shape &s, ofstream &ofst);
	//-----------------------------------------------------
	// Ìóëüòèìåòîä
	void MultiMethod(container &c, ofstream &ofst) {
		ofst << "Multimethod." << endl;

		for (int i = 0; i < c.len - 1; i++) {
			for (int j = i + 1; j < c.len; j++) {
				switch (c.cont[i]->k) {
				case shape::RECTANGLE:
					switch (c.cont[j]->k) {
					case shape::RECTANGLE:
						ofst << "Rectangle and Rectangle." << endl;
						break;
					case shape::CIRCLE:
						ofst << "Rectangle and Circle." << endl;
						break;
					case shape::TRIANGLE:
						ofst << "Rectangle and Triangle." << endl;
						break;
					default:
						ofst << "Unknown type" << endl;
					}
					break;
				case shape::CIRCLE:
					switch (c.cont[j]->k) {
					case shape::RECTANGLE:
						ofst << "Circle and Rectangle." << endl;
						break;
					case shape::CIRCLE:
						ofst << "Circle and Circle." << endl;
						break;
					case shape::TRIANGLE:
						ofst << "Circle and Triangle." << endl;
						break;
					default:
						ofst << "Unknown type" << endl;
					}
					break;
				case shape::TRIANGLE:
					switch (c.cont[j]->k) {
					case shape::RECTANGLE:
						ofst << "Triangle and Rectangle." << endl;
						break;
					case shape::CIRCLE:
						ofst << "Triangle and Circle." << endl;
						break;
					case shape::TRIANGLE:
						ofst << "Triangle and Triangle." << endl;
						break;
					default:
						ofst << "Unknown type" << endl;
					}
				default:
					ofst << "Unknown type" << endl;
				}
				Out(*(c.cont[i]), ofst);
				Out(*(c.cont[j]), ofst);
			}
		}
	}
} // end simple_shapes namespace