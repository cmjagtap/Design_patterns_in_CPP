/*
 * singletonPattern.hpp
 *  @Created on: 12-December-2019
 *  @Author: 	Chandramohan Jagtap
 *  @Email: cmjagtap1@gmail.com
 *  @Description:
 *		Singleton Pattern Header file.
 */
#ifndef _SINGLETONE_PATTERN_HPP_
#define _SINGLETONE_PATTERN_HPP_
#include <iostream>
using namespace std;
class SingletonClass
{
	public:
		static SingletonClass *getInstance();
		void TestingSingletonClass();
	private:
		static SingletonClass *m_instance;
		SingletonClass();
		SingletonClass(SingletonClass const&); //copy constructor private
		SingletonClass& operator=(SingletonClass const&); // assignment opertor private
};

#endif /*_SINGLETONE_PATTERN_HPP_ */
