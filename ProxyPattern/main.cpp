#include "subject.hpp"

int main()
{
    Subject *sub = new ConcreteSubject();
    Proxy *p = new Proxy(sub);
    p->Reuqest();

    delete sub;
    delete p;

    return 0;
}