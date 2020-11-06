//


#ifndef REUNIONESREMOTAS_AUXILIARES_H
#define REUNIONESREMOTAS_AUXILIARES_H

#include "definiciones.h"

using namespace std;
// definir aqui las funciones
pair<int,int> mp(int a, int b);
vector<posicion> ordenar(vector<posicion> &v);

bool esRectangulo(vector<vector<bool>> const &t);
int superficieTotal(vector<vector<bool>> const &t);
int cantidadVivas(vector<vector<bool>> const &t);
int cantidadVecinos(toroide const &t, posicion x);
bool sigueViva(toroide const &t, posicion x);
bool reproduccion(toroide const &t, posicion x);
bool toroideMuerto(toroide const &t);
void generarVistaFilas(toroide &t);
void generarVistaColumnas(toroide &t);
int indiceDelMaximo(vector<int> const &t);

vector<toroide> generarVistas(toroide const &t);
int filaMinima(toroide const &t);
int filaMaxima(toroide const &t);
int columnaMinima(toroide const &t);
int columnaMaxima(toroide const &t);
int areaPosicionesVivas(toroide const &t);


#endif //REUNIONESREMOTAS_AUXILIARES_H
