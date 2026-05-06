#include <iostream>
using namespace std;
int main()
{
    // sum of only odd numbers
    int n, sumFor = 0, sumWhile = 0;
    cout << "Enter the limit: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            sumFor += i;
    }
    int i = 0;
    while (i != n)
    {
        if (i % 2 != 0)
            sumWhile += i;
        i++;
    }
    cout << "The sum is using For loop is " << sumFor << "\n";
    cout << "The sum for while loop is " << sumWhile;
    return 0;
}