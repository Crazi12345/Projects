#include <iostream>



#include <bits/stdc++.h>
using namespace std;

// A sample function whose time taken to
// be measured
void fun()
{   bool isFound = false;
    int num = 0;
    int count=0;
    int temp=0;
    for (int i = 2; i<10; i++){
        isFound = false;

        for( int j = 2; j<i;j+=2){
           if(i%j==0){
               isFound = true;
                break;

           }
            temp = j;
        }
        cout << temp<<endl;
        if(isFound==false){
           count++;
           num = num+i;

        }
    }
     cout << count<< "SUM: "<<num<<endl;


}
int main()
{
    auto start = chrono::high_resolution_clock::now();

    // unsync the I/O of C and C++.
    ios_base::sync_with_stdio(false);

    fun();

    auto end = chrono::high_resolution_clock::now();

    // Calculating total time taken by the program.
    double time_taken =
      chrono::duration_cast<chrono::nanoseconds>(end - start).count();

    time_taken *= 1e-9;

    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}

