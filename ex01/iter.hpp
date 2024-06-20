/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:46:05 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/20 18:50:36 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T, typename Fct>
void iter(T *array, int len, Fct fct)
{
	for (int i = 0; i < len; i++)
	{
		fct(array[i]);
	}
}

#endif /* ITER_HPP */
