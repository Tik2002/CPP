#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::clog;
using std::endl;

template <typename T>
class Array
{
public:
    Array();
    Array(const unsigned int n);
    Array(const Array& other);
    Array<T>& operator=(const Array<T>& other);
    const T& operator[](const unsigned int n) const;
    T& operator[](const unsigned int n);
    unsigned int size() const;
    ~Array();

    class except : public std::exception
    {
        char const *what() const throw() {return "Out of range";};
    };
private:
    T* _arr;
    unsigned int _size;
};

#include <Array.tpp>
