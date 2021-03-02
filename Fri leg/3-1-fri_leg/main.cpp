#include <iostream>


class ClassName
{

public:

  void print(std::string name){           // overload example
    std::cout << name << std::endl;
  }
  void print(int name){
    std::cout << name-1 << std::endl;
  }



  void loop(){
    for (int i =0; i<10; i++){
        std::cout<< i << std::endl;
      }
  }


                                        // reference example          keyword: pass-by-reference
  int increment(int& x){

    x++;
    return x;
  }

  int casting(char y){                       // Data type casting example
    int q = static_cast<int>(y);    //note: answer in ascii binary
        return q;

  }



private:
  std::string name;

};

int main()
{
  ClassName object;
  int  i = 0;
  std::cout <<"i: "<<i<< std::endl;
  object.increment(i);
  std::cout <<"i: "<<i<<std::endl;

  object.print("I AM VERY TIRED");
  object.print(4);
  object.loop();
  std::cout<<object.casting('9')<<std::endl;

  return 0;
}
