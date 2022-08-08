#pragma once
#ifndef CPP07_EX01_ITER_H_
# define CPP07_EX01_ITER_H_

template <typename T>
void	iter(T const *array, int const length, void (*func)(T const arr))
{
	for (int i = 0; i < length; i++)
		func(*(array + i));
}

#endif
