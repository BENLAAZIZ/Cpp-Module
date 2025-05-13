/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:22:30 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/13 17:50:26 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
	private:
		T* _array;
		unsigned int _size;
	public:
		Array() : _array(nullptr), _size(0) {}
		Array(unsigned int n) : _size(n)
		{
			if (n == 0)
				_array = nullptr;
			else
				_array = new T[n];
		}

		Array(const Array& obj) : _array(nullptr), _size(obj._size)
		{
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; ++i)
				_array[i] = obj._array[i];
		}

		Array& operator=(const Array& obj)
		{
			if (this != &obj)
			{
				delete[] _array;
				_size = obj._size;
				if (_size == 0)
					_array = nullptr;
				else
				{
					_array = new T[_size];
					for (unsigned int i = 0; i < _size; ++i)
						_array[i] = obj._array[i];
				}
			}
			return *this;
		}
	
		~Array()
		{
			delete[] _array;
		}

		T& operator[](unsigned int index) {
			if (index >= _size)
				throw std::out_of_range("Index out of range");
			return _array[index];
		}
		
		const T& operator[](unsigned int index) const
		{
			if (index >= _size)
				throw std::out_of_range("Index out of range");
			return _array[index];
		}

		unsigned int size() const
		{
			return _size;
		}
};
		
#endif