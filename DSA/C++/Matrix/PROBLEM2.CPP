#include<bits/stdc++.h>
using namespace std;
const int R = 4;
const int C = 4;
void btraversal(int matrix[R][C])
{
    if(R==1)
    {
        for(int i=0;i<C;i++)
        {
            cout<<matrix[0][i]<<" ";
        }
    }
    else if(C==1)
    {
        for(int i=0;i<R;i++)
        {
            cout<<matrix[i][0]<<" ";
        }
    }
    else
    {
        for(int i=0;i<C;i++)
        {
            cout<<matrix[0][i]<<" ";
        }
        for(int i=1;i<R;i++)
        {
            cout<<matrix[i][C-1]<<" ";
        }
        for(int i=C-2;i>=0;i--)
        {
            cout<<matrix[R-1][i]<<" ";
        }
        for(int i=R-2;i>0;i--)
        {
            cout<<matrix[i][0]<<" ";
        }
        
    }
}
int main()
{
    int matrix[R][C]= {{1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12},
                       {13,14,15,16}};
    btraversal(matrix);
    return 0;
}