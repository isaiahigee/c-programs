#include<iostream>
using namespace std;
class sample
{
    public:
           int a,b,c;
           void getdata();
           void putdata();
};
void sample::getdata()
{
    cout<<"Enter the values for a and b";
    cin>>a>>b;
}

void sample::putdata()
{
    cout<<"The values of a & b is"<<a<<"\t"<<b;
    
}

int main()
{
    sample s1,s2,s3;
    s1.getdata();
    s1.putdata();
    s2.getdata();
    s2.putdata();
    s3.getdata();
    s3.putdata();
    return 0;
}    