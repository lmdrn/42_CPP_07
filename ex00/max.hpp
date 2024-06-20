/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:30:31 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/20 18:40:23 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAX_HPP
# define MAX_HPP

template<typename T>
T max(T a, T b)
{
	return (a > b ? a : b);
}

#endif /* MAX_HPP */
