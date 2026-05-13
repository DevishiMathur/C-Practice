#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int sumDigits(int num)
{
    int sum = 0, digit;
    while (num > 0)
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    return sum;
}
int binomial(int n, int r)
{ // nCr=n!/r!(n-r)!
    int nFact, rFact, remF, b = 0, rem = 0;
    rem = n - r;
    nFact = factorial(n);
    rFact = factorial(r);
    remF = factorial(rem);
    b = nFact / (rFact * remF);
    return b;
}
void printPrime(int n)
{
    int count = 0, num = 2;
    while (count < n)
    {
        bool isPrime = true;

        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << num << " ";
            count++;
        }
        num++;
    }
}

int main()
{
    int n, r, num;
    cout << "Enter the number whose Factorial you want to calculate: ";
    cin >> n;
    cout << "The factorial is: " << factorial(n) << endl;
    cout << "Number whose sum you want: ";
    cin >> num;
    cout << "The sum of digits is: " << sumDigits(num) << endl;
    cout << "Enter the numbers n and r (nCr) whose binomial you want to calculate: ";
    cin >> n >> r;
    cout << "the binomial is: " << binomial(n, r) << endl;
    cout << "Enter the range for prime numbers: ";
    cin >> n;
    printPrime(n);
    return 0;
}