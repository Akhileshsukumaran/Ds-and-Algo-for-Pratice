#include<iostream>
using namespace std;

bool sortCheck(int arr[], int n)
{
    int temp;

    if(n == 1 || n == 0)
    {
        return true;
    }
    
    if(arr[0] < arr[1] and sortCheck(arr+1, n-1))
    {
        return true;
    }
    return false;
}

int main()    
{
    int arr[10];
    int n;
    cout<<"enter the size: ";
    cin>>n;
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<sortCheck(arr, n)<<endl;

}