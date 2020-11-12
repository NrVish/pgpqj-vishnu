#include<iostream>
using namespace std;
class MultiplicationFloat
{
    float fl1,fl2;

public: void mul()

{
cout<<"Enter your First Number\n";
cin>>fl1;
cout<<"Enter your Second Number\n";
cin>>fl2;
cout<<"Your Result is:\n"<<fl1*fl2<<endl;
}

};
int main()
{
MultiplicationFloat m1;
m1.mul();

}
