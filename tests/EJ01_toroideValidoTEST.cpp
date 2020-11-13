#include "../ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(Ejercicio1TEST, toroideVacio){
    toroide t = { vector<bool> () };
    EXPECT_FALSE(toroideValido(t));
}

TEST(Ejercicio1TEST, toroideVacio5Filas){
    vector<bool> vacio;
    toroide t = { vacio, vacio, vacio, vacio, vacio };
    EXPECT_FALSE(toroideValido(t));
}

TEST(Ejercicio1TEST, diagonalTresPorTres) {
    toroide t = { {true, false, false},
                  {false, true, false},
                  {false, false, true}
    };
    EXPECT_TRUE(toroideValido(t));
}

TEST(Ejercicio1TEST, toroideRaro){
    toroide t = { {true,true,false},
                  {false,true,true,true,true},
                  {true},
                  {}
    };
    EXPECT_FALSE(toroideValido(t));
}

TEST(Ejercicio1TEST, toroide2por2){
    toroide t = { {true,true},
                  {false,false},
    };
    EXPECT_FALSE(toroideValido(t));
}
TEST(Ejercicio1TEST, toroide0x0){
    toroide t ={{}};
    EXPECT_FALSE(toroideValido(t));
}
TEST(Ejercicio1TEST, unosYCeros){
    toroide t = { {1, 0, 0},
                  {0, 0, 0},
                  {1, 0,1}
    };
    EXPECT_TRUE(toroideValido(t));
}