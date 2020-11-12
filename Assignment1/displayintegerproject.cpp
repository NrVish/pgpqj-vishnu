#include<iostream>
using namespace std;
class Datatypes
{
    int num;
    float fl;
    char ch;
public: void display1()

{
cout<<"Enter your Integer\n";
cin>>num;
cout<<"Your Number is:\n"<<num<<endl;
}
    void display2()
    {
      cout<<"Enter your FloatNumber\n";
      cin>>fl;
      cout<<"Your FloatNumber is:\n"<<fl<<endl;
    }
           void display3()
           {
            cout<<"Enter your Character\n";
            cin>>ch;
            cout<<"Your Character is:\n"<<ch<<endl;
            }
};
int main()
{
Datatypes d1;
d1.display1();


Datatypes d2;
d2.display2();


Datatypes d3;
d3.display3();
}
