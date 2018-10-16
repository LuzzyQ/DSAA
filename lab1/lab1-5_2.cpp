#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int test,s;
    cin >>test;
    while(test--){
        cin>>s;
        int a[s];
        for (int i=0;i<s;i++){
            cin>>a[i];
        }
        int max=a[0]-a[1];
        for(int i=0;i<s-1;i++){

            for(int j=i+1;j<s;j++){
            
                if(a[i]-a[j]>max)
                    max=a[i]-a[j];
            }
        }
        cout <<max<<endl;

    }
    return 0;
}
