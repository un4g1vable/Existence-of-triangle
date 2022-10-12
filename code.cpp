#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	setlocale(0, "");
	
	int a,b,c;
	std::cout << "Введи первую сторону: ";
	std::cin >> a;
	std::cout << "Введи вторую сторону: ";
	std::cin >> b;
	std::cout << "Введи третью сторону: ";
	std::cin >> c;
	if ((a + b) > c and (a + c) > b and (b + c) > a)
	{
		int max_length = max(a, max(b,c));
		int min_length = min(a, min(b,c));
		int avg_length = (a + b + c) - max(a, max(b, c)) - min(a, min(b, c));
		if (pow(max_length, 2) > pow(min_length, 2) + pow(avg_length, 2))
		{
			std::cout << "Треугольник тупоугольный";
		}
		else if (pow(max_length, 2) < pow(min_length, 2) + pow(avg_length, 2))
		{
			std::cout << "Треугольник остроугольный";
		}
		else if (pow(max_length, 2) == pow(min_length, 2) + pow(avg_length, 2))
		{
			std::cout << "Треугольник прямоугольный";
		}
	}
	else
		std::cout << "the triangle does not exists";
}
