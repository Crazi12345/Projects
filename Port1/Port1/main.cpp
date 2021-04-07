#include <iostream>
#include "prime_factor.h"
using namespace std;

int main()
{

 vector<int> vec {2,2,3,5};
 PrimeFactor pfv(vec);
 PrimeFactor pf(10);

 cout<<"Print methods:"<<endl;
 pfv.print();
 pf.print();

 cout <<"-----------------------------------"<<endl;
  cout<<"Addition:  "<<endl;
  pfv+2;
  pf+2;
   cout <<endl;
  pfv.add(10);
  pf.add(5);

 cout <<"-----------------------------------"<<endl;
 cout<<"Subtraction:  "<<endl;
 pfv-20;
 pf-9;
  cout <<endl;
 pfv.subtract(10);
 pf.subtract(5);

 cout <<"-----------------------------------"<<endl;
 cout<<"Division:  "<<endl;
 pfv/30;
 pf/5;
  cout <<endl;
 pfv.divide(45);
 pf.divide(7);

 cout <<"-----------------------------------"<<endl;
 cout<<"Multiplication:  "<<endl;
 pfv*25;
 pf*2;
  cout <<endl;
 pfv.multiply(45);
 pf.multiply(7);

 cout <<"-----------------------------------"<<endl;

 cout << "Custom isPrime method, for checking for prime numbers.\n"
         "should be private, but for showing purpose is public"<<endl;
 cout << pf.isPrime(9)<<endl<<endl<<endl;



  return 0;
}
