#pragma once
#ifndef CPP07_EX02_ARRAY_H_
# define CPP07_EX02_ARRAY_H_

# include <iostream>

template <typename T>
class Array
{
private:
	T				*_array;
	unsigned int	_maxSize;

public:
	Array(void) : _array(NULL), _maxSize(0) { }
	Array(unsigned int const size) : _array(NULL), _maxSize(size)
	{
		_array = new T[_maxSize];
	}
	Array(Array const &rhs) : _array(NULL)
	{
		*this = rhs;
	}
	
	~Array(void)
	{
		if (_array != NULL)
			delete[] _array;
	}

	Array			&operator=(Array const &rhs)
	{
		if (_array != NULL)
			delete[] _array;
		_maxSize = rhs.size();
		_array = new T[_maxSize];
		for (unsigned int i = 0; i < _maxSize; i++)
			_array[i] = rhs[i];
		return *this;
	}
	T				&operator[](unsigned int const index) const
	{
		if (index >= _maxSize || _maxSize == 0)
			throw std::out_of_range("Array<T>: index out of bounds");
		return _array[index];
	}
	unsigned int	size(void) const
	{
		return _maxSize;
	}
};

#endif
