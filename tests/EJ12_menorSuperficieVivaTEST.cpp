#include "../ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(menorSuperficieVivaTEST, enunciado){
    toroide t = {
            {true, false, false, true},   // 1
            {false, false, false, false}, // 2
            {false, false, false, false}, // 3
            {true, true, false, false}};  // 4

    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 6);
}

TEST(menorSuperficieVivaTEST, DosporDos){
    toroide t = {
            {true, false, false, true},   // 1
            {false, false, false, true}, // 2
            {false, false, false, false}, // 3
            {false, false, false, false}};  // 4

    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 4);
}

TEST(menorSuperficieVivaTEST, noCuadrado){
    toroide t = {
            {true, false, false, true},   // 1
            {false, false, true, true}, // 2
            {false, false, false, false},};  // 3

    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 6);
}

TEST(menorSuperficieVivaTEST, CuatroPorCuatro){
    toroide t ={
            {false, true, true, true},   // 1
            {false, false, false, false}, // 2
            {false, false, false, false},
            {false, true, true, false}};
    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 6);
}
TEST(menorSuperficieVivaTEST, CuatroPorCuatro2){
    toroide t ={
            {false, true, true, false},   // 1
            {false, false, false, false}, // 2
            {false, false, false, false},
            {false, true, true, false}};
    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 4);
}
TEST(menorSuperficieVivaTEST, CuatroPorCuatro3){
    toroide t ={
            {true, true, false, false},   // 1
            {false, false, false, false}, // 2
            {false, false, false, true},
            {false, true, true, false}};
    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 12);
}

TEST(menorSuperficieVivaTEST, CuatroPorCuatro4){
    toroide t ={
            {true, false, false},
            {false, true, false},
            {false, false, true},
            {false, false, false},
            {false, false, false}};
    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 9);
}
TEST(menorSuperficieVivaTEST, CuatroPorCuatro5){
    toroide t ={
            {true, false, true},
            {false, false, false},
            {false, false, true},
            {false, false, false},
            {true, false, false}};
    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 8);
}


