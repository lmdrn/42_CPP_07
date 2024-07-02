/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:29:32 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/02 13:56:25 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.hpp"
#include "max.hpp"
#include "min.hpp"
#include <iostream>

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

int main(void)
{
	int a = 2;
	int b = 3;
	std::cout << RED << "TEST: BEFORE ALL TESTS" << RESET << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "" <<std::endl;
	std::cout << RED << "TEST: AFTER SWAP" << RESET << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "" <<std::endl;
	std::cout << RED << "TEST: MIN" << RESET << std::endl;
	std::cout << "min is:  " << ::min( a, b ) << std::endl;
	std::cout << "" <<std::endl;
	std::cout << RED << "TEST: MAX" << RESET << std::endl;
	std::cout << "max is " << ::max( a, b ) << std::endl;
	std::cout << "" <<std::endl;
	std::cout << RED << "TEST WITH STRINGS" << RESET << std::endl;
	std::string c = "a very long test that should be the longest one";
	std::string d = "a short one";
	std::cout << RED << "TEST: BEFORE ALL TESTS" << RESET << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "" <<std::endl;
	std::cout << RED << "TEST: AFTER SWAP" << RESET << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "" <<std::endl;
	std::cout << RED << "TEST: MIN" << RESET << std::endl;
	std::cout << "min is: " << ::min( c, d ) << std::endl;
	std::cout << "" <<std::endl;
	std::cout << RED << "TEST: MAX" << RESET << std::endl;
	std::cout << "max is: " << ::max( c, d ) << std::endl;

	return (0);
}
