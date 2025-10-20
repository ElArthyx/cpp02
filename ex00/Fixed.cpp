/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegrix <alegrix@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:16:59 by alegrix           #+#    #+#             */
/*   Updated: 2025/10/20 20:09:35 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->f_val);
}

void Fixed::setRawBits(int const raw)
{
	this->f_val = raw;
}

Fixed	&Fixed::operator=(const Fixed &cpy)
{
	std::cout << "Copy assignment operator called\n\r";
	if (this != &cpy)
		this->f_val = cpy.getRawBits();
	return (*this);
}

Fixed::Fixed() : f_val(0) {
	std::cout << "Default constructor called\n\r";
}

Fixed::Fixed(const Fixed &cpy) {
	*this = cpy;
	std::cout << "Copy constructor called\n\r";
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n\r";
}
