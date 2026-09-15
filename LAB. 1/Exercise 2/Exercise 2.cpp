#include <iostream>
#include <cmath>
#include <cstdio>

void welcome()
{
    puts("Lab 1. Var 2. Student Shmakov Maksym, group IPZ-13");
    puts("Exersice 2");
}

bool ExistenceCheck(float a, float b, float c) //Checking whether a triangle exists
{
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (b + c > a) && (c + a > b))
    {
        return true;
    }
    else
    {
        std::cout << "Such a triangle cannot exist" << std::endl;
        std::cout << "Please re-enter the values" << std::endl;
        return false;
    }
}
float area(float a, float b, float c)
{
    float p = (a + b + c) / 2.0f;
    return std::sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    welcome();
    float a, b, c;

    do {
        std::cout << "Please enter the first side of the triangle: ";
        std::cin >> a;
        std::cout << "Please enter the second side of the triangle: ";
        std::cin >> b;
        std::cout << "Please enter the third side of the triangle: ";
        std::cin >> c;
    } while (!ExistenceCheck(a, b, c));

    std::cout << "The area of a triangle = ";
    std::cout << area(a, b, c) << std::endl;

    return 0;
}
