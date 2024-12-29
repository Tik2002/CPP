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
T& min(T& left, T& right){return const_cast<T&>(min(static_cast<const T&>(left), static_cast<const T&>(right)));}

template <typename T>
T& max(T& left, T& right){return const_cast<T&>(max(static_cast<const T&>(left), static_cast<const T&>(right)));}

template <typename T>
void swap(T& left, T& right){T tmp = left; left = right; right = tmp;}
