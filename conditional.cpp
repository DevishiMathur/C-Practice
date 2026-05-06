#include <iostream>
using namespace std;
void voting(int age)
{
    if (age >= 18)
    {
        cout << "Eligible to vote";
    }
    else if (age <= 0)
        cout << "Enter valid age.";
    else
        cout << "not eligible to vote";
}
void isEven(int num)
{
    if (num % 2 == 0)
        cout << "Number is even";
    else
        cout << "Odd";
}
int main()
{
    int choice;
    cout << "1 : Voting\n2 : Odd or Even\n";
    cin >> choice;
    if (choice == 1)
    {
        int age;
        cout << "Enter your age: \t";
        cin >> age;
        voting(age);
    }
    else if (choice == 2)
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        isEven(num);
    }
    else
        cout << "Only write either 1 or 2.";

    return 0;
}