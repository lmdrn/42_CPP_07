/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:46:05 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/20 20:07:10 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

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
