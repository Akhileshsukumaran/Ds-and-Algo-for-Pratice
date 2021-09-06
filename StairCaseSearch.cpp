#include<iostream>
using namespace std;


pair<int, int> StairCaseSearch(int stair[][10], int n, int m, int key)
{
    if(key < stair[0][0] or key > stair[n-1][m-1]){
        return {-1,-1};
    }

    int i = 0;
    int j = m-1;

    while(i <= n-1 and j >= 0)
    {
        if(stair[i][j] == key)
        {
            return {i,j};
        }
        else if(stair[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return {-1,-1};

}

int main()
{
    int stair[10][10];
    int n, m, key;

    cout<<"enter row and columns:";
    cin>>n>>m;

    cout<<"enter array elements:";
    for(int i=0; i< n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>stair[i][j];
        }
    }

    cout<<"enter the key for search:";
    cin>>key;

    pair <int,int> stairs = StairCaseSearch(stair, n, m, key);

    cout<<stairs.first<<" "<<stairs.second<<endl;

    return 0;
}