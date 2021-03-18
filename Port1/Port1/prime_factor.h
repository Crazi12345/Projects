#pragma once
#include <vector>

class PrimeFactor
{
public:
  PrimeFactor(int n);
  PrimeFactor(std::vector<int> primes);
  void print();
  bool isPrime(int num);
  PrimeFactor add(PrimeFactor n);
  PrimeFactor subtract(PrimeFactor n);
  PrimeFactor divide(PrimeFactor n);
  PrimeFactor multiply(PrimeFactor n);
  PrimeFactor operator+(PrimeFactor n);
    PrimeFactor operator-(PrimeFactor n);
      PrimeFactor operator/(PrimeFactor n);
        PrimeFactor operator*(PrimeFactor n);

private:
        std::vector<int> primeFactors;
};
