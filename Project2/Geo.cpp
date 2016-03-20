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
	for (int i = 0; i < getAlto(); i++)
	{
		for (int j = 0; j < getAncho(); j++)
			cout << "*";
		cout << endl;
	}
	cout << "\n\n";
}

void Geometria::DibujarMedioTriangulo() const
{
	for (int i = 0; i <= getAlto(); i++)
	{
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}
	cout << "\n\n";
}

void Geometria::DibujarTrianguloCompleto() const
{
	int tam = getAlto() * 2 - 1;
	char* vector = new char[tam];
	int mitad = tam / 2, cont = 0;
	for (int j = 0; j < tam; j++) //llenar el vector de espacios
		vector[j] = ' ';
regrese:
	for (int i = mitad - cont; i < mitad + cont + 1 && i < tam; i++)
		vector[i] = '*';
	for (int k = 0; k < tam; k++)
		cout << vector[k];
	cout << endl;
	if (cont * 2 < tam - 2)
	{
		cont++;
		goto regrese;
	}
	cout << "\n\n";
}

void Geometria::DibujaCuadricula() const
{
	for (int i = 0; i < getAlto(); i++)
	{
		for (int j = 0; j < getAncho(); j++)
		{
			cout << "+--";
			if (j == getAncho() - 1)
				cout << "+\n";
		}
		for (int j = 0; j < getAncho(); j++)
		{
			cout << "|  ";
			if (j == getAncho() - 1)
				cout << "|\n";
		}
		if (i == getAlto() - 1)
			for (int j = 0; j < getAncho(); j++)
			{
				cout << "+--";
				if (j == getAncho() - 1)
					cout << "+\n";
			}
	}
}

