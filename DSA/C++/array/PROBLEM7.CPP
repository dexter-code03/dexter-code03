#include<bits/stdc++.h>
using namespace std;
int TrapWater(int a[],int n)
{
   int res=0;
   int l=0,r=n-1;
   int lmax=a[l],rmax=a[r];
   while(l<r)
   {
    if(lmax<rmax)
    {
        l++;
        lmax=max(a[l],lmax);
        res+=lmax-a[l];
    }
    else
    {
        r--;
        rmax=max(rmax,a[r]);
        res+=rmax-a[r];
    }
   }
   return res;
}
int main ()
{
    int arr[]={0,3,3,1,3,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<TrapWater(arr,n);
}