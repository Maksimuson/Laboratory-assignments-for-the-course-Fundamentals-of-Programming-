#include <iostream>
#include <cmath>
#include <cstdio>

void welcome()
{
    puts("Lab 2. Var 6. Student Shmakov Maksym, group IPZ-13");
    puts("Exercise 2");
}

void AreaSquare(double x, double y)
{
    if (std::abs(x - 7 * y) <= 25 && std::abs(7 * x + y) <= 25)
    {
        std::cout << "A point lies inside or on the border of the square." << std::endl;
    }
    else
    {
        std::cout << "A point does not lie in the square." << std::endl;
    }
}

int main()
{
    welcome();

    double x, y;
    std::cout << "Please enter the first coordinate (x): ";
    std::cin >> x;
    std::cout << "Please enter the second coordinate (y): ";
    std::cin >> y;

    AreaSquare(x, y);

    return 0;
}