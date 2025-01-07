#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::clog;
using std::endl;
#define LEN 15
template <typename T>
void inc(T& val){val++;}

template <typename T>
void fPtr(T *arr, size_t len, void(*)(T&))
{
	for (size_t i = 0; i < len; i++)
		inc(arr[i]);
}
