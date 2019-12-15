/*
 * singletonPattern.cpp
 *
 *  @Created on: 12-December-2019
 *  @Author: 		 	Chandramohan Jagtap
 *	@Email: 			cmjagtap1@gmail.com
 *	@Description:
 *						Singleton Pattern class file.
 */

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
	