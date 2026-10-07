#include <iostream>
#include <iomanip>
#include <float.h>
#include <math.h>
using namespace std;

int x;                 // параметр зовнішньої суми
int k;                 // параметр внутрішньої суми
float sum = 0;         // сума ряду
float accuracy = 0;    // точність розрахунків
float numerator;       // чисельник елемента ряду: (x+1)^(k-1)
float denominator;     // знаменник елемента ряду: (k+1)(k+2)...(k+x)
float member;          // елемент ряду

void welcome()
{
    puts("Lab 3. Var 8. Student ______, group IPZ-13");
    puts("Exercise 1");
}

void displaySum()
{
    cout << setw(5) << x << setw(5) << k << setw(15) << member << setw(15) << sum << endl;
}

//============= calculation of member and sum ============
void calcMemberAndSum()
{
    for (x = 1; x <= 5; x++) // цикл по зовнішній сумі
    {
        k = 0; // початкове значення параметра внутрішньої суми

        // перший елемент ряду при k=0
        numerator = 1.0f / (x + 1); 
        denominator = 1;   
        for (int i = 2; i <= x; i++)
            denominator *= i;

        member = numerator / denominator; 
        sum += member;
        displaySum(); // виведення першого розрахунку

        do
        {
            k++; // перейти до наступного елемента ряду
            numerator *= (x + 1);              // степінь: множимо на (x+1) від попереднього кроку
            denominator = denominator * (k + x) / k; // D(k) = D(k-1)*(k+x)/k
            member = numerator / denominator;

            // перевірка на переповнення float (за модулем)
            if ((fabs(member) < 1e-38f) || (fabs(member) > 1e38f))
            {
                cout << "overflow float member - break cycle with k" << endl;
                break; // переривання циклу по параметру k та перехід до наступного x
            }

            if (k % 2 != 0) // знаки чергуються: непарні k дають від'ємні елементи
                member = -member;

            sum += member; // накопичення суми
            displaySum();  // виведення поточного розрахунку
        } while (fabs(member) > accuracy); // перевірка елемента на відповідність точності

        cout << "==================================================" << endl;
    }
}

//=======================================================
int main()
{
    welcome();
    bool answer = 0; // відповідь для повторення циклу
    do
    {
        cout << "======================================" << endl;
        cout << "Enter the accuracy of the calculation: " << endl;
        cin >> accuracy;
        cout << "result of iterations" << endl;
        cout << "==================================================" << endl;
        cout << "    x         k          member           sum     " << endl;
        cout << "==================================================" << endl;
        calcMemberAndSum();
        cout << "sum = " << sum << endl;
        sum = 0;      // обнуляємо суму ряду для повторного розрахунку
        accuracy = 0; // обнуляємо точність розрахунку
        cout << "\nDo you want to continue? Yes = 1, No = 0" << endl;
        cin >> answer;
    } while (answer != 0);
}
