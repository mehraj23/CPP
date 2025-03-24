#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[]="Hello";
    //printing string before reversing it
    cout<<str<<endl;
    int i=0;
    int j=strlen(str)-1;
    while(i<j)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }

    //printing string after reversing it
    cout<<str<<endl;

}
