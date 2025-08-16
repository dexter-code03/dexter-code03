#include<bits/stdc++.h>
using namespace std;
int psum[100];
int pwsum[100];
int getsum(int s,int e)
{
    return (pwsum[e]-(s-1)*psum[e]);
}
void PWSUM(int a[],int n)
{
    pwsum[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pwsum[i]=pwsum[i-1]+a[i]*i;
    }
}
void PSum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        psum[i]=sum;
    }
}
int main()
{
    int arr[]={2,3,5,4,6,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    PSum(arr,n);
    PWSUM(arr,n);
    cout<<getsum(0,2);
}