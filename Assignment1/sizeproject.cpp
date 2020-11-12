#include<iostream>
using namespace std;
class Sizeproject
{
    int num;
    float fl;
    char ch;

public: void display1()

{
cout<<"Enter your Integer\n";
cin>>num;
cout<<"Size of int : " << sizeof(int) << endl;
}
    void display2()
    {
      cout<<"Enter your FloatNumber\n";
      cin>>fl;
      cout << "Size of float : " << sizeof(float) << endl;
    }
           void display3()
           {
            cout<<"Enter your Character\n";
            cin>>ch;
            cout << "Size of char : " << sizeof(char) << endl;
            }
};
int main()
{
Sizeproject d1;
d1.display1();


Sizeproject d2;
d2.display2();


Sizeproject d3;
d3.display3();
}

