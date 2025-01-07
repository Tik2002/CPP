#include <easyfind.hpp>

template <typename T>
typename T::const_iterator easyfind(const T& container, int i)
{
	return (container.empty() ? throw std::invalid_argument("Container is empty!") : find(container.begin(), container.end(), i));
}
