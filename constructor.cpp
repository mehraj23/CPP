#include<iostream>

class Sample
{
    public:

    //non-parameterized constructor
    Sample()
    {
        std::cout<<"Constructor called"<<std::endl;
    }

    // parametrized construtor
    Sample(int x)
    {
        std::cout<<"Constructor called with value "<<x<<std::endl;
    }
};

int main()
{
    Sample s1,s2,s3;
    Sample s4(10);
    return 0;
}
