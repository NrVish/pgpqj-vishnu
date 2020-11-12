#include<iostream>
using namespace std;
class Displayinteger
{
    int num;
    public: void inc()
{
cout<<"Enter your Number\n";
cin>>num;
cout<<"Your Number is:"<<num;
}

};
int main()
{
Displayinteger obj;
obj.inc();
}
