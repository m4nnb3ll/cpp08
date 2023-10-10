#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <array>
#include <vector>

template<typename T>
typename T::iterator easyfind(T& container, int i)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw(std::runtime_error("Couldn't find the element\n"));
	return (it);
}

int	main()
{
	// std::vector<int> myVector = {1, 2, 3, 4, 5};
	std::array<int, 10> test;
	std::array<int, 10>::iterator	it;

	// initializing the array
	for (int i = 0; i < 10; i++)
		test[i] = rand() % 10;
	try
	{
		it = easyfind(test, 7);
		std::cout << "The integer is found and it's index is: ";
		std::cout << std::distance(test.begin(), it) << std::endl;
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}
}
