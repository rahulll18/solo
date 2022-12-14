/*
   Time Complexity :- Worst Case :- O(n^2) || Best Case :- O(n)
   Space Complexity :- O(1)

*/

#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

void bsort(int arr[], int n)
{
    for (int i = 1; i < n; i++) // Showing Rounds
    {
        for (int j = 0; j < n - i; i++) // Processing the elements
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bsort(arr, n);
    printarray(arr, n);
}