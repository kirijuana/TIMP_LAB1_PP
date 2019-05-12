#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "container_atd.h"

using namespace std;

namespace simple_shapes {
	// Сигнатуры требуемых внешних функций
	void Init(Container &c);
	void Clear(Container &c);
	void In(Container &c, ifstream &ifst);
	void Out(Container &c, ofstream &ofst);
	void Sort(Container &c);
	void OutRect(Container &c, ofstream &ofst);
}

using namespace simple_shapes;

int main(int argc, char* argv[]) {
	if (argc != 3) {
		cout << "incorrect command line! "
			"Waited: command infile outfile" << endl;
		exit(1);
	}
	
	ifstream ifst(argv[1]);
	if (!ifst)
	{
		return -1;
	}
	
	ofstream ofst(argv[2]);
	if (!ofst)
	{
		return -1;
	}
	
	cout << "Start" << endl;
	Container c;
	Init(c);
	In(c, ifst);
	ofst << "Filled container. " << endl;
	ofst << "Main container. " << endl;
	Out(c, ofst);
	Sort(c);
	ofst << "Sort container. " << endl;
	Out(c, ofst);
	ofst << "OutRect container. " << endl;
	OutRect(c, ofst);
	Clear(c);
	ofst << "Empty container. " << endl;
	Out(c, ofst);
	cout << "Stop" << endl;
	return 0;
}

