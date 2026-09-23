#include <iostream>
#include <cmath> 
#include <cstdio>

void welcome()
{
	puts("Lab 2. Var 6. Student Shmakov Maksym, group IPZ-13");
	puts("Exercise 1");
}

int getConditionCode(double prod)
{
	if (prod > 0 && prod < 10)	return 1;
	if (prod > 10)				return 2;
	if (prod == 0)				return 3;
	else						return -1;
}

int main()
{
	welcome();

	double a, b, f;
	std::cout << "Please enter the first value: ";
	std::cin >> a;
	std::cout << "Please enter the second value: ";
	std::cin >> b;

	double prod = a * b;

	switch (getConditionCode(prod))
	{
	case 1:
		f = pow(b, 2) / (10 - prod);
		std::cout << "f(x) = " << f << std::endl;
		break;
	case 2:
		f = 10 * pow(a, 2) / b;
		std::cout << "f(x) = " << f << std::endl;
		break;
	case 3:
		f = 1;
		std::cout << "f(x) = " << f << std::endl;
		break;
	default:
		std::cout << "The function is undefined!" << std::endl;
		break;
	}
	return 0;
}