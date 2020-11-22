#include "../ejercicios.h"
#include "gtest/gtest.h"
#include <algorithm>
#include <vector>

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

TEST(Ejercicio9TEST, elTerceroEstaActivado){
    toroide t1 = {
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, false, true, true, false},
            {false, false, false, false, false},
            {false, false,false, false, false} };
    toroide t2 = {
            {false, false, false},
            {false, true, false},
            {false, false, false}};
    toroide t3 = {{true, true, true},
                  {true, true, true},
                  {true, true, true}};

    int p;
    vector<toroide> ts;
    ts.push_back(t1);
    ts.push_back(t2);
    ts.push_back(t3);
    int res = seleccionNatural(ts);
    EXPECT_EQ(res, 0);
}
TEST(seleccionNaturalTEST, UnoVivoVstoroideDiagonal){
    toroide t1 = {
            {false, false, false},
            {false, false, false},
            {false, true, false},
            {false, false, false},
            {false, false, false}};
    toroide t2 = {
            {true, false, false},
            {false, true, false},
            {false, false, true}};
    int p;
    ASSERT_FALSE(esPeriodico(t1, p));
    ASSERT_FALSE(esPeriodico(t2, p));
    vector<toroide> ts;
    ts.push_back(t1);
    ts.push_back(t2);
    ts.push_back(t2);
    int res = seleccionNatural(ts);
    EXPECT_EQ(res, 1);
}
TEST(seleccionNaturalTEST, toroideVsHorizontalSup){
    toroide t1 = {
            {false, false, false, true, false},
            {true, false, false, true, false},
            {true, false, false, true, false},
            {false, false, true, false, false},
            {false, false, false, false, false},
            {false, false, true, false, false} };
    toroide t2 = {
            {false, false, false, false, false},
            {false, false, false, false, false},
            {true, true, true, true, true},
            {false, false, false, false, false},
            {false, false,false, false, false} };
    int p;
    ASSERT_FALSE(esPeriodico(t1, p));
    ASSERT_FALSE(esPeriodico(t2, p));
    vector<toroide> ts;
    ts.push_back(t1);
    ts.push_back(t2);
    ts.push_back(t1);
    int res = seleccionNatural(ts);

    EXPECT_EQ(res, 0);
}
TEST(seleccionNaturalTEST, elQueSeleccionaNoEsElUltimo){
    toroide t1 = {
            {false, false, false},
            {false, true, false},
            {false, false, false}};
    toroide t2 = {
            {true, false, false},
            {false, true, false},
            {false, false, true}};
    int p;
    ASSERT_FALSE(esPeriodico(t1, p));
    ASSERT_FALSE(esPeriodico(t2, p));
    vector<toroide> ts;
    ts.push_back(t1);
    ts.push_back(t1);
    ts.push_back(t2);
    ts.push_back(t2);
    int res = seleccionNatural(ts);
    EXPECT_EQ(res, 2);
}

