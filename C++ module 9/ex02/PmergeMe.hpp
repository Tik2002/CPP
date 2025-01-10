#pragma once

#include <cmath>
#include <iostream>
#include <iomanip>
#include <iostream>
#include <vector>
#include <deque>
#include <cstddef>
#include <ctime>
#include <cctype>
#include <algorithm>
using std::string;
using std::cout;
using std::vector;
using std::deque;
using std::cin;
using std::clog;
using std::endl;

namespace PmergeMe
{
void sort(int ac, char **av);

template <typename T>
void insertionSort(T& container)
{
	for (size_t i = 1; i != container.size(); i++)
	{
		int k = i;
		for (int j = i - 1; j > -1; j--)
		{
			if (container[k] < container[j])
				std::swap(container[k--], container[j]);
			else
				break ;
		}
	}
}

template <typename T>
void insert(T& left, T& right)
{
	size_t n = 0;
	size_t power = 0;
	size_t start = 0;
	size_t end = 0;

	for (size_t i = 0; i < right.size();)
	{
		++power;

		n = pow(2, power) - n;

		start += n;

		end = start - n;

		if (start > right.size())
			start = right.size();

		for (size_t j = start - 1; j >= end;)
		{
			left.insert(std::upper_bound(left.begin(), left.end(), right[j]), right[j]);
			++i;
			if (j == 0)
				break ;
			--j;
		}
	}
}

template <typename T>
void mergeSort(T& container)
{
	T left;
	T right;

	if (container.size() > 4)
		return insertionSort(container);
	for (size_t i = 0; i < container.size() / 2; i++)
	{
		int	_a = container[2 * i];
		int	_b = container[2 * i + 1];
		if (_a > _b)
		{
			left.push_back(_b);
			right.push_back(_a);
		}
		else
		{
			left.push_back(_a);
			right.push_back(_b);
		}
	}
	if (container.size() % 2 == 1)
		right.push_back(container[container.size() - 1]);
	mergeSort(left);
	insert(left, right);
	container = left;

}
}

