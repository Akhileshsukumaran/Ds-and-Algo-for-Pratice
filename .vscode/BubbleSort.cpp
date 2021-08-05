#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
    int i,j;
            
    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<=n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, n);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}