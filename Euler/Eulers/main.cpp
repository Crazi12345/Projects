#include <iostream>

using namespace std;

int problem_1(){
  int num=0;
  for (int i=0;i<1000;i++){
      if(i%3==0||i%5==0){
          num=num+i;
        }
    }
  return num;
}

double problem_2_a(){
 // long double test = 218922995834555169026;
  long double temp;
  long double prev=1;
  long double num=2;
  for (int i=3; i<101;i++){
    temp=num;
    num=num+prev;
    prev=temp;
cout <<i<<" "<<num<<endl;
    }
  //cout<<test<<endl;
  return num;
}
int problem_2_b(){
  int temp;
  int prev=1;
  int num=2;
  int sum=0;
  while (num<4000000){
      temp=num;
      if(num%2==0){
          sum=sum+num;
        }
      num=num+prev;
      prev=temp;

    }
  return sum;
}

int problem_3_a(){
  int prim=0;
  bool isPrime = true;
  for(int i =2;i<10000;i++){
      isPrime=true;
      for (int j=2;j<i;j++){
          if(i%j==0){
              isPrime = false;
            }
        }

      if(isPrime==true){
          prim=i;

        }
    }
  return prim;
}

int problem_3_b(){
  int prim=0;
  int num=600851475143 ;
  bool isPrime = true;
  for(int i =2;i<10000;i++){
      isPrime=true;
      for (int j=2;j<i;j++){
          if(i%j==0){
              isPrime = false;
            }
        }

      if(isPrime==true){
prim=i;

        }
    }
  return 0;
}


int main()
{
  cout <<"Problem 1: " <<problem_1()<<endl;
  //cout<< problem_2_a()<<endl;
  cout << "Problem 2_b: "<<problem_2_b()<<endl;
  cout << "Problem 3_a: "<<problem_3_a()<<endl;
  cout << "Problem 3_b: "<<problem_3_b()<<endl;
  return 0;
}
