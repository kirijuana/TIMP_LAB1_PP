#pragma once
#include "iostream"
#include "fstream"
#include <string>

using namespace std;



enum key { RECTANGLE, CIRCLE, TRIANGLE };
struct shape
{
	shape *next;
	key k; // êëþ÷

};//

struct rectangle :shape
{
	shape *next;
	key k; // êëþ÷
	
	int x, y; // // целочисленные координаты левого верхнего и правого нижнего углов
	char colour[10];
	float density;
};

struct circle :shape
{
	shape *next;
	key k; // êëþ÷

	int x, y, R;
	char colour[10];
	float density;
};

struct triangle :shape
{
	shape *next;
	key k; // êëþ÷

	int a, b, c; // целочисленные координата вершин
	char colour[10];
	float density;
};

struct container
{
	int len;
	shape *current;
};


void Initialisation(container &c);

void In(ifstream &ReadFile, container &c);

void Clear(container &c);

void Out(container &c, ofstream &WriteFile);

int Perimeter(rectangle *R);

int Perimeter(circle *C);

int Perimeter(triangle *T);

void Sorting(container &c);

float Sravnenie(shape *s);


void FiltredOut(container &c, ofstream &WriteFile);

void RectOut(shape *s, ofstream &WriteFile);




shape * InShape(shape *current, ifstream &ReadFile);


void OutShape(shape *s, ofstream &WriteFile);



rectangle * InputRectangle(ifstream &ReadFile);


void OutRectangle(rectangle *R, ofstream &WriteFile);


circle * InputCircle(ifstream &ReadFile);


void OutCircle(circle *C, ofstream &WriteFile);

triangle * InputTriangle(ifstream &ReadFile);

void OutTriangle(triangle *T, ofstream &WriteFile);


