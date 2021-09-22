#include<iostream>
#include "list.h"
using namespace std;

int main()
{
    List l;
    l.push_back(1);
    l.push_front(0);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.insert(2,1);
    l.pop_front();
    l.pop_back();
    l.removeAt(3);
    Node* head = l.begin();
    while(head != NULL)
    {
        cout<<head->getData()<<"->";
        head = head->next;
    }
    if(l.search(0))
    {
        cout<<"\nElement found!"<<endl;
    }
    else
    {
        cout<<"\nElement not found!"<<endl;
    }

    return 0;
}

