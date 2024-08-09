/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 08:25:27 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/03 06:26:43 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <exception>
#include <stdexcept>


template <typename T>
class Array {
	private:
		T* data;
		unsigned int index;
	public:
	Array();
	Array(unsigned int i);
	Array(const Array & A);
	Array &operator=(const Array &A);
	const T& operator[](unsigned int i) const;
	T& operator[](unsigned int i);

	~Array();
	

	unsigned int size() const;
};

template <typename T>

Array<T>::Array() : data(NULL) , index(0) {};

template <typename T>
Array<T>::Array(unsigned int i) : data(new T[i]) , index(i) {};

template <typename T>
Array<T>::Array(const Array &A) {
	for (int i = 0 ; i < index; i++)
		data[i] == A.data[i];
};

template <typename T>
Array<T> &Array<T>::operator=(const Array &A) {
	if (this == &A)
		return *this;
	delete [] data;
	index = A.index;
	data = new T[index];
	for (int i = 0 ; i < index; i++)
		data[i] == A.data[i];
	return (*this);
};

template <typename T>
Array<T>::~Array() {
	delete[] data;
}

template <typename T>
const T& Array<T>::operator[](unsigned int i) const{
	if (index <= i)
		throw std::out_of_range("Index out of range");
	return data[index];	
}

template <typename T>
unsigned int Array<T>::size() const{
	return index;
}

template <typename T>
T& Array<T>::operator[](unsigned int i) {
        if (index <= i)
            throw std::out_of_range("Index out of range");
        return data[i];
    }