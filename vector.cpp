#include <iostream>
using namespace std;


class Vector{
    int *arr;
    int cs;
    int ms;

    public:

            Vector()
            {
                cs = 0;
                ms = 1;
                arr = new int [ms];
            }

            void push_back(int n)
            {
                if(cs == ms)
                {
                    int *oldArray = arr;
                    ms = 2*ms;
                    arr = new int[ms];

                    for(int i=0; i< cs; i++)
                    {
                        arr[i] = oldArray[i];
                    }

                    delete [] oldArray;

                }

                arr[cs] = n;
                cs++;
            }

            void pop_back()
            {
                if(cs >= 0)
                {
                    cs--;
                }
            }

           int front() const
           {
               return arr[0];
           }

           int back() const
           {
               return arr[cs-1];
           }

            int size() const
            {
                return cs;
            }

           int capacity() const
           {
               return ms;
           }

           int at(const int i) const
           {
               return arr[i];
           }

           int operator[] (const int i) const
           {
               return arr[i];
           }


};

//Adding const is a good pratice , as its not changing anything in the code.


int main() {
	// your code goes here
    Vector v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(32);
    v.push_back(50);
    cout<<v.front()<<endl;
    v.pop_back();
    cout<<v.back()<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(int i=0 ;i< v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
	return 0;
}