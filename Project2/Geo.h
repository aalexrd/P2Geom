#ifndef Geo_h
#define Geo_h
#include <iostream>
using namespace std;

class Geometria
{
	int alto;
	int ancho;
public:
	Geometria();
	~Geometria();
	void setAlto(int al);
	int getAlto() const;
	void setAncho(int an);
	int getAncho() const;
	void DibujarRectangulo() const;
	void DibujarMedioTriangulo() const;
	void DibujarTrianguloCompleto() const;
	void DibujaCuadricula() const;
};
#endif

