#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "container_atd.h"
using namespace std;
namespace simple_shapes {
	// Сигнатуры требуемых внешних функций
	void Init(container &c);
	void Clear(container &c);
	void In(container &c, ifstream &ifst);
	void Out(container &c, ofstream &ofst);
}
using namespace simple_shapes;
int main(int argc, char* argv[]) {
	if (argc != 3) {
		cout << "incorrect command line! "
			"Waited: command infile outfile" << endl;
		exit(1);
	}
	
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);

	if (!(ifst)) {
		cout << "File not find\n";
		cout << "exit";
		cin.get();  //Это если окошко сразу закрывается, задерживаем
		return -1;
	}
	else {
		cout << "Input file open\n";
	}
	if (!(ofst)) {
		cout << "File not find\n";
		cout << "exit";
		cin.get();  //Это если окошко сразу закрывается, задерживаем
		return -1;
	}
	else {
		cout << "Output file open\n";
	}

	cout << "Start" << endl;
	container c;
	Init(c);
	In(c, ifst);
	ofst << "Filled container. " << endl;
	Out(c, ofst);
	Clear(c);
	ofst << "Empty container. " << endl;
	Out(c, ofst);
	cout << "Stop" << endl;
	return 0;
}


