/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:29:32 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/28 13:33:29 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main(void)
{
	std::cout << " " << std::endl;
	std::cout << GREEN << "xx----- TEST WITH AN INT ARRAY -----xx" << RESET << std::endl;
	std::cout << " " << std::endl;
	int	array[] = { 1, 2, 3, 4, 5 };

	int	arraySize = sizeof(array) / sizeof(array[0]);

	std::cout << GREEN << "Test 1 : Printing the array" << RESET << std::endl;
	iter(array, arraySize, printElem<int>);
	std::cout << " " << std::endl;

	std::cout << GREEN << "Test 2 : Increment by one then print array"  << RESET << std::endl;
	iter(array, arraySize, addOne<int>);
	std::cout << " " << std::endl;

	std::cout << GREEN << "Test 3 : Print the string array" << RESET << std::endl;

	std::cout << " " << std::endl;
	std::cout << GREEN << "xx----- TEST WITH A STR ARRAY -----xx" << RESET << std::endl;
	std::cout << " " << std::endl;

	std::string wunderbar[] = {"I", "am", "wonderful!"};
	int strArraySize = sizeof(wunderbar) / sizeof(wunderbar[0]);
	iter(wunderbar, strArraySize, printElem<std::string>);

	return (0);
}
