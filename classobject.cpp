#include<iostream>
using namespace std;
class Sample{

    int x;
    int y;
public:
    void setData(int a, int b)
    {
        x=a;
        y=b;
    }
    void showData()
    {
        cout<<"x="<<x<<" y="<<y<<endl;
    }

};

int main()
{
    Sample s;
    //printing size of empty class
    //std::cout<<sizeof(s)<<std::endl;
    //setting data in object
    s.setData(3,5);
    //printing data in object
    s.showData();
    return 0;
}