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
  //PrimeFactor pfv(vec);


  //cout <<pf.isPrime(606)<<endl;
 // pf.print();
  //pfv.print();
 // pf.add(10);
 //
 // pf.subtract(10);
  pf.divide(15);
  return 0;
}
