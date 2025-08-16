#include <bits/stdc++.h>
using namespace std;
void frequency(int a[], int n)
{
    int freq = 0;
    int num = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            freq++;
        }
        else
        {
            cout << num << " " << freq << "\n";
            num = a[i];
            freq = 1;
        }
    }
    cout << num << " " << freq << "\n";
}
int main()
{
    int arr[] = {2, 2, 2, 2, 5, 5, 6, 6, 6, 6, 8, 8, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    frequency(arr, n);
}