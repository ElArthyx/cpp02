/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegrix  <alegrix@student.42lehavre.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:56:56 by alegrix           #+#    #+#             */
/*   Updated: 2025/10/17 19:17:47 by alegrix          ###   ########.fr       */
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

		int			toInt(void) const;
		float		toFloat(void) const;
		int			getRawBits(void)const;
		void		setRawBits(int const raw);

		Fixed		&operator=(const Fixed &src);
		bool		operator<(const Fixed &other) const;
		bool		operator<=(const Fixed &other) const;
		bool		operator==(const Fixed &other) const;
		bool		operator>(const Fixed &other) const;
		bool		operator>=(const Fixed &other) const;
		bool		operator!=(const Fixed &other) const;
		
		Fixed		operator+(const Fixed &other);
		Fixed		operator-(const Fixed &other);
		Fixed		operator/(const Fixed &other);
		Fixed		operator*(const Fixed &other);

		Fixed		&operator++();
		Fixed		operator++(int);
		Fixed		&operator--();
		Fixed		operator--(int);

		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);

};

std::ostream	&operator<<(std::ostream &os,const Fixed &src);


#endif
