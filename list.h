#include<iostream>
using namespace std;

class Node{
    int data;

    public:
    Node *next;

    int getData()
    {
        return data;
    }
    Node(int d) : data(d), next(NULL) {}
};

class List{
    
    Node *head;
    Node *tail;

    public:

    List() : head(NULL), tail(NULL){}

    Node* begin()
    {
        return head;
    }

    void push_front(int d)
    {
        if(head == NULL)
        {
            Node *n = new Node(d);
            head = tail = n;
        }
        else
        {
             Node *n = new Node(d);
             n->next = head;
             head = n;
        }
    }

    void push_back(int d)
    {
        if(head == NULL)
        {
            Node *n = new Node(d);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(d);
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data, int pos)
    {
        if(pos == 0)
        {
            push_front(data);
        }
        else
        {
            Node *n = new Node(data);
            Node *temp = head;
            int ct = 0;
            while(temp != NULL)
            {
                if(ct == pos)
                {
                    n->next = temp->next;
                    temp->next = n;
                }
                temp = temp->next;
                ct++;
            }
        }
    }

    bool search(int key)
    {
        Node *temp = head;
        while(temp != NULL)
        {
            if(temp->getData() == key)
            {
                return true;
            }
            else
            {
                temp = temp->next;
            }
        }
        return false;
    }

    void pop_front()
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void removeAt(int pos)
    {
        Node *temp = head;
        int ct = 0;
        while(temp != NULL)
        {
            if(ct == pos-1)
            {
                Node *n = temp->next;
                temp->next = n->next;
                n->next = NULL;
                delete n;
            }
            temp = temp->next;
            ct++;
        }
    }

    void pop_back()
    {
        Node *temp = head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        
        Node *n = temp->next;
        n->next = NULL;
        temp->next = NULL;
        delete n;

    }
};
