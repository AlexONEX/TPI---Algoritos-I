#include "../ejercicios.h"
#include "../auxiliares.h"
#include "gtest/gtest.h"
#include <algorithm>

using namespace std;

TEST(evolucionToroideTEST, toroideDiagonalTresPorTresUnPaso){
    toroide t = { {true, false, false}, {false, true, false}, {false, false, true} };
    //1*0 0 1*0
    //0 1 0 0 1
    //0 0 1 0 0
    //1 0 0 1 0
    //0*1 0 0*1
    toroide evo_t = { {true, true, true}, {true, true, true}, {true, true, true} };
    //  1 1 1
    //  1 1 1
    //  1 1 1
    evolucionToroide(t);
    EXPECT_EQ(t, evo_t);
}

TEST(evolucionToroideTEST, igual){
    toroide t = { {true, true, false}, {true, true, false}, {false, false, false} };

    toroide evo_t = { {true, true, false}, {true, true, false}, {false, false, false} };

    evolucionToroide(t);
    EXPECT_EQ(t, evo_t);
}

TEST(evolucionToroideTEST, seMuere){
    toroide t = { {true, false, false},
                  {false, true, false},
                  {false, false, false} };

    toroide evo_t = { {false, false, false},
                      {false, false, false},
                      {false, false, false} };

    evolucionToroide(t);
    EXPECT_EQ(t, evo_t);
}

TEST(evolucionToroideTEST, sePonenTodosVivos){
    toroide t = { {true, true, false},
                  {false, true, false},
                  {false, false, false} };

    toroide evo_t = { {true, true, true},
                      {true, true, true},
                      {true, true, true} };

    evolucionToroide(t);
    EXPECT_EQ(t, evo_t);
}
TEST(evolucionToroideTEST, seMuerenTodos){
       toroide t = { {true, true, true},
                      {true, true, true},
                      {true, true, true} };

    toroide evo_t = { {false, false, false},
                  {false, false, false},
                  {false, false, false} };
    evolucionToroide(t);
    EXPECT_EQ(t, evo_t);
}
TEST(evolucionToroideTEST, evolucionesYMuertes){
    toroide t1 = {
                  {false, false, true, false, false},
                  {false, true, false,true, true},
                  {false, true, false, true, true},
                  {false, false, true, true, true},
                  {false, false, false, false, false} };
    evolucionToroide(t1);
    toroide t2 = {{ false, false, true, true, false },
                  { false, true, false, false, true },
                  { false, true, false, false, false },
                  { true, false, true, false, true },
                  { false, false, true, false, false }};
    EXPECT_EQ(t1, t2);
}