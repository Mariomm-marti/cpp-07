#include "iter.hpp"
#include <iostream>
#include <string>

void	print_number(int const num)
{
	std::cout << num << std::endl;
}

void	print_string(std::string const str)
{
	std::cout << str << std::endl;
}

int		main(void)
{
	{
		int const	numbers[6] = { 0, 4, 9, 6, 3, 1 };

		::iter(numbers, 6, &print_number);
	}
	{
		std::string const	strs[6] = { "Hello", "World!", "This", "Works", "With", "Templates" };

		::iter(strs, 6, &print_string);
	}
}
