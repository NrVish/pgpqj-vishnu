#include<iostream>
using namespace std;
class Ticket
{


long long n1;
string c1;

    public:void booking()
    {
      cout<<"Accept Passenger Mobile Number:\n";
      cin>>n1;

      cout<<"Accept Passenger Name:\n";
      cin>>c1;
    }

       void status()
        {
         cout<< "Verifying confirmed passenger list...Loading\n";
        }

            void print()
            {
             cout<< "The Ticket of Passenger "<<c1<<" MobileNo. "<<n1<<"  is Confirmed.\n";
             cout<<"ThankYou\n";
            }

};

int main()
{
 Ticket t1;
 t1.booking();
  t1.status();
   t1.print();
}




