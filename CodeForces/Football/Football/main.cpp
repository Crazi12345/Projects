#include <iostream>
using namespace std;

int main()
{
  string num;
  cin >> num;
  int count_one = 0;
  int count_zero = 0;

  for(int i = 0;i< num.length();i++){
      num[i] == '1' ? count_one++: count_one = 0;
      num[i] == '0' ?  count_zero++:count_zero = 0;
    }

  if(count_zero >= 7 || count_one >= 7){
      cout << "YES"<<endl;
    }
  else {
     cout << "NO"<<endl;
    }
  return 0;
}
