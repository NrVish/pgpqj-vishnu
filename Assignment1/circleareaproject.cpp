#include<iostream>
using namespace std;
class Circlearea
{
    float radius;

public: void areacircle()

{
cout<<"Enter the Radius of Circle\n";
cin>>radius;

cout<<"Area of Circle is:\n"<<3.14*radius*radius<<endl;

}

};
int main()
{
Circlearea c1;
c1.areacircle();

}
