#include<iostream>
using namespace std;
class Simpleinterest
{

 int p,i,t ;

 public: void simpinterest()
 {

 cout<< "Please enter Principle: ";
 cin >> p;

 cout<< "Please enter Rate of Interest ";
 cin >> i;

 cout<< "Please enter period ";
 cin >> t;

 cout<< " The Interest for the Amount "<<p<<" for "<<t<<" years @ "<<i<<" % is : "<<(p*i*t)/100<<endl;
}

};
int main()
{
 Simpleinterest s1;
 s1.simpinterest();

}
