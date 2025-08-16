#include<bits/stdc++.h>
using namespace std;
bool equipoint(int a[],int n)
{
    int psum=0;
    int sfsum=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        
    }
    for(int i=0;i<n;i++)
    {
        sfsum=sum-(psum+a[i]);
        if(psum==sfsum)
        {
            cout<<a[i]<<"\n";
            return true;
        }
        psum+=a[i];
    }
    return false;
}
int main()
{
    int arr[]={4,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<equipoint(arr,n);
}