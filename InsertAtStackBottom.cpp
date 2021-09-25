#include <iostream>
#include <stack>
#include <string>
using namespace std;


void InsertAtBottom(stack<string> &s, string data)
{
    if(s.empty())
    {
        s.push(data);
        return;
    }

    string temp = s.top();
    s.pop();
    InsertAtBottom(s, data);
    s.push(temp);
}

int main() {
	// your code goes here
    stack<string> books;
    books.push("c++");
    books.push("java");
    books.push("python");
    books.push("c");
    string data;
    cout<<"enter the string to be inserted at the bottom of the stack:";
    cin>>data;
    InsertAtBottom(books, data);
    while(!books.empty())
    {
        cout<<books.top()<<endl;
        books.pop();
    }
	return 0;
}

