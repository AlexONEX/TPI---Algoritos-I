#include "../ejercicios.h"
#include "gtest/gtest.h"
#include <algorithm>

using namespace std;

TEST(Ejercicio7TEST, toroideHorizontalPeriodico2){
    toroide t = { 
                  {false, false, false, false, false}, 
                  {false, false, false, false, false}, 
                  {false, true, true, true, false},
                  {false, false, false, false, false}, 
                  {false, false,false, false, false} };
    int p;
    bool res = esPeriodico(t, p);
    EXPECT_TRUE(res);
    EXPECT_EQ(p, 2);
}

TEST(Ejercicio7TEST, periodicoCuadrado){
    toroide t = {
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false, true, true, false},
            {false, false, true, true, false},
            {false, false,false, false, false} };
    int p;
    bool res = esPeriodico(t, p);
    EXPECT_TRUE(res);
    EXPECT_EQ(p, 1);
}

TEST(Ejercicio7TEST, noPeriodico){
    toroide t = {
            {true, false, false, false, false},
            {false, false, false, false, false},
            {false, true, false, true, false},
            {false, false, false, false, false},
            {false, true,false, false, false} };
    int p;
    bool res = esPeriodico(t, p);
    EXPECT_FALSE(res);
    EXPECT_EQ(p, 0);
}

TEST(Ejercicio7TEST, muerto){
    toroide t = {
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false, false, false, false} };
    int p;
    bool res = esPeriodico(t, p);
    EXPECT_FALSE(res);
    EXPECT_EQ(p, 0);
}

TEST(Ejercicio7TEST, noPeriodicoDos){
    toroide t = {
            {false, false, false, false, false},
            {true, false, true, false, false},
            {false, false, false, false, false},
            {false, false, false, true, true},
            {false, false, false, false, false} };
    int p;
    bool res = esPeriodico(t, p);
    EXPECT_FALSE(res);
    EXPECT_EQ(p, 0);
}

TEST(Ejercicio7TEST, periodicoGlider){
    toroide t = {
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
    int p;
    bool res = esPeriodico(t, p);
    EXPECT_TRUE(res);
    EXPECT_EQ(p, 240);
}
TEST(Ejercicio7TEST, patronNoPeriodico){

    toroide t = {{false, false, false, false,false, false, false, false},
                 {true, false, false, false,false, false, false, false},
                 {false, true, true, false,false, false, false, false},
                 {true, false, false, true,false, false, false, false},
                 {false, true, true, false,false, false, false, false},
                 {false, false, false, false,false, false, false, false},
                 {false, false, false, false,false, false, true, true},
                 {false, false, false, false,false, false, true, true}};
    int p;
    int p0 = p;
    bool res = esPeriodico(t, p);
    EXPECT_FALSE(res);
    EXPECT_EQ(p, p0);
}