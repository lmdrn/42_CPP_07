/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:25:27 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/02 13:28:32 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int main(void)
{
	std::cout << RED << "TEST ONE: Create int array with default const" << RESET << std::endl;
	Array<int> original;
	std::cout << "original is " << original.size() << " long" << std::endl;
	std::cout << "printing original: " << original.print() << std::endl;
	std::cout << "" << std::endl;
	std::cout << RED << "TEST TWO: Create int array with size" << RESET << std::endl;
	Array<int> arraySize(5);	
	std::cout << "arraySize is " << arraySize.size() << " long" << std::endl;
	std::cout << "printing arraySize: " << arraySize.print() << std::endl;
	std::cout << "" << std::endl;
	std::cout << RED << "TEST THREE: Create int array with size copy" << RESET << std::endl;
	Array<int> arrayCopy(8);	
	arrayCopy = arraySize;
	std::cout << "arrayCopy is " << arrayCopy.size() << " long" << std::endl;
	std::cout << "printing arrayCopy: " << arrayCopy.print() << std::endl;
	std::cout << "" << std::endl;
	std::cout << RED << "TEST FOUR: Write content at X index" << RESET << std::endl;
	arraySize[1] = 2;
	std::cout << "arraySize is " << arraySize.size() << " long" << std::endl;
	std::cout << "printing arraySize: " << arraySize.print() << std::endl;
	std::cout << ORANGE << "Checking that arrayCopy did not change" << RESET << std::endl;
	std::cout << "arrayCopy is " << arrayCopy.size() << " long" << std::endl;
	std::cout << "printing arrayCopy: " << arrayCopy.print() << std::endl;
	std::cout << "" << std::endl;
	std::cout << RED << "TEST FIVE: Read index out of bounds" << RESET << std::endl;
	try
	{
		std::cout << arraySize[100] << std::endl;
	}
	catch (const std::exception& error)
	{
		std::cout << RED << "ERROR: " << error.what() << RESET << std::endl;
	}
	std::cout << "" << std::endl;
	std::cout << RED << "TEST SIX: Read Value at X Index" << RESET << std::endl;
	try
	{
		std::cout << "Reads value: " << arraySize[0] << " at index 0." << std::endl;
	}
	catch (const std::exception& error)
	{
		std::cout << RED << "ERROR: " << error.what() << RESET << std::endl;
	}
	std::cout << "" << std::endl;
	std::cout << RED << "TEST SEVEN: Write with index out of bounds" << RESET << std::endl;
	try
	{
		arraySize[5] = 2;
		std::cout << "Writes value: " << arraySize[5] << " at index 05." << std::endl;
	}
	catch (const std::exception& error)
	{
		std::cout << RED << "ERROR: " << error.what() << RESET << std::endl;
	}

	// read value at x index 
	// show array 
	
	return (0);
}
