#include "../ejercicios.h"
#include "gtest/gtest.h"
#include <algorithm>

using namespace std;


TEST(Ejercicio9TEST, toroideDiagonalVsUnoVivo){
    toroide t1 = { 
                  {true, false, false},
                  {false, true, false},
                  {false, false, true}}; 
    toroide t2 = { 
                  {false, false, false}, 
                  {false, false, false}, 
                  {false, true, false},
                  {false, false, false}, 
                  {false, false, false}};
    vector<toroide> ts;
    ts.push_back(t1);
    ts.push_back(t2);
    ts.push_back(t2);
    int res = seleccionNatural(ts);
    EXPECT_EQ(res, 0);
}

TEST(Ejercicio9TEST, DiagonalVsHorizontal){
    toroide t1 = {
                  {false, false, false},
                  {false, false, false},
                  {true, true, true},
                  {false, false, false},
                  {false, false,false} };
    toroide t2 = {
                  {true, false, false},
                  {false, true, false},
                  {false, false, true}};
    vector<toroide> ts;
    ts.push_back(t2);
    ts.push_back(t1);
    int res = seleccionNatural(ts);
    EXPECT_EQ(res, 1);
}

TEST(Ejercicio9TEST, unoMuerto){
    toroide t1 = {
            {true, false, false},
            {false, true, false},
            {false, false, true}};
    toroide t2 = {
            {false, false, false},
            {false, false, false},
            {false, false, false},
            {false, false, false},
            {false, false, false}};
    vector<toroide> ts;
    ts.push_back(t1);
    ts.push_back(t2);
    ts.push_back(t2);
    int res = seleccionNatural(ts);
    EXPECT_EQ(res, 0);
}