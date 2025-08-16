#include<bits/stdc++.h>
using namespace std;

int Sec_max(int arr[],int n)
{
    int max1=0;
    int max2=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[max1])
        {
            max2=max1;
            max1=i;   
        }
        else if(arr[i] > arr[max2] && arr[i] < arr[max1] )
        {
            max2=i;
        }
    }
    return max2;
}

int main()
{
    int arr[]={5,20,12,20,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Sec_max(arr,n);
}