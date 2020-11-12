#include<iostream>
using namespace std;
class Areasquare
{
    int squareside;

public: void sqside()

{
cout<<"Enter the side of square\n";
cin>>squareside;

cout<<"Area of Square is:\n"<<squareside*squareside<<endl;

}

};
int main()
{
Areasquare s1;
s1.sqside();

}
