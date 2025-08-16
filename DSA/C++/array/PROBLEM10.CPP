#include<bits/stdc++.h>
using namespace std;
int MaxLenEvOdSubAr(int a[],int n)
{
    int pcount=1;
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]%2==0)
        {
            if(a[i]%2!=0)
            {
                pcount++;
            }
            else
            {
                count = max(count , pcount);
                pcount=1;
            }
        }
        else
        {
            if(a[i]%2==0)
            {
                pcount++;
            }
            else
            {
                count = max(count , pcount);
                pcount = 1;
            }
        }
    }
    count = max(count,pcount);
    return count;
}
int main()
{
    int arr[]={10,12,8,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<MaxLenEvOdSubAr(arr,n);
}