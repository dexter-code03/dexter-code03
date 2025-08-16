#include<bits/stdc++.h>
using namespace std;
int Majority(int a[],int n)
{
    int res=0;
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(a[res]==a[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            count=1;
            res=i;
        }
    }
    count=0;
    for(int i=0;i<n;i++)
    {
        if(a[res]==a[i])
        {
            count++;
        }
    }
    if(count>(n/2))
    {
        return a[res];
    }
    else
    {
        return -1;
    }
}
int main()
{
    int arr[]={5,5,5,1,2,3,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<Majority(arr,size);
}
