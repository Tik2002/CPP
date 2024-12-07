#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::clog;
using std::endl;

template <typename T>
const T& min(const T& left, const T& right){return (left < right ? left : right);}

template <typename T>
const T& max(const T& left, const T& right){return (left > right ? left : right);}

template <typename T>
void swap(T& left, T& right){T tmp = left; left = right; right = tmp;}