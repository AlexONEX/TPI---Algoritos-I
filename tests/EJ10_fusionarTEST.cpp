#include "../ejercicios.h"
#include "gtest/gtest.h"
#include <algorithm>

using namespace std;

TEST(fusionarTEST, sinInterseccion){
    toroide t1 = { 
                  {true, false, false},
                  {false, true, false},
                  {false, false, true}}; 
    toroide t2 = { 
                  {false, true, true},
                  {true, false, true},
                  {true, true, false}};

    toroide tout = {
            {false, false, false},
            {false, false, false},
            {false, false, false}};

    toroide res = fusionar(t1, t2);
    EXPECT_EQ(res, tout);
}

TEST(fusionarTEST, todosMuertos){
    toroide t1 = {
            {false, false, false},
            {false, false, false},
            {false, false, false}};
    toroide t2 = {
            {false, false, false},
            {false, false, false},
            {false, false, false}};

    toroide tout = {
            {false, false, false},
            {false, false, false},
            {false, false, false}};

    toroide res = fusionar(t1, t2);
    EXPECT_EQ(res, tout);
}

TEST(fusionarTEST, todosVivos){
    toroide t1 = {
            {true, true, true},
            {true, true, true},
            {true, true, true}};
    toroide t2 = {
            {true, true, true},
            {true, true, true},
            {true, true, true}};

    toroide tout = {
            {true, true, true},
            {true, true, true},
            {true, true, true}};

    toroide res = fusionar(t1, t2);
    EXPECT_EQ(res, tout);
}
TEST(fusionarTEST, solo3Vivos){
    toroide t1 = {
            {true, false, true},
            {false, true, false},
            {true, false, true}};
    toroide t2 = {
            {true, false, false},
            {false, true, false},
            {true, false, false}};

    toroide tout = {
            {true, false, false},
            {false, true, false},
            {true, false, false}};

    toroide res = fusionar(t1, t2);
    EXPECT_EQ(res, tout);
}
TEST(fusionarTEST, hayInterseccion){
    toroide t1 = {
            {true, true, true},
            {true, true, true},
            {true, false, true}};
    toroide t2 = {
            {false, false, true},
            {false, true, false},
            {true, true, false}};

    toroide tout = {
            {false, false, true},
            {false, true, false},
            {true, false, false}};
    toroide res = fusionar(t1, t2);
    EXPECT_EQ(res, tout);
}

