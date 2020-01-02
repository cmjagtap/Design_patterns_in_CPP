
/*
 * adapterClass.hpp
 *  @Created on: 2-Jan-2020
 *  @Author: 	Chandramohan Jagtap
 *  @Email: cmjagtap1@gmail.com
 *  @Description:
 *		Adpater class header file.
 */
#ifndef _ADAPTEER_PATTERN_HPP_
#define _ADAPTEER_PATTERN_HPP_
#include  "adapteeClass.hpp"
#include "interface.hpp"

class Adapter :public Target, private Adaptee 
{
	private:
    		Adaptee *_ade;
	public:
    		Adapter(Adaptee* ade);
    		void Request();
};

#endif /*_ADAPTEER_PATTERN_HPP_*/
