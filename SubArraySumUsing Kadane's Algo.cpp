#include<bits/stdc++.h>

using namespace std;

void GreatestSubArraySum(int arr[], int n)
{
    int Csum = 0;
    int Tsum = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            Csum = 0;
        }
        else
        {
            Csum = Csum + arr[i];
        }
        
        Tsum = max(Tsum,Csum);
    }

    cout<<"The Max sum of sub array is :"<<Tsum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    GreatestSubArraySum(arr,n);
    return 0;
}