#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&a,int k,int n)
{
        int l=k;
        int p=n;
        while(l<p)
        {
            swap(a[l],a[p]);
            l++;
            p--;
        }
}
void reverseInGroups(vector<int>& arr, int n, int k)
{
    int l;
    int p;
    for(int i=0;i<n;i++)
    {
        l=i;
        if(i+(k-1)<n)
        {
            p=i+(k-1);
            i=i+(k-1);
        }
        else
        {
            p=n-1;
            i=n-1;
        }
        reverse(arr,l,p);
    }
}
int main()
{
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    int k=3;
    reverseInGroups(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
}