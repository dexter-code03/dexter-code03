#include<bits/stdc++.h>
using namespace std;
int stock(int a[],int n)
{
    int buy=a[0];
    int sell=a[0];
    int profit=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<sell)
        {
            profit+=sell-buy;
            buy=a[i];
            sell=a[i];
        }
        else
        {
            if(a[i]>sell)
            {
                sell=a[i];
            }
            if(a[i]<=buy)
            {
                buy=a[i];
            }
        }
    }
    if(buy!=a[n-1])
    {
        profit+=sell-buy;
    }
    return profit;
}
int main()
{
    int arr[]={4,2,2,2,4,2,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<stock(arr,n);
}