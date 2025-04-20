#include <stdio.h>
#include <array>

// Function to determine iterator category 
template<typename T>
typename std::iterator_traits<T>::iterator_category get_iterator_category(T it)
{
	return typename std::iterator_traits<T>::iterator_category();
}

int main() 
{
	
	std::array<int, 10> arr1;

	std::array::

	/*
	for (int i = 0; i < 8; i++)
	{
		arr1[i] = i;
	}

	arr1.at(9);*/
	//std::array<int, 2>arr2(arr1);

	// Test copy consturctor

	
}