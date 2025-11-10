/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegrix <alegrix@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:00:01 by alegrix           #+#    #+#             */
/*   Updated: 2025/10/30 16:05:57 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
# include <iostream>

int	main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	
	c = b;
	std::cout << a.getRawBits() << std::endl;
	a.setRawBits(5);
	std::cout << a.getRawBits() << std::endl;
	Fixed d(a);
	std::cout << d.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}
