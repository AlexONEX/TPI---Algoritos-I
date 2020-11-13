#include "../ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(Ejercicio12TEST, enunciado){
    toroide t = {
            {true, false, false, true},   // 1
            {false, false, false, false}, // 2
            {false, false, false, false}, // 3
            {true, true, false, false}};  // 4

    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 6);
}

TEST(Ejercicio12TEST, DosporDos){
    toroide t = {
            {true, false, false, true},   // 1
            {false, false, false, true}, // 2
            {false, false, false, false}, // 3
            {false, false, false, false}};  // 4

    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 4);
}

TEST(Ejercicio12TEST, noCuadrado){
    toroide t = {
            {true, false, false, true},   // 1
            {false, false, true, true}, // 2
            {false, false, false, false},};  // 3

    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 6);
}

TEST(Ejercicio12TEST, CuatroPorCuatro){
    toroide t ={
            {false, true, true, true},   // 1
            {false, false, false, false}, // 2
            {false, false, false, false},
            {false, true, true, false}};
    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 6);
}
TEST(Ejercicio12TEST, CuatroPorCuatro2){
    toroide t ={
            {false, true, true, false},   // 1
            {false, false, false, false}, // 2
            {false, false, false, false},
            {false, true, true, false}};
    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 4);
}
TEST(Ejercicio12TEST, CuatroPorCuatro3){
    toroide t ={
            {true, true, false, false},   // 1
            {false, false, false, false}, // 2
            {false, false, false, true},
            {false, true, true, false}};
    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 12);
}

TEST(Ejercicio12TEST, CuatroPorCuatro4){
    toroide t ={
            {true, false, false},
            {false, true, false},
            {false, false, true},
            {false, false, false},
            {false, false, false}};
    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 9);
}
TEST(Ejercicio12TEST, CuatroPorCuatro5){
    toroide t ={
            {true, false, true},
            {false, false, false},
            {false, false, true},
            {false, false, false},
            {true, false, false}};
    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 8);
}

TEST(Ejercicio12TEST, gliderTraladadoMenor){


    toroide t1 = {
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
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, true, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {true, false, false, false, false,false,false,false,false,false,false,false,false,true,true}
    };
    int res = menorSuperficieViva(t1);
    EXPECT_EQ(res, 8);
}

TEST(Ejercicio12TEST, toroideRaroDos){
    toroide t1 = {
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
            {true, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, true, false, false, false,false,false,false,false,false,false,true,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false},
            {false, false, false, false, false,false,false,false,false,false,false,false,false,false,false}
    };
    int res = menorSuperficieViva(t1);
    EXPECT_EQ(res, 48);
}

TEST(Ejercicio12TEST, todosVivosdos){


    toroide t1 = {
            {true, true, true, true},
            {true, true, true, true},
            {true, true, true, true}};
    int res = menorSuperficieViva(t1);
    EXPECT_EQ(res, 12);
}

TEST(Ejercicio12TEST, unoSoloVivo){


    toroide t1 = {
            {true, false, false, false},
            {false, false, false, false},
            {false, false, false, false}};
    int res = menorSuperficieViva(t1);
    EXPECT_EQ(res, 1);
}



