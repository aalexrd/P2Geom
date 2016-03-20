#include "Geo.h"

void main()
{
	Geometria geo;
	cout << "Digite el Alto:\n";
	int alto;
	cin >> alto;
	geo.setAlto(alto);
	cout << "Digite el Ancho:\n";
	int ancho;
	cin >> ancho;
	geo.setAncho(ancho);
	cout << "\nRectangulo\n";
	geo.DibujarRectangulo();
	cout << "\nMitad de Triangulo\n";
	geo.DibujarMedioTriangulo();
	cout << "\nTriangulo\n";
	geo.DibujarTrianguloCompleto();
	cout << "\nCuadricula\n";
	geo.DibujaCuadricula();
	system("pause");
}

