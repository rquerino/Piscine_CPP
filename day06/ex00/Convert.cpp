/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:52:38 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/22 14:33:47 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>

// Constructors
Convert::Convert(void) {}
Convert::Convert(std::string str) : _str(str) {}

Convert::Convert(Convert & copy) {
	*this = copy;
}

// Destructor
Convert::~Convert(void) {}

// Operator
Convert&    Convert::operator=(Convert const & rhs) 
{
	this->_str = rhs._str;
	return *this;
}

// Convertion
// std::stoi: Convert string to int
Convert::operator char(void) const
{
	int cnv = 0;
	try {
        cnv = std::stoi(this->_str);
    } catch (const std::exception &e) {
		throw (ErrorConvertingException());
	}
	return (static_cast<char>(cnv));
	
}

// std::stoi: Convert string to int
Convert::operator int(void) const
{
	int cnv = 0;
	try	{
		cnv = std::stoi(this->_str);
	} catch (const std::exception &e) {
		throw (ErrorConvertingException());
	}
	return cnv;
	
}

// std::stof: Convert string to float
Convert::operator float(void) const
{
	float cnv = 0.0;
	try	{
		cnv = std::stof(this->_str);
	} catch (const std::exception &e) {
		throw (ErrorConvertingException());
	}
	return cnv;
	
}

// std::stod: Convert string to double
Convert::operator double(void) const
{
	double cnv = 0.0;
	try {
		cnv = std::stod(this->_str);
	} catch (const std::exception &e) {
		throw (ErrorConvertingException());
	}
	return cnv;	
}

// Exception
Convert::ErrorConvertingException::ErrorConvertingException(void) {}

Convert::ErrorConvertingException::ErrorConvertingException(ErrorConvertingException const & copy) {
    *this = copy;
}

Convert::ErrorConvertingException::~ErrorConvertingException(void) throw() {}

Convert::ErrorConvertingException& Convert::ErrorConvertingException::operator=(ErrorConvertingException const & rhs) {
    (void)rhs;
    return *this;
}

const char* Convert::ErrorConvertingException::what() const throw() {
    return ("Convertion is not possible");
}