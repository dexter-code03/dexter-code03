#include<bits/stdc++.h>
using namespace std;
int MaxSumK(int a[],int n,int m)
{
    int sum=0;
    int MSum=0;
    int k=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        k++;
        if(k==m)
        {
            MSum=max(MSum,sum);
            sum=sum-a[i-(m-1)];
            k--;
        }
    }
    return MSum;
}

int main()
{
    int arr[]={5,-10,6,90,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;

    cout<<MaxSumK(arr,n,k);
}