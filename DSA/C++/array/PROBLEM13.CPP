#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0};
    int n = sizeof(a) / sizeof(a[0]);

    int count0 = 0;
    int count1 = 0;
    int res;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            if (a[i - 1] == 0)
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
    }
    if (count0 != 0 && count1 != 0)
    {
        if (count0 > count1)
        {
            res = 1;
        }
        else
        {
            res = 0;
        }
    }
    else
    {
        cout << "-1";
    }
    for (int i = 0; i < n; i++)
    {
        if (a[0] == res)
        {
            cout << "i";
        }
        else if (a[i] != a[i + 1])
        {
            if (a[i + 1] == res)
            {
                cout << i + 1;
            }
        }
        if (a[i] != a[i - 1])
        {
            if (a[i - 1] = res)
            {
                cout << "to" << i - 1 << "\n";
            }
        }
    }
}
