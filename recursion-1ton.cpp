#include<iostream>
using namespace std;

void Desc(int n)
{
    if(n == 0)
    {
        return;
    }
    cout<<n<<endl;
    Desc(n-1);
}

void Asc(int n)
{
    if(n == 0)
    {
        return;
    }
    Asc(n-1);
    cout<<n<<endl;
}

int main()
{
    int n;
    cout<<"enter the limit:";
    cin>>n;
    cout<<"Numbers till "<<n<<" in ascending order :"<<endl;
    Desc(n);

    cout<<"Numbers in Desc order :" <<endl;

    Asc(n);

    return 0;
}