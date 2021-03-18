#include <iostream>
#include "prime_factor.h"
using namespace std;

int main()
{
 PrimeFactor pf(60);
  vector<int> vec;
  vec.push_back(2);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(5);

  cout<<"Addition:  "<<endl;
  pf+5;
  cout <<"-----------------------"<<endl;
  pf.add(5);
  cout<<"/////////////////////////////////"<<endl;
  pf-5;
  pf/5;
  pf*5;



  PrimeFactor pfv(vec);


  return 0;
}
