
#include <iostream>
#include <vector>
using namespace std;


void helper(vector<int> &help, vector <int> v, int k, int i)
{
    if(v.size() == i)
    {
        return;
    }
    
    if(v[i] == k)
    {
        help.push_back(i);
    }

    helper(help, v, k, i+1);

}


vector<int> findAllOccurences(int k, vector<int> v){
    
    vector <int> help;

    helper(help, v, k, 0);

    return help;
    
}


int main() {
    
    vector <int> v = {1,2,5,3,1,2,3,8,6,3,6,7,9};
    int k = 3;
    
    vector <int> it = findAllOccurences(k, v);

    for(auto i = it.begin(); i < it.end(); i++)
    {
        cout<<*i<<" ";
    }
    
	return 0;
}