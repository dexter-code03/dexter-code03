#include<bits/stdc++.h>
using namespace std;
const int R = 4;
const int C = 4;
void print(int matrix[R][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        cout<<matrix[i][j]<<" ";
    }
}
void Rotate90(int matrix[R][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=i+1;j<C;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<R;i++)
    {
        int low=0,high=C-1;
        while(low<high)
        {
            swap(matrix[low][i],matrix[high][i]);
            high--;
            low++;
        }
    }  
    print(matrix);
}
int main()
{
    int matrix[R][C]= {{1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12},
                       {13,14,15,16}};
    Rotate90(matrix);
    return 0;
}