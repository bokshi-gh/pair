#include <iostream>
#include "pair.hpp"

int main() {
    pair<std::string, int> p;

    p.first = "Rajesh Thapa";
    p.second = 19;

    std::cout << p.first << " is " << p.second << " years old." << std::endl;

    return 0;
}
