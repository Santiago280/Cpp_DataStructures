#ifndef	MY_ARRAY_HPP
#define MY_ARRAY_HPP

#include <stdexcept>
#include <string>

template<typename T, size_t N>

class MyArray
{
private:
	T m_data[N];

public:
	MyArray()
	{
		for (size_t i = 0; i < n; i++)
		{
			m_data[i] = T();
		}
	}

	// Copy constructor
	MyArray(const MyArray& otherArray)	// C++ templates only allows copys from another array with the same type and size
	{
		// C++ templates only allows copys from another array with the same type and size
		// Therefore is not needed to do the checking on the code.
		for (size_t i = 0; i < n; i++)
		{
			m_data[i] = otherArray[i];
		}
	}

	// Destructor
	~MyArray()
	{
		// Destructor not needed because the array is automatically deleted when it goes out of scope
		// its member variables are automatically deleted because they are not pointers
	}

	// Assignment operator
	MyArray& operator=(const MyArray& otherArray)
	{
		// Again, C++ templates won't allow different sizes or types templates to be copied
		for (size_t i = 0; i < N; i++)
		{
			m_data[i] = otherArray[i];
		}
	}

	// Element Access member functions
	T& At(size_t index)
	{
		if (index >= N)
		{
			throw std::out_of_range("Index: " + std::to_string(index) + " is not valid");
		}
		return m_data[index];
	}

	T& operator[](size_t index)
	{
		if (index >= N)
		{
			throw std::out_of_range("Index: " + std::to_string(index) + "")
		}
		return m_data[index];
	}

	T& Front()
	{
		return m_data[0];
	}

	T& Back()
	{
		return m_data[N - 1];
	}

	T* Data()
	{
		return m_data;
	}


	// TODO: Create a random access iterator class.

	// TODO: Create a reverse iterator class.
};

#endif	// MY_ARRAY_HPP