/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:25:27 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/20 21:30:25 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	try
	{
		// Default constructor
        	Array<int> emptyArray;
		std::cout << "Empty array size: " << emptyArray.size() << std::endl;

		// Constructor with size
		unsigned int n = 5;
		Array<int> intArray(n);
		std::cout << "intArray size: " << intArray.size() << std::endl;

		// Fill array and display elements
		for (unsigned int i = 0; i < intArray.size(); ++i) {
		    intArray[i] = i * 2;
		    std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
		}

		// Copy constructor
		Array<int> copyArray(intArray);
		std::cout << "copyArray size: " << copyArray.size() << std::endl;

		// Display copied array elements
		for (unsigned int i = 0; i < copyArray.size(); ++i) {
		    std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
		}

		// Modify the original array and ensure copy is not affected
		intArray[0] = 100;
		std::cout << "Modified intArray[0]: " << intArray[0] << std::endl;
		std::cout << "Unchanged copyArray[0]: " << copyArray[0] << std::endl;

		// Assignment operator
		Array<int> assignedArray;
		assignedArray = intArray;
		std::cout << "assignedArray size: " << assignedArray.size() << std::endl;

		// Display assigned array elements
		for (unsigned int i = 0; i < assignedArray.size(); ++i) {
		    std::cout << "assignedArray[" << i << "] = " << assignedArray[i] << std::endl;
		}

		// Test out of bounds access
		std::cout << "Trying to access out of bounds element:" << std::endl;
		std::cout << intArray[n] << std::endl; // This should throw an exception
	}
	catch (const std::exception& error)
	{
		std::cerr << "Exception: " << error.what() << std::endl;
	}
	return (0);
}
