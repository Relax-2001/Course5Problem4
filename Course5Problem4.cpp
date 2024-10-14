#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string Message)
{
    int Num = 0;

    do {

        cout << Message << "\n";
        cin >> Num;

    } while (Num <= 0);

    return Num;

}

bool CheckPerfect(int Num)
{

    int Sum = 0;

    for (int i = 1; i < Num; i++)
    {
        if (Num % i == 0)
        {
            Sum += i;
        }
    }

    return Num == Sum;

}

void PrintPerfectNumber(int Number)
{

    for (int i = 1; i <= Number; i++)
    {
        if (CheckPerfect(i))
        cout << i << " is perfect\n";
    }
  
}

int main()
{

    PrintPerfectNumber(ReadPositiveNumber("Enter a positive number"));

    return 0;
}