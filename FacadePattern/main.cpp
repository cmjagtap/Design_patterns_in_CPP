#include "facade.hpp"

int main(int argc, char const *argv[])
{
	FacadeClass *facadeObject = new FacadeClass();
	facadeObject->DeveloperOperation() ;

	cout <<"\n\nbelow is tester operations \n\n";
	facadeObject->TesterOperation();

	
	return 0;
}