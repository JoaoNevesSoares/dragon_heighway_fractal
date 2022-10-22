#include "src/LSystemGrammar.hpp"
#include "src/StandartGrammar.cpp"
#include "src/StandartGrammar.hpp"
#include "src/StochasticGrammar.cpp"
#include <type_traits>
#include <iostream>
using namespace std;

string dragon(int iterations){
    LSystemGrammar lsystem;
    StandartGrammar lsysto;
    lsystem.setAxiom("F");
    lsystem.addRule("F => F-H");
    lsysto.setAxiom("F");
    lsysto.addRule("H => F+H");
    lsysto.addRule("F => F-H");
    lsysto.iterate(iterations);
    //lsystem.addRule("H => F+H");
    string tmp;
    tmp = lsysto.getResult();
    return tmp;
}


