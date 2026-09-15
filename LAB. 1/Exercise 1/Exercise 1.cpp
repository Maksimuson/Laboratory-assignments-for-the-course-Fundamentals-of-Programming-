#include <iostream>
#include <cmath> 
#include <cstdio>

void welcome()
{
	puts("Lab 1. Var 2. Studen Shmakov Maksym, group IPZ-13");
	puts("Exersice 1");
}

float equations(int a, int b, int c, int d)
{
	float x = ((2.3 + a * pow(b, 2)) / (0.4 + c * exp(d)));
	return x;
}

int main()
{
	welcome();
	int a, b, c, d;
	std::cout << "Please enter the first value: ";
	std::cin >> a;
	std::cout << "Please enter the first value: ";
	std::cin >> b;
	std::cout << "Please enter the first value: ";
	std::cin >> c;
	std::cout << "Please enter the first value: ";
	std::cin >> d;
	std::cout << equations(a, b, c, d) << std::endl;

}
