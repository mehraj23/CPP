#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.capacity()<<endl;
    //cout<<v.size()<<endl;

    v.push_back(6);
    cout<<v.capacity()<<endl;
    //cout<<v.size()<<endl;

    v.pop_back();
    cout<<v.capacity()<<endl;
    //cout<<v.size()<<endl;

    v.push_back(7);
    cout<<v.capacity()<<endl;

    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
   
    return 0;
}