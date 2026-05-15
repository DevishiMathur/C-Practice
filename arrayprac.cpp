#include <iostream>
using namespace std;
// Max and Min
void maxMin(int arr[], int size)
{
    int max, min, i;
    max = min = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "The maximum is: " << max << ", the minimum is " << min;
}
void linearSearch(int arr[], int size, int key)
{
    int i, found = 0;
    for (i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            found = 1;
            key = i;
        }
    }
    if (found == 1)
        cout << "Element found at index " << key;
    else
        cout << "Element not found";
}
void binarySearch(int arr[], int size, int key)
{
    int found = 0, low = 0, high = size - 1, mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            found = 1;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else if (arr[mid] > key)
            high = mid - 1;
    }
    if (found == 1)
        cout << "Element found at index " << mid;
    else
        cout << "Element not found";
}
void reverse(int arr[], int size)
{
    for (int i = size; i > 0; i--)
    {
        cout << i << " ";
    }
}
int main()
{
    int choice, n, size, key;
    cout << "1. Find maximum and minumum\n2. Linear search\n3. Binary Search\n4. Reverse the array\nEnter the number according to the task you want to perform: ";
    cin >> choice;
    cout << "Enter total number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    size = sizeof(arr) / sizeof(arr[0]);
    switch (choice)
    {
    case 1:
    {
        maxMin(arr, size);
        break;
    }
    case 2:
    {
        cout << "Enter the element to find: ";
        cin >> key;
        linearSearch(arr, size, key);
        break;
    }
    case 3:
    {
        cout << "Enter the element to find: ";
        cin >> key;
        binarySearch(arr, size, key);
        break;
    }
    case 4:
    {
        reverse(arr, size);
    }
    }
    return 0;
}