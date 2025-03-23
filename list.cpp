#include<iostream>
#include<list>
using namespace std;
int main()
{
    // Creating a list
    list<int> l={1,2,3,4,5};

    //ptinting the list
    for(auto x:l)
    {
        cout<<x<<" ";
    }

    //printing it other way
    for (auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }

}
