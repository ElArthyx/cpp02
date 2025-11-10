/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegrix <alegrix@student.42lehavre.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:08:17 by alegrix           #+#    #+#             */
/*   Updated: 2025/10/29 15:56:14 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c;
    Fixed d(-1);
    Fixed e(2.0f);
	
	std::cout << "a : \n\r" << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
	std::cout << "WOLOLO" << std::endl;
    std::cout << a * e / d << "\n";
    std::cout << a / d << "\n" << std::endl;
    
	std::cout << "c :\n\r";
    std::cout << c << std::endl;
    std::cout << --c << std::endl;
    std::cout << c << std::endl;
    std::cout << c-- << std::endl;
    std::cout << c << std::endl;
    std::cout << c * d << "\n" << std::endl;

    std::cout << b << "\n" << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    std::cout << a.max( a, b ) << std::endl;
    std::cout << a.min( a, b ) << "\n" << std::endl;
    
    std::cout << "a: " << a << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "a + e: " << a + e << std::endl;
    std::cout << "a - e: " << a - e << "\n" << std::endl;

	std::cout << std::boolalpha;
    std::cout << "Test a < b" << ": " <<(a < b) << std::endl;
    std::cout << "Test a < b" << ": " <<a.operator<(b) << std::endl;
    std::cout << "Test a > b" << ": " <<(a > b) << std::endl;
    std::cout << "Test a > b" << ": " <<a.operator>(b) << std::endl;
    std::cout << "Test a >= b" << ": " << (a >= b) << std::endl;
    std::cout << "Test a >= b" << ": " << a.operator>=(b) << std::endl;
    std::cout << "Test a <= b" << ": " << (a <= b) << std::endl;
    std::cout << "Test a <= b" << ": " << a.operator<=(b) << std::endl;
    std::cout << "Test a == b" << ": " << (a == b) << std::endl;
    std::cout << "Test a == b" << ": " << a.operator==(b) << std::endl;
    std::cout << "Test a != b" << ": " << (a != b) << std::endl;
    std::cout << "Test a != b" << ": " << a.operator!=(b) << std::endl;
    std::cout << std::noboolalpha;

    std::cout << a.getRawBits() << std::endl;
    a.setRawBits(42);
    std::cout << a.getRawBits() << std::endl;
    
    std::cout << b.getRawBits() << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "b is " << b.toFloat() << " as float" << std::endl;
    return (0);
}
/*
int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
*/
