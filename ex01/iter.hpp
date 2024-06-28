/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:46:05 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/28 13:31:35 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

template<typename T, typename Fct>
void iter(T *array, int len, Fct fct)
{
	for (int i = 0; i < len; i++)
	{
		fct(array[i]);
	}
}

template<typename T>
void	printElem(T elem)
{
	std::cout << elem << std::endl;
}

template<typename T>
void	addOne(T elem)
{
	elem = elem + 1;
	std::cout << elem << std::endl;
}


#endif /* ITER_HPP */
