#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <list>
using std::string;
using std::list;
using std::stack;
using std::cout;
using std::cin;
using std::clog;
using std::endl;

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	iterator begin();
	iterator end();
	const_iterator cbegin() const ;
	const_iterator cend() const ;
	reverse_iterator rbegin();
	reverse_iterator rend();
	const_reverse_iterator crbegin() const ;
	const_reverse_iterator crend() const ;
};

#include <MutantStack.tpp>
