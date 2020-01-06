#include "interface.hpp"
class Proxy 
{
public:
    Proxy(Subject* subject);
    void Reuqest();

private:
    Subject *_sub;
};