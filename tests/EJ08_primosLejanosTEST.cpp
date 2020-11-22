#include "../ejercicios.h"
#include "gtest/gtest.h"
#include <algorithm>

using namespace std;

TEST(Ejercicio8TEST, toroideHorizontalPeriodico2){
    toroide t1 = {
                  {false, false, false, false, false},
                  {false, false, false, false, false},
                  {false, true, true, true, false},
                  {false, false, false, false, false},
                  {false, false,false, false, false} };
    toroide t2 = {
                  {false, false, false, false, false},
                  {false, false, true, false, false},
                  {false, false, true, false, false},
                  {false, false, true, false, false},
                  {false, false,false, false, false} };
    bool res = primosLejanos(t1, t2);
    EXPECT_TRUE(res);
    res = primosLejanos(t2, t1);
    EXPECT_TRUE(res);
}


TEST(Ejercicio8TEST, random){
    toroide t1 = {
            {true, false, false, false, false},
            {true, false, false, false, false},
            {true, false, false, false, false},
            {false, false, false, false, false},
            {false, false,false, false, false} };
    toroide t2 = {
            {false, false, false, false, false},
            {true, true, false, false, true},
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false,false, false, false} };
    bool res = primosLejanos(t1, t2);
    EXPECT_TRUE(res);
    res = primosLejanos(t2, t1);
    EXPECT_TRUE(res);
}

TEST(Ejercicio8TEST, dosPeriodicos){
    toroide t1 = {
            {false, false, false, false, false},
            {true, true, true, false, false},
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false,false, false, false} };

    toroide t2 = {
            {false, false, false, false, false},
            {false, false, true, true, false},
            {false, false, true, true, false},
            {false, false, false, false, false},
            {false, false,false, false, false}};
    bool res = primosLejanos(t1, t2);
    EXPECT_FALSE(res);
    res = primosLejanos(t2, t1);
    EXPECT_FALSE(res);
}


TEST(Ejercicio8TEST, toroideNormal){
    toroide t1 = {
            {false, false, true, false, false},
            {false, true, false, true, false},
            {false, true, false, true, false},
            {false, false, true, false, false},
            {false, false,false, false, false} };
    toroide t2 = {
            {false, true, false, false, false},
            {false, false, true, false, false},
            {false, false, true, false, false},
            {false, false, false, true, false},
            {false, false,false, false, false} };
    bool res = primosLejanos(t1, t2);
    EXPECT_TRUE(res);
    res = primosLejanos(t2, t1);
    EXPECT_TRUE(res);
}

TEST(Ejercicio8TEST, pocaVidaPeriodico){
    toroide t1 = {
            {true, true, false, false,false, false},
            {true, true, false, false,false, false},
            {false, false,false, false, false, false},
            {false,false, false, true, false, false},
            {false,false, false,false, false, false} };

    toroide t2 = {
            {true, true,false, false, false, false},
            {true, true,false, false, false, false},
            {false, false,false, false, false, false},
            {false, false,false, false, false, false},
            {false, false,false,false, false, false}};
    bool res = primosLejanos(t1, t2);
    EXPECT_TRUE(res);
    res = primosLejanos(t2, t1);
    EXPECT_TRUE(res);


}

TEST(Ejercicio8TEST, trioPeriodico) {
    toroide t1 = {
            {false, false, false, false, false, false},
            {false, false, true,  false, false,  false},
            {false, false, true,  false, false, false},
            {false, false, true,  false, false, true},
            {false, false, false, false, false, false}};

    toroide t2 = {
            {false, false, false, false, false, false},
            {false, false, true,  false, false, false},
            {false, false, true,  false, false, false},
            {false, false, true,  false, false, false},
            {false, false, false, false, false, false}};

    bool res = primosLejanos(t1, t2);
    EXPECT_TRUE(res);
    res = primosLejanos(t2, t1);
    EXPECT_TRUE(res);
}

TEST(Ejercicio8TEST, toroideRaro){
    toroide t1 = {
            {false, false, false, false, false, false,false, false, false, false, false, false,false,false,false},
            {false, false, false, false, false, false,false, false, false, false, false, false,false,false,false},
            {false, false, false, false, false, false,true, false, false, false, false, false,false,false,false},
            {false, false, false, false, false, false,true, false, false, false, false, false,false,false,false},
            {false, false, false, false, false, true,false, true, false, false, false, false,false,false,false},
            {false, false, false, false, false, true,false, true, false, false, false, false,false,false,false},
            {false, false, false, false, false, false,true, false, false, false, false, false,false,false,false},
            {false, false, false, false, false, false,false, false, false, false, false, false,false,false,false},
            {false, false, false, false, false, false,false, false, false, false, false, false,false,false,false},
            {false, false, false, false, false, false,false, false, false, false, false, false,false,false,false}};

    toroide t2 = {
            {false, false, false, false, false, false,true, false, false, false, false, false,false,false,false},
            {false, false, false, false, false, true,false, true, false, false, false, false,false,false,false},
            {false, false, false, false, false, true,false, true, false, false, false, false,false,false,false},
            {false, false, false, false, false, false,true, false, false, false, false, false,false,false,false},
            {false, false, false, false, false, false,false, false, false, false, false, false,false,false,false},
            {false, false, false, false, false, false,true, false, false, false, false, false,false,false,false},
            {false, false, false, false, false, true,false, true, false, false, false, false,false,false,false},
            {false, false, false, false, false, true,false, true, false, false, false, false,false,false,false},
            {false, false, false, false, false, false,true, false, false, false, false, false,false,false,false},
            {false, false, false, false, false, false,false, false, false, false, false, false,false,false,false}};
    bool res = primosLejanos(t1, t2);
    EXPECT_TRUE(res);
    res = primosLejanos(t2, t1);
    EXPECT_TRUE(res);
}
TEST(Ejercicio8TEST, ambosMuertos){
    toroide t1 = {
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false, false, false, false} };
    toroide t2 = {
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false, false, false, false} };
    bool res = primosLejanos(t1, t2);
    EXPECT_TRUE(res);
}