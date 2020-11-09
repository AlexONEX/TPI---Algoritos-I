#include "../ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(toroideValidoTEST, toroideVacio){
    toroide t = { vector<bool> () };
    EXPECT_FALSE(toroideValido(t));
}

TEST(toroideValidoTEST, toroideVacio5Filas){
    vector<bool> vacio;
    toroide t = { vacio, vacio, vacio, vacio, vacio };
    EXPECT_FALSE(toroideValido(t));
}

TEST(toroideValidoTEST, diagonalTresPorTres) {
    toroide t = { {true, false, false},
                  {false, true, false},
                  {false, false, true}
    };
    EXPECT_TRUE(toroideValido(t));
}

TEST(toroideValidoTEST, toroideRaro){
    toroide t = { {true,true,false},
                  {false,true,true,true,true},
                  {true},
                  {}
    };
    EXPECT_FALSE(toroideValido(t));
}

TEST(toroideValidoTEST, toroide2por2){
    toroide t = { {true,true},
                  {false,false},
    };
    EXPECT_FALSE(toroideValido(t));
}
TEST(toroideValidoTEST, toroide0x0){
    toroide t ={{}};
    EXPECT_FALSE(toroideValido(t));
}
TEST(toroideValidoTEST, unosYCeros){
    toroide t = { {1, 0, 0},
                  {0, 0, 0},
                  {1, 0,1}
    };
    EXPECT_TRUE(toroideValido(t));
}