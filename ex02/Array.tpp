/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 21:10:43 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/02 13:04:00 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <stdexcept>
#include <iostream>
#include <sstream>

template<typename T>
Array<T>::Array() : _size(0), _data(NULL) 
{
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _data(new T[n]()) 
{
}

template<typename T>
Array<T>::Array(const Array& copy) : _size(copy._size), _data(new T[copy._size])
{
	for (unsigned int i = 0; i < _size; i++)
	{
		_data[i] = copy._data[i];
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& copy)
{
	if (this != &copy)
	{
		delete[] _data;
		_size = copy._size;
		_data = new T[copy._size];
		for (unsigned int i = 0; i < _size; i++)
		{
			_data[i] = copy._data[i];	
		}
	}
	return (*this);
}

template<typename T>
Array<T>::~Array()
{ 
	delete[] _data;
}

//subscript operator write
template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
	{
		throw std::out_of_range("Index out of bounds");
	}
	return _data[index];
}

//subscript operator read
template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
	{
		throw std::out_of_range("Index out of bounds");
	}
	return _data[index];
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}

template<typename T>
std::string	Array<T>::print() const
{
	std::ostringstream finalString;
	for (unsigned int i = 0; i < _size;i++)
	{
		finalString << _data[i] << " ";
	}
	return (finalString.str());
}

#endif /* ARRAY_TPP */
