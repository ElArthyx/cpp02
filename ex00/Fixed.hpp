/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegrix <alegrix@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:14:45 by alegrix           #+#    #+#             */
/*   Updated: 2025/10/15 20:05:45 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					f_val;
		static const int	fact_b = 8;
		
	public :
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &cpy);
		Fixed	&operator=(const Fixed &src);
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
};

#endif
