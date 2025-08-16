#include<iostream>
#include <climits>
using namespace std;
int MaximumD(int a[],int n)
{
    int mini=INT_MAX;
    int maxD=0;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,a[i]);
        if(a[i]>=mini)
        {
            maxD=max(maxD,a[i]-mini);
        }
    }
    return maxD;
}
int main()
{
    int arr[]={-2,-3,-10,-6,-4,-8,-1};
    int n=7;
    cout<<MaximumD(arr,n);
}