#include<iostream>
using namespace std;
class Example
{

    public:
    static int count;

    private:
    static int x;

    public:
    void setX(int a)
    {
        x=a;
    }

    void showX()
    {
        cout<<x<<endl;
    }

    private: 
    static int y;

    public:
    static void setY(int m)
    {
        y=m;
    }

    static void showY()
    {
        cout<<y<<endl;
    }
};

int Example::count=0;
int Example::x=0;
int Example::y=0;

int main()
{
    Example e1,e2,e3;
    e1.count++;
    cout<<e1.count<<endl;
    cout<<e2.count<<endl;
    cout<<e3.count<<endl;

    // accessing using classname
    Example::count++;
    cout<<e1.count<<endl;
    cout<<e2.count<<endl;
    cout<<e3.count<<endl;

    // accessing using object
    e1.setX(10);
    e1.showX();
    e2.showX();
    e3.showX();

    Example::setY(20);
    Example::showY();
    Example::showY();
    Example::showY();

    return 0;

}