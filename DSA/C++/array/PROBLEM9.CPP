#include<bits/stdc++.h>
using namespace std;
int MaximumSumSubarray(int a[],int n)
{
    int psum=0;
    int sum=0;
    int num=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(psum+a[i]>0)
        {
            psum+=a[i];
        }
        else if (a[i]<=0)
        {
            num=max(num,a[i]);
        }
        else
        {
            sum=max(sum,psum);
            psum=0;
        }
    }
    sum = max(sum,psum);
    if(sum==0)
    {
        return num;
    }
    else
    {
        return sum;
    }
}
int main()
{
    int arr[]={0,-1,-6};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<MaximumSumSubarray(arr,n);
}