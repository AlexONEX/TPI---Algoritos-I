#include "../ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(Ejercicio4TEST, toroideDiagonalTresPorTres){
    toroide t = { {true, false, false},
                  {false, true, false},
                  {false, false, true} };
    EXPECT_TRUE(evolucionDePosicion(t, make_pair(1,1)));
}

TEST(Ejercicio4TEST, NoRevivePorCincoVecinosVivos){
    toroide t = { {false, true, true},
                  {false, true, false},
                  {false, true, true}};
    EXPECT_FALSE(evolucionDePosicion(t, make_pair(1,0)));
}

TEST(Ejercicio4TEST, muerePor6Vecinos){
    toroide t = { {true, true, true},
                  {true, true, true},
                  {true, true, true}};
    EXPECT_FALSE(evolucionDePosicion(t, make_pair(0,0)));
}
TEST(Ejercicio4TEST, reproducidoPorVecinosEnExtremo){
    toroide t = { {false, false, true},
                  {false, false, false},
                  {true, false, true}};
    EXPECT_TRUE(evolucionDePosicion(t, make_pair(0,0)));
}
TEST(Ejercicio4TEST, reproducidoPorVecinosEnExtremo2){
    toroide t = { {true, false, true},
                  {false, false, false},
                  {true, false, false}};
    EXPECT_TRUE(evolucionDePosicion(t, make_pair(2,2)));
}
TEST(Ejercicio4TEST, reproducidoPorVecinosEnExtremo3){
    toroide t = { {true, false, false},
                  {false, false, false},
                  {true, false, true}};
    EXPECT_TRUE(evolucionDePosicion(t, make_pair(0,2)));
}
TEST(Ejercicio4TEST, reproducidoPorVecinosEnExtremo4){
    toroide t = { {true, false, true},
                  {false, false, false},
                  {false, false, true}};
    EXPECT_TRUE(evolucionDePosicion(t, make_pair(2,0)));
}
TEST(Ejercicio4TEST, muerePorVecionsEnExtremo){
    toroide t = { {true, true, true},
                  {false, false, false},
                  {true, false, true}};
    EXPECT_FALSE(evolucionDePosicion(t, make_pair(0,0)));
}
TEST(Ejercicio4TEST, muerePorVecionsEnExtremo2){
    toroide t = { {true, true, true},
                  {false, false, false},
                  {false, false, false},
                  {false, true, true}
    };
    EXPECT_FALSE(evolucionDePosicion(t, make_pair(3,2)));
}
