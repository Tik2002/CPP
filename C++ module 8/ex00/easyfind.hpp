#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
using std::string;
using std::cout;
using std::exception;
using std::cin;
using std::clog;
using std::find;
using std::vector;
using std::endl;

template <typename T>
typename T::const_iterator easyfind(const T& container, int i);

#include <easyfind.tpp>
