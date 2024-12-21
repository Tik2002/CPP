#include <easyfind.hpp>

template <typename T>
typename T::const_iterator easyfind(const T& container, int i)
{
	return (std::find(container.begin(), container.end(), i));
}
