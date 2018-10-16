#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int test,s;
    cin >>test;
    while(test--){
        cin >>s;
        int num[s];
        for(int i=0;i<s;i++){
            cin >>num[i];
        }
        int great=num[0];
        int max=num[0]-num[1];
        for(int i=3;i<s;i++){
            if (num[i-1]>great)
                great=num[i-1];
            if(great-num[i]>max)
                max=great-num[i];
            // cout <<'\n';
        }
        cout <<max<<endl;

    }

}
