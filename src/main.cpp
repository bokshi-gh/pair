#include <iostream>
#include "pair.hpp"

int main() {
    pair<const char*, int> p;

    p.first = "number";
    p.second = 69;
    
    std::cout << p.first << std::endl;
    std::cout << p.second << std::endl;

    return 0;
}
