#include<iostream>
using namespace std;

void ReverseWavePrint(int wave[][10], int n, int m)
{
    int endCol = m-1;
    int startRow = 0;
    int endRow = n-1;
    int k = 0;
    while(endCol >= 0)
    {
    
        for(int row = startRow; row <= endRow; row++)
        {
            cout<<wave[row][endCol]<<" ";
        }

        if(endCol != 0)
        {
            for(int row = endRow; row >= startRow; row--)
            {
                cout<<wave[row][endCol-1]<<" ";
            }
        }
        
        endCol = endCol-2;

    }
}

int main()
{
    int wave[10][10];
    int n, m;

    cout<<"enter row and column:";
    cin>>n>>m;

    cout<<"enter array elements:";
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin>>wave[i][j];
        }
    }

    ReverseWavePrint(wave, n, m);

    return 0;

}