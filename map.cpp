#include<iostream>
#include<map>

using namespace std;

int main()
{
    //creating a map
    map<int, string> m;

    //inserting elements in map
    m[1]="A";
    m[2]="B";
    m[3]="C";
    m[4]="D";
    m[5]="E";

    //printing map auto way
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    //inseting elements in map
    m.insert(pair<int,string>(6,"F"));
    cout<<endl;
    //printing map using iterator
    map<int,string>::iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" " <<it->second<<endl;
    }

    //inseting another element in map
    m.insert(pair<int,string>(7,"G"));

    
    //printing size of map
    cout<<m.size()<<endl;

    //adding element using key
    m[8]="H";
    
    
    //printing map using iterator
    map<int,string>::iterator it1;

    for(it1=m.begin();it1!=m.end();it1++)
    {
        cout<<it1->first<<" " <<it1->second<<endl;
    }

    //removing element from map
    m.erase(8);

    //printing map using iterator
    map<int,string>::iterator it2;
    for(it2=m.begin();it2!=m.end();it2++)
    {
        cout<<it2->first<<" " <<it2->second<<endl;
    }

}