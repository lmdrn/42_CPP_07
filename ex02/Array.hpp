/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:25:56 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/20 21:32:59 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:
		unsigned int	_size;
		T*		_data;
	public:
		// Constructor
		Array();
		// Constructor
		Array(unsigned int n);

		// Destructor
		~Array();
		
		// Copy Constructor
		Array(const Array& copy);

		// Copy Assignment Operator
		Array& operator=(const Array& copy);

		// Subscript Operator
		// WRITE : allows to modify elem in array
		T&	operator[](unsigned int index);
		// READ : only allows to read elem in array
		const T& operator[](unsigned int index) const;
		
		unsigned int	size() const;
	
};

#include "Array.tpp"

#endif /* ARRAY_HPP */
