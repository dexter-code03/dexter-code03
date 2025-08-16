#include<bits/stdc++.h>
using namespace std;
int Maximum1s(int a[],int n)
{
    int pcount=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            pcount++;
        }
        else
        {
            count=max(count,pcount);
            pcount=0;
        }
    }
    count = max(count,pcount);
    return count;
}
int main()
{
    int arr[]={0,1,1,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<Maximum1s(arr,n);
}