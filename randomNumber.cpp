#include <random>
#include <iostream>
// show how to generate random numbers in c++

int main() {
    // it seems to generate a seed for "mt" from local device
    std::random_device rd;
    // std::mt19937(since C++11) class is a very efficient pseudo-random number generator
    std::mt19937 mt(rd());
    // an object generate float numbers in uniform distribution, uniform_int_distribution for int
    // there are also other kinds of distribution which maybe useful in a specify sittuation.
    std::uniform_real_distribution<double> dist(0, 1);

    for (int i=0; i<5; ++i)
        std::cout << dist(mt) << "\n";
}















