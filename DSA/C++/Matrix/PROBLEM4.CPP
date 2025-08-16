#include<bits/stdc++.h>
using namespace std;
const int R = 3;
const int C = 4;
void SpiralTrav(int matrix[R][C])
{
    int p=R;
    int q=C;
    int startR=0;
    int startC=0;
    int endR=R;
    int endC=C;
    while(endR!=0&&endC!=0)
    {
        if(endR==1)
        {
            for(int i=startC;i<q;i++)
            {
                cout<<matrix[startR][i]<<" ";
            }
            endR--;
        }
        else if(endC==1)
        {
            for(int i=startR;i<p;i++)
            {
                cout<<matrix[i][startC]<<" ";
            }
            endC--;
        }
        else
        {
            for(int i=startC;i<q;i++)
            {
                cout<<matrix[startR][i]<<" ";
            }
            for(int i=startR+1;i<p;i++)
            {
                cout<<matrix[i][q-1]<<" ";
            }
            for(int i=q-2;i>=startC;i--)
            {
                cout<<matrix[p-1][i]<<" ";
            }
            for(int i=p-2;i>startR;i--)
            {
                cout<<matrix[i][0]<<" ";
            }
            p-=1;
            q-=1;
            endR-=2;
            endC-=2;
            if(endR!=0&&endC!=0)
            {
                startR++;
                startC++;
            }
        }
    }
}
int main()
{
    int matrix[R][C]= {{1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12}};
    SpiralTrav(matrix);
    return 0;
}