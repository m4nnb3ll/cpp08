#include "easyfind.hpp"

int	main()
{
	std::vector<int> myVector;
	std::vector<int>::iterator	it;

	// initializing the array
	for (int i = 0; i < 10; i++)
		myVector.push_back(rand() % 10);
	try
	{
		it = easyfind(myVector, 7);
		std::cout << "The integer is found and it's index is: ";
		std::cout << std::distance(myVector.begin(), it) << std::endl;
		for (int i=0; i < 10; i++)
			std::cout << myVector[i] << std::endl;
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}
}
