#include <algorithm>
#include "ejercicios.h"
#include "auxiliares.h"

// EJERCICIO 1
bool toroideValido(vector<vector<bool>> const &t) {
    // este valor puede ser cambiado de acuerdo a la propia implementacion
    // Implementacion
    int filas = t.size();
    int columnas = t[0].size();

    return esRectangulo(t) && filas >= 3 && columnas >= 3 ;
}


// EJERCICIO 2
vector<posicion> posicionesVivas(toroide const &t) {
    int filas = t.size();
    int columnas = t[0].size();

    vector<posicion> vivos;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            if(t[i][j]){
                vivos.emplace_back(i,j); //vivos.push_back
            }
        }
    }
    return vivos;
}

// EJERCICIO 3
float densidadPoblacion(toroide const &t) {
    // Implementacion
    float result = (float) cantidadVivas(t) / (float) superficieTotal(t);
    return result;
}

// EJERCICIO 4
bool evolucionDePosicion(toroide const &t, posicion x) {
    if(reproduccion(t, x) || sigueViva(t, x)) {
        return true;
    }
    return false;
}

// EJERCICIO 5
void evolucionToroide(toroide &t){
    vector<vector<bool>> t0 = t;
    int filas = t0.size();
    int columnas = t0[0].size();

    for(int i = 0; i < filas; i++ ){
        for(int j = 0; j < columnas; j++){
            if(t0[i][j]){
                t[i][j] = sigueViva(t0,make_pair(i, j));
            }else{
                t[i][j] = reproduccion(t0, make_pair(i,j));
            }
        }
    }
}

// EJERCICIO 6
toroide evolucionMultiple(toroide const &t, int K) {
    toroide out = t;
    int i = 0;
    while(i<K){
        evolucionToroide(out);
        i++;
    }
    return out;
}


// EJERCICIO 7


bool esPeriodico(toroide const &t, int &p){ // No hara falta copiar p? Mantenerlo por la referencia y devolvero cuando sea false?
    p = 0;
    toroide out = t;
    vector<toroide> listaDeEvoluciones;
    while (!(toroideMuerto(out))) {
        listaDeEvoluciones.push_back(out);
        evolucionToroide(out);
        p++;
        if (out == t) {
            return true;
        }
        if(find(listaDeEvoluciones.begin(), listaDeEvoluciones.end(), out)!= listaDeEvoluciones.end()){
            break;
        }
    }
    p = 0;
    return false;
}

// EJERCICIO 8
bool primosLejanos(toroide const &t, toroide const &u) {
    toroide t1 = t;
    toroide u1 = u;
    int p = 0;
    while(!(toroideMuerto(t1))){
        evolucionToroide(t1);
        if(u == t1){
            return true;
        }
        if(esPeriodico(t1,p)){
            break;
        }
    }
    p = 0;
    while(!(toroideMuerto(u1))){
        evolucionToroide(u1);
        if(t == u1){
            return true;
        }
        if (esPeriodico(u1,p)){
            break;
        }
    }
    return false;
}

// EJERCICIO 9
int seleccionNatural(vector <toroide> ts) {
    vector <toroide> myList = ts;
    vector<int> listaEvoluciones;
    for(int i = 0; i< ts.size(); i++){
        int c = 0;
        while(!toroideMuerto(myList[i])){
            evolucionToroide(myList[i]);
            c++;
        }
        listaEvoluciones.push_back(c);
    }
    return indiceDelMaximo(listaEvoluciones);
}


// EJERCICIO 10
toroide fusionar(toroide const &t, toroide const &u) {
    toroide out = t;
    int filas = t.size();
    int columnas = t[0].size();

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            out[i][j] = t[i][j] && u[i][j];
        }
    }
    return out;
}

// EJERCICIO 11
bool vistaTrasladada(toroide const &t, toroide const &u){
	toroide t0 = t;
    int filas = t0.size();
    int columnas = t0[0].size();

    for(int i = 0; i <= filas; i++){
        for(int j = 0; j <= columnas; j++){
            if(t0 == u){
                return true;
            }
            generarVistaFilas(t0);
        }
        generarVistaColumnas(t0);
        if(t0 == u){
            return true;
        }
    }
    return false;
}

// EJERCICIO 12
int menorSuperficieViva(toroide const &t){
    vector<toroide> vistasToroide = generarVistas(t);
    int areas = t.size()*t[0].size();
    for(auto & i : vistasToroide){
        if(areas >= areaPosicionesVivas(i)){
            areas = areaPosicionesVivas(i);
        }
    }
    return areas;
}