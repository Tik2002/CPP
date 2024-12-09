#pragma once

#include <iostream>
#include <algorithm>
using std::string;
using std::cout;
using std::cin;
using std::clog;
using std::endl;

template <typename T>
const T::iterator easyfind(const T& src, int i);

#include <easyfind.tpp>
