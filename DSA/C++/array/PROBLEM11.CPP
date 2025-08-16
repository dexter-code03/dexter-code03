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
int MaxCircularSubarr(vector<int> &a,int n)
{
    int mini=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[mini])
        {
            mini=i;
        }
    }
    if(mini!=n-1)
    {
        reverse(a,0,mini);
        reverse(a,0,n-1);
    }
    int maxEnding=a[0];
    int res=a[0];
    for(int i=1;i<n;i++)
    {
        maxEnding=max(maxEnding+a[i],a[i]);
        res=max(res,maxEnding);
    }
    
    return res;
}
int main()
{
    vector<int> arr={20,28,2,6,18,12,-28,3,-3,-26,1,6,6,-27,-6,-7,28,-26,13,30,-5,-6};
    int n=arr.size();
    cout<<"\n"<<MaxCircularSubarr(arr,n);
}