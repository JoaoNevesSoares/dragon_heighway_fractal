#include "src/LSystemGrammar.hpp"
#include "src/StandartGrammar.cpp"
#include "src/StandartGrammar.hpp"
#include "src/StochasticGrammar.cpp"
#include <type_traits>
#include <iostream>
#include <pybind11/pybind11.h>
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

PYBIND11_MODULE(dragon, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("dragon", &dragon, "A function to create L-system of Dragon fractal");
}