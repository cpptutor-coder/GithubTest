#include <iostream>
#include <vector>

namespace temp_namespace1
{
	void Add(int x, int y)
	{
		std::cout << "add is " << x + y << std::endl;
	}
}
/*
namespace temp_namespace2
{
	int Add(int x, int y)
	{
		std::cout << "add of namespace 2 " << x + y << std::endl;
	}
}*/

void outputFunc(std::string s)
{
	std::cout << "Input string: " << s << std::endl;
}

int main()
{
	outputFunc("This is test of outputFunc");
	temp_namespace1::Add(2, 3);

	int length;
	std::cout << "Please enter series length. Valid length is between 2 and 50\n";
	while (true)
	{
		std::cin >> length;
		int y = 20;
		if (length < 2 || length > 50)
		{
			int y = 10;
			std::cout << "Invalid series length. Please try again\n";
			std::cout << "In if condition. Value of y is " << y << std::endl;

			continue;
		}
		else
		{
			std::cout << "Value of y is " << y << std::endl;
			break;
		}

		std::cout << "Reaching this statement\n";
	}

	//std::cout << "y value: " << y;
	std::vector<int> series(length);
	series.push_back(1);
	series.push_back(1);
	int next;
	for (int i = 2; i < length; ++i)
	{
		next = series[i-2] + series[i-1];
		series.push_back(next);
	}


}