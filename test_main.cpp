#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"

using namespace CMAKETEMPLATE;

int main()
{
    std::cout << "#################" << std::endl;
    A *a = new A();
    B *b = new B();
    C *c = new C();

    a->printA();
    b->printB();
    c->printC();
    std::cout << "#################" << std::endl;

    return 0;
}