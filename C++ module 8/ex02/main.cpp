#include <MutantStack.hpp>

int main( void )
{
{
	cout << "iterator test:" << endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	cout << mstack.top() << endl;
	mstack.pop();
	cout << mstack.size() << endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		cout << ' ' << *it;
		++it;
	}
	cout << endl;
	stack<int> s(mstack);
	while (!s.empty())
	{
		cout << ' ' << s.top();
		s.pop();
	}
	cout << endl;
}
{
	cout << "const_iterator test:" << endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	cout << mstack.top() << endl;
	mstack.pop();
	cout << mstack.size() << endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::const_iterator it = mstack.cbegin();
	MutantStack<int>::const_iterator ite = mstack.cend();
	++it;
	--it;
	while (it != ite)
	{
		cout << ' ' << *it;
		++it;
	}
	cout << endl;
	stack<int> s(mstack);
	while (!s.empty())
	{
		cout << ' ' << s.top();
		s.pop();
	}
	cout << endl;
}
{
	cout << "reverse_iterator test:" << endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	cout << mstack.top() << endl;
	mstack.pop();
	cout << mstack.size() << endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::reverse_iterator it = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite = mstack.rend();
	while (it != ite)
	{
		cout << ' ' << *it;
		++it;
	}
	cout << endl;
	stack<int> s(mstack);
	while (!s.empty())
	{
		cout << ' ' << s.top();
		s.pop();
	}
	cout << endl;
}
{
	cout << "const_reverse_iterator test:" << endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	cout << mstack.top() << endl;
	mstack.pop();
	cout << mstack.size() << endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::const_reverse_iterator it = mstack.crbegin();
	MutantStack<int>::const_reverse_iterator ite = mstack.crend();
	while (it != ite)
	{
		cout << ' ' << *it;
		++it;
	}
	cout << endl;
	stack<int> s(mstack);
	while (!s.empty())
	{
		cout << ' ' << s.top();
		s.pop();
	}
	cout << endl;
}
	// list test
	cout << "list test:" << endl;
	list<int> l;
	l.push_back(5);
	l.push_back(17);
	cout << l.back() << endl;
	l.pop_back();
	cout << l.size() << endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);
	list<int>::iterator lit = l.begin();
	list<int>::iterator lite = l.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		cout << ' ' << *lit;
		++lit;
	}
	cout << endl;
	return 0;
}
