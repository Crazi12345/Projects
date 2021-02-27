#include <iostream>


class ClassName
{

public:
  void print(std::string name){
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
  int increment(int& x){

    x++;
    return x;
  }

private:
  std::string name;

};

int main()
{
  ClassName object;
  int  i= 0;
  std::cout <<"i: "<<i<< std::endl;
  object.print("I AM VERY TIRED");
  object.print(4);
  object.loop();
  object.increment(i);
  std::cout <<"i: "<<i<<std::endl;

  return 0;
}
