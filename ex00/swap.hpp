/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:34:53 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/20 18:43:38 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_HPP
# define SWAP_HPP

template<typename T>
void swap(T& a, T& b)
{
	T tmp;

	tmp = b;
	b = a;
	a = tmp;
}

#endif /* SWAP_HPP */
