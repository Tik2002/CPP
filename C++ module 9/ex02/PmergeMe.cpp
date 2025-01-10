#include <PmergeMe.hpp>

static void validation(int ac)
{
	if (ac < 2)
		throw std::invalid_argument("Error: more than one arguments required.");
}

void PmergeMe::sort(int ac, char **av)
{
	validation(ac);
	vector<int> vec;
	deque<int> deq;
	for (int i = 1; i < ac; i++)
	{
		string str = av[i];
		for (size_t j = 0; j < str.length(); j++)
		{
			if (!std::isdigit(str[j]))
				throw std::invalid_argument("Error: only positive numbers required.");
		}
		int tmp = std::atoi(av[i]);
		if (tmp < 0)
			throw std::invalid_argument("Error: only positive numbers required.");
		vec.push_back(tmp);
		deq.push_back(tmp);
	}
	cout << "Before:\t";
	for (vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << (it + 1 != vec.end() ? " " : "\n");
	}
	clock_t vec_start = clock();
	vec.size() > 50 ? mergeSort(vec) : insertionSort(vec);
	clock_t vec_end = clock();
	cout << "After:\t";
	for (vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << (it + 1 != vec.end() ? " " : "\n");
	}
	double  vec_time = static_cast<double>(vec_end - vec_start) / CLOCKS_PER_SEC;
	cout << "Time to process with vector container:\t" << std::fixed << std::setprecision(5) << vec_time << " seconds\n";
	clock_t deq_start = clock();
	deq.size() > 50 ? mergeSort(deq) : insertionSort(deq);
	clock_t deq_end = clock();
	double  deq_time = static_cast<double>(deq_end - deq_start) / CLOCKS_PER_SEC;
	cout << "Time to process with deque container:\t" << std::fixed << std::setprecision(5) << deq_time << " seconds\n";
}
