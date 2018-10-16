#include<iostream>
#include<algorithm>
using namespace std;

bool judge(int a,int b,int c,int m,int n){
    if((2*a+2*b<=m&&2*b+c<=n)||(2*a+2*b<=n&&2*b+c<=m))
        return true;
    if((2*a+2*b<=m&&2*a+c<=n)||(2*a+2*b<=n&&2*a+c<=m))
        return true;
    if((2*a+b+c<=m&&a+b+c<=n)||(2*a+b+c<=n&&a+b+c<=m))   
        return true;
    if((2*a+b+c<=m&&2*b+c<=n)||(2*a+b+c<=n&&a+b+c<=m))
        return true;
    if((3*a+b+c<=m&&b+c<=n)||(3*a+b+c<=n&&b+c<=m))
        return true;
    return false;
}
int main(){
    int test,m,n,a,b,c,temp;
    cin >>test;
    while(test--){
        cin >> a >> b >> c;
        cin >> m >> n;

        if(judge(a,b,c,m,n)||judge(a,c,b,m,n)||judge(b,a,c,m,n)||judge(b,c,a,m,n)||judge(c,b,a,m,n)||judge(c,a,b,m,n))
            cout <<"Yes\n";
        else
            cout <<"No\n";
    }

}