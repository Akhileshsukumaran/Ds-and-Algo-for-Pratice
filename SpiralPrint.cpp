#include<iostream>
#include<vector>
using namespace std;


void SpiralPrint(int spiral[][10], int n, int m)
{
    int startCol = 0;
    int endCol = m-1;
    int startRow = 0;
    int endRow = n-1;
    int test = 0;

    //outer loop to traverse array boundary

    while(startRow<=endRow && startCol <=endCol)
    {
        //start row
        for(int col=startRow; col<=endCol; col++)
        {
            cout<<spiral[startRow][col]<<" ";
        }
        
        //end col
        for(int row = startRow+1; row <= endRow; row++)
        {
             if(startRow==endRow)
            {
                break;
            }
            
            cout<<spiral[row][endCol]<<" ";
        }

        //end row

        for(int col = endCol-1; col >= startCol; col--)
        {
            cout<<spiral[endRow][col]<<" ";
        }

        //start col

        for(int row = endRow - 1; row >= startRow + 1; row--)
        {
            if(startCol==endCol)
            {
                break;
            }
            cout<<spiral[row][startCol]<<" ";
        }

        startCol++;
        endCol--;
        startRow++;
        endRow--;
    }
}


int main()
{
    int spiral[10][10];
    int n, m;
    cout<<"enter the row and column:";
    cin>>n>>m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>spiral[i][j];
        }
    }

    SpiralPrint(spiral, n, m);

}