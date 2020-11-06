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

TEST(menorSuperficieVivaTEST, 2por2){
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