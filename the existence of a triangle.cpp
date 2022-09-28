#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	std::cout << "enter the first side: ";
	std::cin >> a;
	std::cout << "enter the second side: ";
	std::cin >> b;
	std::cout << "enter the third side: ";
	std::cin >> c;
	if ((a + b) > c and (a + c) > b and (b + c) > a)
	{
		int max_length = max(a, max(b,c));
		int min_length = min(a, min(b,c));
		int avg_length = (a + b + c) - max(a, max(b, c)) - min(a, min(b, c));
		if (pow(max_length, 2) > pow(min_length, 2) + pow(avg_length, 2))
		{
			std::cout << "the triangle is obtuse";
		}
		else if (pow(max_length, 2) < pow(min_length, 2) + pow(avg_length, 2))
		{
			std::cout << "the triangle is acute-angled";
		}
		else if (pow(max_length, 2) == pow(min_length, 2) + pow(avg_length, 2))
		{
			std::cout << "the triangle is rectangular";
		}
	}
	else
		std::cout << "the triangle does not exists";
}
