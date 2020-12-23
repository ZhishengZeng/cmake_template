#include "A.h"
#include "B.h"
#include "C.h"

using namespace STUDYCMAKE;

int main()
{
    std::cout << " a " << std::endl;

    A *a = new A();
    B *b = new B();
    C *c = new C();

    a->printA();
    b->printB();
    c->printC();

    return 0;
}