#include<iostream>
using namespace std;
class Sizeofdata
{

 int v, w, x, y, z ;
 int average =(v+w+x+y+z)/5;

 public: void avg()
 {


 cout<< "Please enter fifth number ";
 cin >> z;

 cout<< "The Average of the Five Numbers is:"<<average<<endl;
}

};
int main()
{
 Average a1;
 a1.avg();

}
