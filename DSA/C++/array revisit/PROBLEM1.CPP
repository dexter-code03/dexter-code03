#include<bits/stdc++.h>
using namespace std;
Max_num(int arr[],int n)
{
    int max=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[]={40,8,50,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<Max_num(arr,n);
}