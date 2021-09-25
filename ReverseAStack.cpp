#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int> &s, int temp)
{
    if(s.empty())
    {
        s.push(temp);
        return;
    }

    int t = s.top();
    s.pop();
    InsertAtBottom(s, temp);
    s.push(t);
}

void StackReverse(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }

    int temp = s.top();
    s.pop();
    StackReverse(s);
    InsertAtBottom(s, temp);
}

int main()
{
    stack<int> numbers;
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    numbers.push(4);
    numbers.push(5);

    StackReverse(numbers);
    while(!numbers.empty())
    {
        cout<<numbers.top()<<endl;
        numbers.pop();
    }
}