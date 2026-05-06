// CODE TO CHECK IF NUMBER IS PRIME OR NOT
#include <iostream>
using namespace std;
int main()
{
    int num;
    int isPrime = 0;
    cout << "Enter the number: ";
    cin >> num;
    for (int i = 1; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            cout << "Number is not Prime";
            break;
            return 0;
        }
        else
            cout << "Number is Prime";
    }
    return 0;
}