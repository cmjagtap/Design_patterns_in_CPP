#include "facade.hpp"

FacadeClass::FacadeClass()
{
	write = new WriteCode();
	compile = new CompileCode();
	test = new TestingClass();
	
}
void FacadeClass::DeveloperOperation()
{
	write->WriteCodeMethod();
	compile->CompileWrittenCode();
}
void FacadeClass::TesterOperation()
{
	compile->CompileWrittenCode();
	test->TestingMethod();
}