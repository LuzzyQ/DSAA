#include<iostream>
#include<string>
using namespace std;
void winner(int m,int n){
    if(m==n&&n==1)
        cout << "Bob\n";
    else 
        cout << "Alice\n";
}

int main(){
    int test,m,n;
    
    cin >> test;
    while(test--){
        cin >> m >> n;
        winner(m,n);
    }
}