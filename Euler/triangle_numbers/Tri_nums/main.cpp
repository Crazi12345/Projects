#include <iostream>
#include <vector>

using namespace std;

int main()
{
int sum =1;
int dive =0;
vector<int> nums;
  int num[100][500];
  num[0][0] = 1;
  for(int i = 0; i<10;i++){
    for(int j = 0; j<i+1;j++){
       num[i+1][j]=num[i][0];
       cout << num[i][j]<< " ";
    }

cout <<endl;
  }
       cout << endl;
        nums.clear();
       // cout << whole_sum<<endl;


    return 0;
}
