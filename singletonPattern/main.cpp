/*
 * main.cpp
 *  @Created on: 12-December-2019
 *  @Author: Chandramohan Jagtap
 *  @Email:  cmjagtap1@gmail.com
 *  @Description:
 *		Singleton Pattern main file.
 */

#include "singletonPattern.hpp"

int main(int argc, char const *argv[])
{
	SingletonClass::getInstance()->TestingSingletonClass();
	return 0;
}
