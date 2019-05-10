#include "stdafx.h"
#include "Header.h"

int main()
{
	ifstream ReadFile("input.txt");
	ofstream WriteFile("output.txt");
	cout << "Start" << endl;
	container c;
	Initialisation(c);
	In(ReadFile, c);
	Out(c, WriteFile);
	WriteFile << "================================================" << endl;
	Sorting(c);
	Out(c, WriteFile);
	FiltredOut(c, WriteFile);
	Clear(c);
	cout << "Stop" << endl;
	return 0;
}