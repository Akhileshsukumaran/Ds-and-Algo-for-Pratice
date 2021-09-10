#include<iostream>
using namespace std;

bool Desc(int n)
{
    cout<<n<<endl;

    if(n > 1 and Desc(n-1))
    {
        return true;
        
    }
    return false;
}

bool Asc(int n, int i)
{
    cout<<i<<endl;
    i++;
    if(n > 1 and Asc(n-1, i))
    {

    }
    return 1;
}

int main()
{
    int n;
    cout<<"enter the limit:";
    cin>>n;
    cout<<"Numbers till "<<n<<" in ascending order :"<<endl;
    bool a = Desc(n);

    cout<<"Numbers in Desc order :" <<endl;

    bool b = Asc(n, 1);

    return 0;
}