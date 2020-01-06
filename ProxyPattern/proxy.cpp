#include "proxy.hpp"

Proxy::Proxy(Subject* subject) 
{
        _sub = subject;
}
void Proxy::Reuqest() 
{
  _sub->Request();
}
