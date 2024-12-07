#pragma once
#include <Array.hpp>

template <typename T>
Array<T>::Array(){_arr = nullptr; _size = 0;}

template <typename T>
Array<T>::Array(const unsigned int n) : _size(n) {_arr = new T[_size];}

template <typename T>
Array<T>::Array(const Array<T>& other) : _arr(nullptr), _size(0) {*this = other;}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
    if (this != &other)
    {
        delete[] this->_arr;
        this->_size = other._size;
        this->_arr = new T[this->_size];
        for (size_t i = 0; i < other._size; i++)
            this->_arr[i] = other._arr[i];
    }
    return *this;
}

template <typename T>
const T& Array<T>::operator[](unsigned int n) const
{
    if (n >= this->_size)
        throw Array<T>::except();
    return this->_arr[n];
}

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
    return const_cast<T&>((static_cast<const Array*>(this))->operator[](n));
}

template <typename T>
unsigned int Array<T>::size() const {return this->_size;}

template <typename T>
Array<T>::~Array(){delete[] _arr; _size = 0;}