#include "../ejercicios.h"
#include "gtest/gtest.h"
#include <algorithm>

using namespace std;

TEST(Ejercicio11TEST, muevoTerceraFilaParaArriba){
    toroide t1 = { 
                  {true, false, false}, // 1
                  {false, true, false}, // 2
                  {false, false, true}};// 3
    toroide t2 = { 
                  {false, false, true}, // 3
                  {true, false, false}, // 1
                  {false, true, false}};// 2

    bool res = vistaTrasladada(t1, t2);
    EXPECT_TRUE(res);
}

TEST(Ejercicio11TEST, DiagonalVsTodoTrue){
    toroide t1 = { 
                  {true, false, false},
                  {false, true, false},
                  {false, false, true}}; 
    toroide t2 = { 
                  {true, true, true},
                  {true, true, true},
                  {true, true, true}}; 
    bool res = vistaTrasladada(t1, t2);
    EXPECT_FALSE(res);
}

TEST(Ejercicio11TEST, palito){
    toroide t1 = {
            {false, true, false},
            {false, false, false},
            {false, true, false}};
    toroide t2 = {
            {false, false, false},
            {true, false, false},
            {true, false, false}};
    bool res = vistaTrasladada(t1, t2);
    EXPECT_TRUE(res);
}

TEST(Ejercicio11TEST, miniDiagonal){
    toroide t1 = {
            {false, false, true},
            {true, false, false},
            {false, true, false}};
    toroide t2 = {
            {true, false, false},
            {false, false, true},
            {false, true, false}};
    bool res = vistaTrasladada(t1, t2);
    EXPECT_FALSE(res);
}

TEST(Ejercicio11TEST, noCuadrado){
    toroide t1 = {
            {true, false, false},
            {false, false, false},
            {false, true, false},
            {false, false, false}};
    toroide t2 = {
            {false, false, true},
            {false, false, false},
            {false, true, false},
            {false, false, false}};

    bool res = vistaTrasladada(t1, t2);
    EXPECT_TRUE(res);
}
TEST(Ejercicio11TEST, noCuadradoYNoVista){
    toroide t1 = {
            {true, false, false},
            {false, false, false},
            {false, true, false},
            {false, false, false}};
    toroide t2 = {
            {false, false, true},
            {false, false, false},
            {false, false, true},
            {false, false, false}};

    bool res = vistaTrasladada(t1, t2);
    EXPECT_FALSE(res);
}
TEST(Ejercicio11TEST, esVista){
    toroide t1 = {
            {true, false, false},
            {false, false, false},
            {false, true, false},
            {false, false, false}};
    toroide t2 = {
            {false, false, true},
            {false, false, false},
            {true, false, false},
            {false, false, false}};

    bool res = vistaTrasladada(t1, t2);
    EXPECT_TRUE(res);
}

TEST(Ejercicio11TEST, glider_trasladado){
    toroide t1 = {
            {false, true, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, true, false, false,false,false,false,false,false,false,false,false,false,false},
            {true, true, true, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false}
    };

    toroide t2 = {
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,true,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,true,false,false,false,false,false,false,false},
            {false, false, false, false, false,true,true,true,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false}
    };

    bool res = vistaTrasladada(t1, t2);
    EXPECT_TRUE(res);
}