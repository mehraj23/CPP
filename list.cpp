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

    // adding an element to the list
    l.push_back(6);

    //printing it other way
    for (auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }

    // printing using iterator
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }

    //popping element from list
    l.pop_back();

    list<int>::iterator it1;
    for(it1=l.begin();it1!=l.end();it1++)
    {
        cout<<*it1<<" ";
    }

    //printing size of list
    cout<<l.size()<<endl;

    //printing capacity of list
    cout<<l.max_size()<<endl;

    return 0;

}
