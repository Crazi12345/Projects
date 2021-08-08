#include <iostream>

using namespace std;

int even(unsigned int &num){
    num = num/2;
    return num;
}
int odd(unsigned int &num){
    num = 3*num+1;
    return num;
}
int main()
{
    unsigned int num = 0;
    unsigned int higestNum=0;
    unsigned int count =0;
    unsigned int highNum;
    int loading = 0;
    int loadingCount=0;
    for(unsigned int i = 1; i<1000000;i++){
        num =i;
        loading++;
        if(loading==1000){
            loadingCount++;
            cout << "("<< loadingCount<<"/1000)!"<<endl;
            loading = 0;
        }
     count =0;
    while (num!=1){
     num%2==0 ? even(num) :odd(num);
    //loadingCount >112?cout << num <<endl:cout<<"";
     count++;
     count > higestNum ? highNum = i : higestNum = higestNum;
     count > higestNum ? higestNum = count : higestNum = higestNum;
    }
    }
    cout << "highest count: "<<higestNum<< endl;
    cout << "the number: "<<highNum << endl;

    return 0;
}
