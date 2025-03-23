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

}