/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegrix  <alegrix@student.42lehavre.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:56:56 by alegrix           #+#    #+#             */
/*   Updated: 2025/10/17 18:02:17 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
		int					_f_val;
		static const int	_frac_bits = 8;
	
	public:

		Fixed();
		Fixed(const float nb);
		Fixed(const int nb);
		Fixed(const Fixed& copy);
		~Fixed();

		Fixed	&operator=(const Fixed &src);
		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &os,const Fixed &src);


#endif
