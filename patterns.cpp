#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int count = 1;
    // PATTERN 1:
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
    // PATTERN 2:
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << count << "\t";
            count++;
        }
        cout << "\n";
    }
    // PATTERN 3:
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    // PATTERN 4:
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    // PATTERN 5:
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    cout << "\n";
    // PATTERN 6:
    count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " " << count;
        }
        count++;
        cout << "\n";
    }
    // PATTERN 7:
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << (i + 1) << " ";
        }
        cout << "\n";
    }
    return 0;
}