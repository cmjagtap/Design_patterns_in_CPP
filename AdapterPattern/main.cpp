
#include "interface.hpp"
#include  "adapteeClass.hpp"
#include "adapterClass.hpp"

int main(int argc, char const *argv[])
{
	Adaptee *adaptee = new Adaptee();
	Target *adapter = new Adapter(adaptee);
    	adapter->Request();

	return 0;
}

//  g++ adapterClass.cpp adapteeClass.cpp main.cpp 
