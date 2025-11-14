#include <stdio.h>
#include "pair.h"

int main() {
    pair p;           // create a pair to hold two values

    int num = 69;

    p.first = "number";   // string: just assign directly
    p.second = &num;      // other type: assign address with &

    printf("%s\n", (char*)p.first);    // string: cast to char* when printing
    printf("%d\n", *(int*)p.second);   // other type: cast to correct type and dereference

    return 0;
}
