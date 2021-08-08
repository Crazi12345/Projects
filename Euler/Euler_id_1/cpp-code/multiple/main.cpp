#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for(int i = 1; i < 1000;i++){
        i%3==0||i%5==0 ? sum += i : sum = sum;
    }
    cout << sum;
    return 0;
}
