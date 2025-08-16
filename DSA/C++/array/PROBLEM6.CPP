#include<bits/stdc++.h>
using namespace std;
int missing(int a[],int n)
{
   for(int i=0;i<n;i++)
   {
        while((a[i]>0)&&(a[i]<=n)&&a[a[i]-1]!=a[i])
        {
            swap(a[i],a[a[i]-1]);
        }
   }
   for(int i=0;i<n;i++)
   {
        if(a[i]!=i+1)
        {
            return i+1;
        }
    }
    return n+1;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<missing(arr,n);
}