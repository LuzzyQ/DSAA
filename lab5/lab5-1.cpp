#include<iostream>
#include<cstring>
using namespace std;
int test,n,rhymes,mx;
char key=' ';
const int N=10^4;
string str; 

void ismax(){
    if(mx<rhymes)
        mx=rhymes;
}

void check(){
    int m;
    m=str.length()-1;
    if (rhymes==0){
        rhymes++;
        ismax();
        key=str[m];
    }
    else{
        if(str[m]==key){
            rhymes++;
            ismax();
        }
        else{
            rhymes=1;
            key=str[m];
        }
    }
}

int count(){
    cin >> n;
    rhymes=0;
    mx=0;
    for (int i=0;i<n;i++){
        cin >> str;
        check();
    }
    cout <<mx<<endl;
}

int main(int argc, char const *argv[])
{
    cin >> test;
    while(test--){
        count();
    }    
}
