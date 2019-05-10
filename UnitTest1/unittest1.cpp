#include "stdafx.h"
#include "CppUnitTest.h"
#include "Header.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(InRectangle)
		{
			ifstream ReadFile("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//RectangleInput.txt");
			rectangle expected;
			expected.x = 5;
			shape *actual;
			rectangle *temp;
			actual = (shape*)InputRectangle(ReadFile);
			actual->k = RECTANGLE;
			temp = (rectangle*)actual;
			Assert::AreEqual(double(expected.x), double(temp->x));
		}
		TEST_METHOD(InCircle)
		{
			ifstream ReadFile("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//CircleInput.txt");
			circle expected;
			expected.x = 7;
			shape *actual;
			circle *temp;
			actual = (shape*)InputCircle(ReadFile);
			actual->k = CIRCLE;
			temp = (circle*)actual;
			Assert::AreEqual(double(expected.x), double(temp->x));
		}
		TEST_METHOD(InTriangle)
		{
			ifstream ReadFile("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//TriangleInput.txt");
			triangle expected;
			expected.a = 5;
			shape *actual;
			triangle *temp;
			actual = (shape*)InputTriangle(ReadFile);
			actual->k = TRIANGLE;
			temp = (triangle*)actual;
			Assert::AreEqual(double(expected.a), double(temp->a));
		}
		TEST_METHOD(OutR)
		{
			ofstream WriteFile("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//expectRectangle.txt");
			rectangle temp;
			temp.x = 5;
			temp.y = 50;
			strcpy(temp.colour, "Black");
			temp.density = 1.1;
			OutRectangle(&temp, WriteFile);
			WriteFile.close();
			ifstream ReadFile1("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//factRectangle.txt");
			ifstream ReadFile2("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//expectRectangle.txt");
			string expected;
			getline(ReadFile1, expected, '\0');
			string actual;
			getline(ReadFile2, actual, '\0');
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(OutCircl)
		{
			ofstream WriteFile("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//expectCircle.txt");
			circle temp;
			temp.x = 5;
			temp.y = 4;
			temp.R = 5;
			strcpy(temp.colour, "Black");
			temp.density = 1.5;
			OutCircle(&temp, WriteFile);
			WriteFile.close();
			ifstream ReadFile1("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//factCircle.txt");
			ifstream ReadFile2("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//expectCircle.txt");
			string expected;
			getline(ReadFile1, expected, '\0');
			string actual;
			getline(ReadFile2, actual, '\0');
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(OutTriangl)
		{
			ofstream WriteFile("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//expectTriangle.txt");
			triangle temp;
			temp.a = 5;
			temp.b = 5;
			temp.c = 5;
			strcpy(temp.colour, "Black");
			temp.density = 1.5;
			OutTriangle(&temp, WriteFile);
			WriteFile.close();
			ifstream ReadFile1("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//factTriangle.txt");
			ifstream ReadFile2("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//expectTriangle.txt");
			string expected;
			getline(ReadFile1, expected, '\0');
			string actual;
			getline(ReadFile2, actual, '\0');
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(OutContainer)
		{
			ofstream WriteFile("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//OutConainer.txt");
			ifstream ReadFile1("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//Input.txt");
			container c;
			Initialisation(c);
			In(ReadFile1, c);
			Out(c, WriteFile);
			WriteFile.close();
			ifstream ReadFile2("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//OutList.txt");
			ifstream ReadFile3("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//OutConainer.txt");
			string expected;
			getline(ReadFile2, expected, '\0');
			string actual;
			getline(ReadFile3, actual, '\0');
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestSort)
		{
			ofstream WriteFile("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//OutSorting.txt");
			ifstream ReadFile1("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//Input.txt");
			container c;
			Initialisation(c);
			In(ReadFile1, c);
			Sorting(c);
			Out(c, WriteFile);
			WriteFile.close();
			ifstream ReadFile2("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//expecSorting.txt");
			ifstream ReadFile3("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//OutSorting.txt");
			string expected;
			getline(ReadFile2, expected, '\0');
			string actual;
			getline(ReadFile3, actual, '\0');
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(OutOShot)
		{
			ofstream WriteFile("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//FilterOut.txt");
			ifstream ReadFile1("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//Input.txt");
			container c;
			Initialisation(c);
			In(ReadFile1, c);
			FiltredOut(c, WriteFile);
			WriteFile.close();
			ifstream ReadFile2("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//expecFilterOut.txt");
			ifstream ReadFile3("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//FilterOut.txt");
			string expected;
			getline(ReadFile2, expected, '\0');
			string actual;
			getline(ReadFile3, actual, '\0');
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestSravnenie)
		{
			ifstream ReadFile1("C://Users//kirijuana//source//repos//kirijuana//TIMP_LAB1_PP//UnitTest1//inputSravnenie.txt");
			bool actual;
			shape *temp;
			temp = (shape*)InputRectangle(ReadFile1);
			temp->k = RECTANGLE;
			shape *temp2;
			temp2 = (shape*)InputRectangle(ReadFile1);
			temp2->k = RECTANGLE;
			if (Sravnenie(temp) > Sravnenie(temp2))
				actual = true;
			bool expected = true;
			Assert::AreEqual(expected, actual);
		}
		
	};
}