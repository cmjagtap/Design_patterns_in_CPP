#include "singletonPattern.hpp"

SingletonClass *SingletonClass::m_instance=NULL;

SingletonClass::SingletonClass()
{

}


SingletonClass *SingletonClass::getInstance()
{

	if(SingletonClass::m_instance==NULL)
	{
		SingletonClass::m_instance  = new SingletonClass();
	}
	return m_instance;
}
void SingletonClass::TestingSingletonClass()
{
	cout << "Hello from singltone class" << endl;
}
	