#include "writeCode.hpp"
#include "compileCode.hpp"
#include "testingClass.hpp"

class FacadeClass
{
private:
    WriteCode * write;
    CompileCode * compile;
    TestingClass * test;
public:
	FacadeClass();
	void DeveloperOperation();
	void TesterOperation();
	
};