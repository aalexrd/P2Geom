#include "Geo.h"

Geometria::Geometria() : alto(0), ancho(0)
{
}

Geometria::~Geometria()
{
}

void Geometria::setAlto(int al)
{
	alto = al;
}

int Geometria::getAlto() const
{
	return alto;
}

void Geometria::setAncho(int an)
{
	ancho = an;
}

int Geometria::getAncho() const
{
	return ancho;
}

void Geometria::DibujarRectangulo() const
{
	setColor(12);
	for (int i = 0; i < getAlto(); i++)
	{
		for (int j = 0; j < getAncho(); j++)
			cout << "\376";
		cout << endl;
	}
	cout << "\n\n";
	setColor(7);
}

void Geometria::DibujarMedioTriangulo() const
{
	setColor(3);
	for (int i = 0; i <= getAlto(); i++)
	{
		for (int j = 0; j < i; j++)
			cout << "\376";
		cout << endl;
	}
	cout << "\n\n";
	setColor(7);
}

void Geometria::DibujarTrianguloCompleto() const
{
	setColor(14);
	int d = 1;
	for (int i = 0; i < getAlto(); i++) //filas del triangulo
	{
		for (int j = getAlto() - 1; j > i; j--) //espacios necesarios
		{
			cout << " ";
		}
		for (int k = 0; k < d; k++) //el caracter
		{
			cout << "\376";
		}
		cout << endl;
		d = d + 2; //porque el triangulo es completo, o sea el doble de la altura en la base
	}
	cout << "\n\n";
	setColor(7);
}

void Geometria::DibujaCuadricula() const
{
	setColor(5);
	for (int i = 0; i < getAlto(); i++)
	{
		if (i == 0)
			for (int j = 0; j < getAncho(); j++)
			{
				if (j == 0)
					cout << "\332";
				cout << "\304\304\304";
				if (j == getAncho() - 1)
					cout << "\277\n";
				else
					cout << "\302";
			}
		if (i != 0 && i != getAlto())
			for (int j = 0; j < getAncho(); j++)
			{
				if (j == 0)
					cout << "\303";
				cout << "\304\304\304";
				if (j == getAncho() - 1)
					cout << "\264\n";
				else
					cout << "\305";
			}
		for (int j = 0; j < getAncho(); j++)
		{
			cout << "\263   ";
			if (j == getAncho() - 1)
				cout << "\263\n";
		}
		if (i == getAlto() - 1)
		{
			for (int j = 0; j < getAncho(); j++)
			{
				if (j == 0)
					cout << "\300";
				cout << "\304\304\304";
				if (j == getAncho() - 1)
					cout << "\331\n";
				else
					cout << "\301";
			}
		}
	}
	setColor(7);
}

void Geometria::setColor(WORD c) /*black=0
								 dark_blue=1
								 dark_green = 2
								 dark_cyan = 3
								 dark_red = 4
								 dark_purple = 5
								 dark_yellow = 6
								 dark_white = 7,
								 gray = 8,
								 blue = 9,
								 green = 10,
								 cyan = 11,
								 red = 12,
								 purple = 13, pink = 13, magenta = 13,
								 yellow = 14,
								 white = 15 */
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, c);
}

