#include <stdexcept>
#include <string>

class IndexOutOfBoundsException : public std::exception {
private:
	size_t index;
	std::string message;

public:
	IndexOutOfBoundsException(size_t _index) : index(_index)
	{
		message = "Index " + std::to_string(index) + " is out of bounds.";
	}

	const char* what() const noexcept override
	{
		return message.c_str();
	}
};


class InvalidArraySizeException : public std::exception {
private:
	size_t size;
	std::string message;
public:
	InvalidArraySizeException(size_t _size) : size(_size)
	{
		message = "Size " + std::to_string(size) + " is invalid";
	}

	const char* what() const noexcept override
	{
		return message.c_str();
	}
};
