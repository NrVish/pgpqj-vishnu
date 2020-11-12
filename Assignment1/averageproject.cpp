#include<iostream>
using namespace std;
class Average
{

 int n1, n2, n3, n4, n5 ;


 public: void avg()
 {


 cout<< "Please enter first number: ";
 cin >> n1;

  cout<< "Please enter second number: ";
  cin >> n2;

   cout<< "Please enter third number: ";
   cin >> n3;

    cout<< "Please enter fourth number: ";
    cin >> n4;

     cout<< "Please enter fifth number: ";
     cin >> n5;

 float average =(n1+n2+n3+n4+n5)/5;

 cout<< "The Average of the Five Numbers is:"<<average<<endl;
}

};
int main()
{
 Average a1;
 a1.avg();

}
