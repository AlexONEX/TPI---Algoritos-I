#include "../ejercicios.h"
#include "gtest/gtest.h"
#include "../auxiliares.h"

using namespace std;

TEST(Ejercicio3TEST, toroideDiagonal){
    vector<bool> a = { true, true, true, true };
    toroide t = { a, a, a, a, a };
    EXPECT_NEAR(densidadPoblacion(t), 1.0, 0.01);
}

TEST(Ejercicio3TEST, toroideMuerto){
    vector<bool> a = { false, false, false, false };
    toroide t = { a, a, a, a, a };
    EXPECT_NEAR(densidadPoblacion(t), 0.0, 0.01);
}

TEST(Ejercicio3TEST, toroideMitad){
    vector<bool> a = { true, false, true, false };
    toroide t = { a, a, a, a, a };
    EXPECT_NEAR(densidadPoblacion(t), 0.5, 0.01);
}
TEST(Ejercicio3TEST, todoVivo){
    toroide t = {
            {true, true, true},
            {true, true, true},
            {true, true, true},
    };
    EXPECT_NEAR(densidadPoblacion(t), 1,0.01);
}
TEST(Ejercicio3TEST, UnoVivoen25){
    toroide t = {
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false, false, false, true}
    };
    EXPECT_NEAR(densidadPoblacion(t), 0.04,0.01);
}
TEST(cantVecinosTEST, TresVecinosExtremos){
    toroide t = { {false, false, true},
                  {false, false, false},
                  {true, false, true} };
    EXPECT_EQ(cantidadVecinos(t, make_pair(0,0)), 3);
}
TEST(cantVecinosTEST, TresVecinosExtremos2){
    toroide t = { {true, false, false},
                  {false, false, false},
                  {true, false, true} };
    EXPECT_EQ(cantidadVecinos(t, make_pair(0,2)), 3);
}
TEST(cantVecinosTEST, DosVecinosExtremos){
    toroide t = { {false, false, true},
                  {false, false, false},
                  {true, false, false} };
    EXPECT_EQ(cantidadVecinos(t, make_pair(2,2)), 2);
}