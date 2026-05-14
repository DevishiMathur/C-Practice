#include <iostream>
using namespace std;
int main()
{
    int max1 = 0, max2 = 0, prod, i;
    int n;
    cout << "Number of elements: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max1 = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
    }
    prod = max1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    prod *= max2;
    cout << "The product is " << prod << endl;
    return 0;
}