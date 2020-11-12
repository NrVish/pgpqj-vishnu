#include<iostream>
using namespace std;
class Multiplication
{
    int num1,num2,num3;

public: void mul()

{
cout<<"Enter your First Number\n";
cin>>num1;
cout<<"Enter your First Number\n";
cin>>num2;
cout<<"Enter your First Number\n";
cin>>num3;
cout<<"Your Result is:\n"<<num1*num2*num3<<endl;
}

};
int main()
{
Multiplication m1;
m1.mul();

}
