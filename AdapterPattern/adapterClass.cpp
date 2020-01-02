#include "adapterClass.hpp"



Adapter::Adapter(Adaptee* ade)
{
	_ade = ade;
}
void Adapter::Request()
{
	_ade->SpecificRequest();
}