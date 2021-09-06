#include <iostream>
using namespace std;



int ** DynamicTowD(int row, int col)
{
    int ** arr = new int * [row];
    int key = 0;
    for(int i=0; i< row; i++)
    {
        arr[i] = new int [col];
    }

    for(int i=0; i< row; i++)
    {
        for(int j=0; j< col; j++)
        {
            arr[i][j] = key;
            key++;
        }
    }

    return arr;
}



int main() {
	// your code goes here
    int n = 3;
    int m = 3;

    int ** arrs = DynamicTowD(n, m);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j < m; j++)
        {
            cout<<arrs[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}

