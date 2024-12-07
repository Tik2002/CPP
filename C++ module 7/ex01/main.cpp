#include <Iter.hpp>

template <typename T>
void fPtr(T *arr, size_t len, void(*)(T&))
{
	for (size_t i = 0; i < len; i++)
		inc(arr[i]);
}

int main( void ) {
	int *i_arr = new int[LEN];
	for (int i = 0; i < LEN; i++)
	{
		i_arr[i] = i;
	}
	for (int i = 0; i < LEN; i++)
	{
		cout << i_arr[i] << (i < LEN - 1 ? ", " : "\n");
	}
	fPtr(i_arr, LEN, inc);
	for (int i = 0; i < LEN; i++)
	{
		cout << i_arr[i] << (i < LEN - 1 ? ", " : "\n");
	}
	char *c_arr = new char[LEN];
	for (int i = 0; i < LEN; i++)
	{
		c_arr[i] = i + 'A';
	}
	for (int i = 0; i < LEN; i++)
	{
		cout << c_arr[i] << (i < LEN - 1 ? ", " : "\n");
	}
	fPtr(c_arr, LEN, inc);
	for (int i = 0; i < LEN; i++)
	{
		cout << c_arr[i] << (i < LEN - 1 ? ", " : "\n");
	}
return 0;
}