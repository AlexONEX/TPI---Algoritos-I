#include "definiciones.h"
#include "auxiliares.h"


using namespace std;
// aqui se pueden ubicar todas las funciones auxiliares de soporte para la resolucion de los ejercicios
pair<int,int> mp(int a, int b) {
    return make_pair(a, b);
}

vector<posicion> ordenar(vector<posicion> &v) {
    sort(v.begin(), v.end());
    return v;
}

int mod (int a, int b)
{
    int res = a % b;
    if(res < 0)
        res+=b;
    return res;
}



bool esRectangulo(toroide const &t){
    int filas = t.size();
    int columnas = t[0].size();

    for(int i = 0; i < filas; i++){
        if(t[i].size() != columnas){
            return false;
        }
    }
    return filas > 0 && columnas > 0;
}



int superficieTotal(toroide const &t){
    return t.size() * t[0].size();
}


int cantidadVivas(toroide const &t){
    int total_vivas = 0;
    int filas = t.size();
    int columnas = t[0].size();

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            if (t[i][j]){
                total_vivas ++;
            }
        }
    }
    return total_vivas;
}

bool sigueViva(toroide const &t, posicion x){
    if(t[x.first][x.second] && ((cantidadVecinos(t, x)<=3 && cantidadVecinos(t, x)>=2))){
        return true;
    }
    return false;
}

bool reproduccion(toroide const &t, posicion x){
    if(!(t[x.first][x.second]) && cantidadVecinos(t, x)==3){
        return true;
    }
    return false;
}

int cantidadVecinos(toroide const &t, posicion x) {
    int filas = t.size();
    int columnas = t[0].size();

    int vecinos = 0;
    for(int i = -1; i<=1; i++){
        for(int j = -1; j<=1; j++){
            if(i == 0 && j == 0){
                continue;
            }else{
                vecinos += int(t[mod(x.first+j, filas)][mod(x.second+i, columnas)]); //Chequear Bien q sume bool a int
            }
        }
    }
    return vecinos;
}


bool toroideMuerto(toroide const &t){
    int filas = t.size();
    int columnas = t[0].size();
    
    for(int i =0; i < filas; i++){
        for(int j=0; j < columnas;j++){
            if(t[i][j]){
                return false;
            }
        }
    }
    return true;
}

void generarVistaColumnas(toroide &t){
    toroide t0 = t;
    int filas = t0.size();
    int columnas = t0[0].size();
    
    for(int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            t[i][j] = t0[i][mod((j - 1), columnas)];
        }
    }
}

void generarVistaFilas(toroide &t){
    toroide t0 = t;
    int filas = t0.size();
    int columnas = t0[0].size();
    
    for(int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            t[i][j] = t0[mod((i - 1), filas)][j];
        }
    }
}

int indiceDelMaximo(vector<int> const &t){
    int indice = 0;
    int comparador = 0;
    int filas = t.size();
    for(int i=0; i < filas; i++){
        if(comparador<t[i]){                       
            comparador = t[i];
            indice = i;
        }
    }
    return indice;
}
vector<toroide> generarVistas(toroide const &t){
    vector<toroide> vistas;
    toroide copiaT = t;
    vistas.push_back(copiaT);
    int filas = t.size();
    int columnas = t[0].size();
    
    for(int i = 0; i < filas; i++){
        generarVistaFilas(copiaT);
        vistas.push_back(copiaT);
        for(int j = 0; j < columnas; j++){
            generarVistaColumnas(copiaT);
            vistas.push_back(copiaT);
        }
    }
    return vistas;
}


int filaMinima(toroide const &t){
    int fila = 0;
    int filas = t.size();
    
    for(int i = 0; i < filas;i++){
        if(find(t[i].begin(), t[i].end(), true) != t[i].end() && fila >= i){
            fila = i;
        }
    }
    return fila;
}

int filaMaxima(toroide const &t){
    int fila = 0;
    int filas = t.size();
    
    for(int i = 0; i < filas;i++){
        if(find(t[i].begin(), t[i].end(), true) != t[i].end() && fila <= i){
            fila = i;
        }
    }
    return fila;
}

int columnaMinima(toroide const &t){
    int columna = 0;
    int filas = t.size();
    int columnas = t[0].size();
    
    for(int i = 0; i < filas;i++){
        for(int j = 0; j < columnas; j++){
            if(t[i][j] && j <= columna){
                columna = j;
            }
        }
    }
    return columna;
}

int columnaMaxima(toroide const &t){
    int columna = 0;
    int filas = t.size();
    int columnas = t[0].size();
    
    for(int i = 0; i < filas;i++){
        for(int j = 0; j < columnas; j++){
            if(t[i][j] && j >= columna){
                columna = j;
            }
        }
    }
    return columna;
}

int areaPosicionesVivas(toroide const &t){
    int fMin = filaMinima(t);
    int fMax = filaMaxima(t);
    int cMin = columnaMinima(t);
    int cMax = columnaMaxima(t);
    return (fMax+1-fMin)*(cMax+1-cMin);
}




