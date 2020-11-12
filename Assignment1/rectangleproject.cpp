#include<iostream>
using namespace std;
class Rectangle
{
    int length, width ;

public: void arearectangle()

{
cout<<"Enter the length of rectangle\n";
cin>>length;

cout<<"Enter the width of rectangle\n";
cin>>width;

cout<<"Area of Rectangle is:\n"<<length*width<<endl;
cout<<"Perimeter of Rectangle is:\n"<<2*(length+width)<<endl;

}

};
int main()
{
Rectangle r1;
r1.arearectangle();

}
