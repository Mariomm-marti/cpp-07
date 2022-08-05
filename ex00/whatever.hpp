#pragma once
#ifndef CPP07_EX00_WHATEVER_H_
# define CPP07_EX00_WHATEVER_H_

template <typename T>
void	swap(T &lhs, T &rhs)
{
	T const	tmp = lhs;

	lhs = rhs;
	rhs = tmp;
}

template <typename T>
T const	&min(T const &lhs, T const &rhs)
{
	if (lhs < rhs)
		return lhs;
	return rhs;
}

template <typename T>
T const	&max(T const &lhs, T const &rhs)
{
	if (lhs > rhs)
		return lhs;
	return rhs;
}

#endif
