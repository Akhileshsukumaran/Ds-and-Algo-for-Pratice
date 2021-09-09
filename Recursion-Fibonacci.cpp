#include<iostream>
using namespace std;


int fibo(int limit)
{
    int a = 0, b = 1;
    int sum = 1;

    if(limit == 0 || limit == 1)
    {
        return limit;
    }
    else
    {
        return fibo(limit-1) + fibo(limit-2);
    }
}


int main()
{
    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;
    int res = fibo(limit);
    cout<<res<<endl;
    return 0;
}