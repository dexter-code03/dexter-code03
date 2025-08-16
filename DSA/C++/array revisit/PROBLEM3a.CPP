#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <pair<int,int>> arr={{1,9},{10,99},{100,999},{1000,9999}};
    pair <int,int> range = arr[n-1];
    long long sum = 0;
    for(int i = range.first; i <= range.second; i++)
    {
        int num = i;
        map<int, int> mpp;
        bool hasRepeat = false;
        while(num)
        {
            int digit = num % 10;
            mpp[digit]++;
            if(mpp[digit] > 1) {
                hasRepeat = true;
                break;
            }
            num = num / 10;
        }
        if(!hasRepeat) {
            sum += i;
        }
    }
    cout<<sum;
    return 0;
}