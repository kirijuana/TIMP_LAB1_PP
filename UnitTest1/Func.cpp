#include "stdafx.h"
#include "Header.h"



void Initialisation(container &c)
{
	c.current = NULL;
	c.len = 0;
}


void In(ifstream &ReadFile, container &c)
{
	if (!ReadFile.eof())
	{
		c.current = InShape(c.current, ReadFile);
		c.len++;
	}

	while (!ReadFile.eof())
	{
		if ((c.current = InShape(c.current, ReadFile)) != 0)
		{
			c.len++;
		}
	}
}


void Out(container &c, ofstream &WriteFile)
{

	for (int i = 0; i < c.len; i++)
	{
		WriteFile << i + 1 << ": ";
		if (c.len > 0)
		{
			OutShape(c.current, WriteFile);
			c.current = c.current->next;
		}
	}
}


void Clear(container &c)
{
	while (c.len > 0)
	{
		if (c.len == 1)
		{
			shape *temp = c.current;
			c.current = nullptr;
			delete(temp);
			c.len = c.len - 1;
			break;
		}
		shape *temp;
		temp = c.current->next;
		while (temp->next != c.current)
			temp = temp->next;

		temp->next = c.current->next;
		free(c.current);
		c.current = temp;
		c.len = c.len - 1;
	}
}




shape *InShape(shape *current, ifstream &ReadFile)
{
	shape *temp, *help;
	int k;
	ReadFile >> k;
	switch (k) {
	case 1:
		temp = (shape*)InputRectangle(ReadFile);
		temp->k = RECTANGLE;
		break;
	case 2:
		temp = (shape*)InputCircle(ReadFile);
		temp->k = CIRCLE;
		break;
	case 3:
		temp = (shape*)InputTriangle(ReadFile);
		temp->k = TRIANGLE;
		break;

	default:
		return 0;
	}

	if (current == NULL)
	{
		temp->next = temp; 
	}

	else
	{
		help = current->next; 
		current->next = temp; 
		temp->next = help; 
	}
	return temp;
}



rectangle * InputRectangle(ifstream &ReadFile)
{
	rectangle *R;
	R = new rectangle;
	ReadFile >> R->x;
	ReadFile >> R->y;
	ReadFile >> R->colour;
	ReadFile >> R->density;
	return(R);
}

//Ââîä äðîáíîãî ÷èñëà
circle * InputCircle(ifstream &ReadFile)
{
	circle *C;
	C = new circle;
	ReadFile >> C->x;
	ReadFile >> C->y; 
	ReadFile >> C->R;
	ReadFile >> C->colour;
	ReadFile >> C->density;
	return(C);
}

triangle * InputTriangle(ifstream & ReadFile)
{
	triangle *T;
	T = new triangle;
	ReadFile >> T->a;
	ReadFile >> T->b;
	ReadFile >> T->c;
	ReadFile >> T->colour;
	ReadFile >> T->density;
	return(T);
}

// Âûâîä òåêóùåé ñòðóêòóðû
void OutShape(shape *s, ofstream &WriteFile)
{

	switch (s->k) {
	case RECTANGLE:
		OutRectangle((rectangle*)s, WriteFile);
		break;
	case CIRCLE:
		OutCircle((circle*)s, WriteFile);
		break;
	case TRIANGLE:
		OutTriangle((triangle*)s, WriteFile);
		break;
	default:
		break;
	}
}



// Âûâîä äðîáíîé ñòðóêòóðû
void OutRectangle(rectangle *R, ofstream &WriteFile)
{
	//Nod = NOD(R->number1, R->number2);
	WriteFile << "It is Rectangle: x = " << R->x
		<< ", y = " << R->y << ", Colour = " << R->colour << R->density << endl;
}




//Âûâîä êîìïëåêñíîé ñòðóêòóðû
void OutCircle(circle *C, ofstream &WriteFile)
{
	WriteFile << "It is Circle: x = "
		<< C->x << "y = " << C->y << ", R = " << C->R << ", Colour = " << C->colour << endl;
}



void OutTriangle(triangle *T, ofstream & WriteFile)
{
	WriteFile << "It is Triangle: a = "
		<< T->a << ", b = " << T->b << ", c = " << T->c << ", Colour =  " << T->colour << endl;
}

int Perimeter(rectangle *R)
{
	return R->x + R->y;
}

int Perimeter(circle *C)
{
	return C->R * 2 * 3.1415;
}

int Perimeter(triangle *T)
{
	return T->a + T->b + T->c;
}

float Sravnenie(shape *s)
{
	int temp;
	switch (s->k) {
	case RECTANGLE:

		temp = Perimeter((rectangle*)s);
		return temp;
	case CIRCLE:
		temp = Perimeter((circle*)s);
		return temp;
	case TRIANGLE:
		temp = Perimeter((triangle*)s);
		return temp;
	}
}

void Sorting(container &c)
{
	for (int i = 0; i < c.len - 1; i++)
	{
		for (int j = 0; j < c.len - 1; j++)
		{
			if (Sravnenie(c.current) > Sravnenie(c.current->next))
			{
				shape *first = c.current;

				while (first->next != c.current)
					first = first->next;

				shape *next1 = c.current->next;
				shape *next2 = next1->next;

				next1->next = c.current;
				c.current->next = next2;
				first->next = next1;
				c.current = next1;
			}
			c.current = c.current->next;
		}
		c.current = c.current->next;
	}
}

void RectOut(shape *s, ofstream &WriteFile)
{
	switch (s->k) {
	case RECTANGLE:
		break;
	case CIRCLE:
		OutCircle((circle*)s, WriteFile);
		break;
	case TRIANGLE:
		break;
	default:
		break;
	}
}

void FiltredOut(container &c, ofstream &WriteFile)
{
	WriteFile << endl << "Вывод прямоугольников" << endl;
	for (int i = 0; i < c.len; i++)
	{
		if (c.len > 0)
		{
			RectOut(c.current, WriteFile);
			c.current = c.current->next;
		}
	}
}





//int NOD(int a, int b)
//{
//	while ((a && b) != 0)
//		if (a >= b)
//			a %= b;
//		else
//			b %= a;
//	return a | b;
//}