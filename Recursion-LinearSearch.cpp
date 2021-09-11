#include<iostream>
using namespace std;


int FirstOccr(int arr[], int n, int key)
{
    if(n == 0)
    {
        return -1; //base case
    }

    if(arr[0] == key)
    {
        return 0;
    }

    int subIndex = FirstOccr(arr+1, n-1, key);

    if(subIndex != -1)
    {
        return subIndex + 1;
    }

    return -1;

}


/* Alternative solution

int Ls(int arr[], int n, int key)
{
    if(n == 0)
    {
        return -1;
    }

    if(arr[n] == key)
    {
        return n;
    }

    int k = Ls(arr, n-1, key);
    if(k != -1)
    {
        return k;
    }
    return -1;
}
*/

int LastOccr(int arr[], int n, int key)
{
    if(n == 0)
    {
        return -1;
    }

    int subIndex = LastOccr(arr+1, n-1, key);
    if(subIndex == -1)
    {
        if(arr[0] == key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return subIndex + 1;
    }
}

int main()
{
    int arr[] = {1, 3, 5, 7, 10, 4, 7, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key ;
    cout<<"enter the element to be searched: ";
    cin>>key;
    cout<<FirstOccr(arr, n-1, key)<<endl;

    cout<<LastOccr(arr, n-1, key)<<endl;

    return 0;
}

