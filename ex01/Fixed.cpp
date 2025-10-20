/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegrix <alegrix@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:01:49 by alegrix           #+#    #+#             */
/*   Updated: 2025/10/17 18:07:44 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(float const nb): _f_val(roundf(nb * (1 << this->_frac_bits)))
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}


Fixed::Fixed(int const nb): _f_val(nb << _frac_bits)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(): _f_val(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

std::ostream	&operator<<(std::ostream &os,const Fixed &src)
{
	os << src.toFloat();
	return (os);
}


Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignation operator called" << std::endl;
	if (this != &src)
		this->_f_val = src.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void)const
{
	return (this->_f_val);
}


void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_f_val = raw;
}

int	Fixed::toInt(void) const
{
	return (this->_f_val >> this->_frac_bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_f_val / (1 << this->_frac_bits));
}
