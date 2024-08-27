/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:40:00 by ghwa              #+#    #+#             */
/*   Updated: 2024/08/27 14:25:07 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(int i) {
	std::cout << "Int constructer called" << std::endl;
	this->_value = i << _bits;
}

Fixed::Fixed(float f) {
	std::cout << "Float constructer called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed() {
	std::cout << "Default constructer called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructer called" << std::endl;
	this->_value = other._value;
}

Fixed& Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = other._value;
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_value);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float Fixed::toFloat(void) const {
	
}

int Fixed::toInt(void) const {
	
}