#include<iostream>
#include<map>

using namespace std;

int main()
{
    //creating a map
    map<int, string> m;

    //inserting elements in map
    m[1]="Mehraj";
    m[2]="Fayaz";
    m[3]="Azaz";
    m[4]="Toufik";
    m[5]="Samrin";

    //printing map auto way
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    //inseting elements in map
    m.insert(pair<int,string>(6,"Saleha"));
    cout<<endl;
    //printing map using iterator
    map<int,string>::iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" " <<it->second<<endl;
    }

    //inseting another element in map
    m.insert(pair<int,string>(7,"Arshaan"));

    //printing map using iterator
    map<int,string>::iterator it1;

    for(it1=m.begin();it1!=m.end();it1++)
    {
        cout<<it1->first<<" " <<it1->second<<endl;
    }

}