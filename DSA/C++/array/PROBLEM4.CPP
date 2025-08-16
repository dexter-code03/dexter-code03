#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n)
{
    int Acount=0;
    int Dcount=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            Dcount++;
        }
        else
        {
            Acount++;
        }
    }
    if(Acount==1&&Dcount!=0||Dcount==1&&Acount!=0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<check(arr,n);
}