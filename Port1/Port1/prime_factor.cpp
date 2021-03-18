#include "prime_factor.h"
#include <iostream>
#include <vector>
using namespace std;

PrimeFactor::PrimeFactor(int n)
{
  for(int i=2;i<100000;i++){
      if(isPrime(n)){
          primeFactors.push_back(n);
          if(primeFactors.size()==1){
            //  cout << "THIS SHIT IS ALREADY A FUCKING PRIME NUMBER"<<endl;
            }
        // cout << n <<endl;
          break;
        }
      if(isPrime(i)==true){

          if(n%i==0){
              n=n/i;
              // cout <<i<<endl;
               primeFactors.push_back(i);
              i--;

            }

        }
    }
}
PrimeFactor::PrimeFactor(std::vector<int> primes){
  for(int i=0;i<primes.size();i++){
      primeFactors.push_back(primes.at(i));
    }
}
bool PrimeFactor::isPrime(int num){
  bool isPrime=true;
          for(int i=2; i<num;i++){
             if(num%i==0){
                 isPrime=false;
               }
  }
  return isPrime;
}


void PrimeFactor::print(){
  for(int i = 0;i<primeFactors.size();i++){
      cout<<primeFactors.at(i)<<endl;
    }

}


PrimeFactor PrimeFactor::add(PrimeFactor n){
  int pf1=1;
  int pf2=1;
  for(int i =0;i<n.primeFactors.size();i++){
      pf1=pf1*n.primeFactors.at(i);
       //  cout <<"pf1: "<<pf1<<endl;
    }
  for(int j =0;j<primeFactors.size();j++){
        pf2=pf2*primeFactors.at(j);
        // cout <<"pf2: "<<pf2<<endl;
      }
 // cout <<pf1+pf2<<endl<<endl;
  PrimeFactor pfa(pf1+pf2);
  pfa.print();
  return pfa;
}





PrimeFactor PrimeFactor::subtract(PrimeFactor n){
  int pf1=1;
  int pf2=1;
  for(int i =0;i<n.primeFactors.size();i++){
      pf1=pf1*n.primeFactors.at(i);
  }
  for(int j =0;j<primeFactors.size();j++){
        pf2=pf2*primeFactors.at(j);
      }

  PrimeFactor pfs(pf1-pf2);
  pfs.print();
  return pfs;
}

PrimeFactor PrimeFactor::divide(PrimeFactor n){
vector<int> temp(primeFactors);
  for(int i = 0;i<temp.size();i++){

      for (int j =0;j<n.primeFactors.size();j++){
           if(temp.at(i)==n.primeFactors.at(j)){

                temp.erase(temp.begin()+i);
           }
      }
}
PrimeFactor newtemp(temp);
  newtemp.print();
 return newtemp;

}


PrimeFactor PrimeFactor::multiply(PrimeFactor n){

    for (int i=0;i<n.primeFactors.size();i++){
        primeFactors.push_back(n.primeFactors.at(i));
    }
    print();
    return primeFactors;
}

PrimeFactor PrimeFactor::operator *(PrimeFactor n){
    return
            multiply(n);
}
PrimeFactor PrimeFactor::operator +(PrimeFactor n){
     return add(n);
}
PrimeFactor PrimeFactor::operator -(PrimeFactor n){
    return  subtract(n);
}
PrimeFactor PrimeFactor::operator /(PrimeFactor n){
    return  divide(n);
}
