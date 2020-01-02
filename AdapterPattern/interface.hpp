/*
 * interface.hpp
 *  @Created on: 2-Jan-2020
 *  @Author: 	Chandramohan Jagtap
 *  @Email: cmjagtap1@gmail.com
 *  @Description:
 *		Adpater interface file.
 */
#ifndef _ADAPTER_PATTERN_HPP_
#define _ADAPTER_PATTERN_HPP_
class Target
{
public:
    virtual void Request() = 0;
};

#endif /*_ADAPTER_PATTERN_HPP_*/
