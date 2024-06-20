/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:29:32 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/20 20:07:12 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main(void)
{
	int	array[] = { 1, 2, 3, 4, 5 };

	int	arraySize = sizeof(array) / sizeof(array[0]);

	std::cout << "Test 1 : Printing the array" << std::endl;
	iter(array, arraySize, printElem<int>);
	std::cout << " " << std::endl;

	std::cout << "Test 2 : Increment by one then print array" << std::endl;
	iter(array, arraySize, addOne<int>);
	std::cout << " " << std::endl;

	std::cout << "Test 3 : Print the string array" << std::endl;

	std::string wunderbar[] = {"I", "am", "wonderful!"};
	int strArraySize = sizeof(wunderbar) / sizeof(wunderbar[0]);
	iter(wunderbar, strArraySize, printElem<std::string>);

	return (0);
}
