#include <iostream>
using namespace std;

int decimalBinary(int decimal)
{
    int rem, binary = 0, pow = 1;
    while (decimal > 0)
    {
        rem = decimal % 2;
        decimal /= 2;
        binary += rem * pow;
        pow *= 10;
    }
    return binary;
}
int binaryDecimal(int binary)
{
    int decimal = 0, pow = 2, rem;
    while (binary > 0)
    {
        rem = binary % 10;
        binary /= 10;
        decimal += rem * pow;
        pow *= 2;
    }
    return decimal / 2;
}

int main()
{
    int decimal, binary;
    cout << "Enter a decimal number : ";
    cin >> decimal;
    cout << "The binary of this number is: " << decimalBinary(decimal) << endl;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "The decimal number is: " << binaryDecimal(binary);
    return 0;
}