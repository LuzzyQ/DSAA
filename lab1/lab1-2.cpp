#include<iostream>
using namespace std;
int Hanoi( int num){
    unsigned int sum;
    if(num ==1)
        return 2;
    else{
        sum=(3*Hanoi(num-1)+2);
        return  sum % 1000000007;
    }
}
int main()
{
    int test,sum,initial;
    cin >> test;
    for(int i=0;i< test;i++){
        cin >> initial;
        cout << Hanoi(initial)<<"\n";
    }
    return 0;
}
