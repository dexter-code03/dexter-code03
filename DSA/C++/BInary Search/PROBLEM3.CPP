#include<bits/stdc++.h>
using namespace std;
int First(int a[],int n,int x)
{
    int mid;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==x)
        {
          if(a[low]==x)
          {
            if(a[low-1]!=x||low==0)
            {
                if(a[high==x])
                {
                    if(a[high+1]!=x||high==n-1)
                    {
                        return high-low+1;
                    }
                    else
                    {
                        high++;
                    }
                }
                else
                {
                    high--;
                }
            }
            else
            {
                low--;
            }
          }
          else
          {
            low++;
          }
        }
        else if(a[mid]>x)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={10,20,30,30,30,40,50,60,70,70,70,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<First(arr,n,30);
}   