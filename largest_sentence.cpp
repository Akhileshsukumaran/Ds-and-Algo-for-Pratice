#include<iostream>

using namespace std;

int main()
{
    int limit;
    char sentence[100];
    char largest_sentence[100];
    int count = 0;

    cin>>limit;
    cin.get();


    while (limit--)
    {
        cin.getline(sentence, 100);
        int len = strlen(sentence);
        if (len > count)
        {
            count = len;
            strcpy(largest_sentence, sentence);
        }
        
    }

    cout<<"The largest sentence is:" << largest_sentence << "and the length is :" << count;

    return 0;
    
}