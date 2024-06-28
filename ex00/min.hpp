/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:33:20 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/28 13:25:07 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_HPP
# define MIN_HPP

template<typename T>
T min(T a, T b)
{
	if (a < b)
		return (a);
	else if (a > b)
		return (b);
	else if (a == b)
		return (b);
}

#endif/* MIN_HPP */
