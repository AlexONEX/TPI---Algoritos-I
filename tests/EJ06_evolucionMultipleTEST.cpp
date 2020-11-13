#include "../ejercicios.h"
#include "gtest/gtest.h"
#include <algorithm>

using namespace std;

TEST(Ejercicio6TEST, toroideDiagonalTresPorTresUnPaso){
    toroide t = { {true, false, false},
                  {false, true, false},
                  {false, false, true} };
    //1*0 0 1*0
    //0 1 0 0 1
    //0 0 1 0 0
    //1 0 0 1 0
    //0*1 0 0*1
    toroide evo_t = { {true, true, true},
                      {true, true, true},
                      {true, true, true}};
    //  1 1 1
    //  1 1 1
    //  1 1 1
    toroide res = evolucionMultiple(t, 1);
    EXPECT_EQ(res, evo_t);
}

TEST(Ejercicio6TEST, gliderKevo){
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

    toroide evo_t = {
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

    toroide res = evolucionMultiple(t, 240);
    EXPECT_EQ(res, evo_t);
}
TEST(Ejercicio6TEST, seMuereEnDosTicks){
    toroide t = { {true, false, false},
                  {false, true, false},
                  {false, false, true} };

    toroide evo_t = { {false, false, false},
                      {false, false, false},
                      {false, false, false} };
    toroide res = evolucionMultiple(t, 2);
    EXPECT_EQ(res, evo_t);
}