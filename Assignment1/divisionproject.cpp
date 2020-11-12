#include<iostream>
using namespace std;
class Division
{
    int dividend,divisor;

public: void div()

{
cout<<"Enter your Dividend\n";
cin>>dividend;
cout<<"Enter your Divisor\n";
cin>>divisor;
cout<<"Quotient is:\n"<<dividend/divisor<<endl;
cout<<"Remainder is:\n"<<dividend%divisor<<endl;
}

};
int main()
{
Division d1;
d1.div();

}
