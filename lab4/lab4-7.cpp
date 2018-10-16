#include<iostream>
#include<string>
using namespace std;
int test,n,flag,b,u,mx,mn;
int stack[10000],under[10000],up[10000];
string opr;
bool check_under(int a ){
    if(a<under[b-1])
        return true;
    return false;
}
bool check_up(int a ){
    if(a>up[u-1])
        return true;
    return false;
}
bool isempty(){
    return flag==0;
}
void oprate(){
    if(opr=="push"){
        int tmp;
        cin>>tmp;
        if(check_up(tmp)){
            up[u]=tmp;
            u++;
        }
        if(check_under(tmp)){
            under[b]=tmp;
            b++;
        }
        stack[flag]=tmp;
    }else if(opr=="pop"){
        
        flag--;
        if(stack[flag]==up[u-1])
            u--;
        if(stack[flag]==under[b-1])
            b--;
        if(isempty())
            cout<<0<<" ";
        else   
            cout<<up[u-1]-under[b-1]<<" ";
    }
}
int main(){
    cin >> test;
    while(test--){
        cin>>n;
        
        flag=0;b=1;u=1;
        under[0]=2^32-1;
        up[0]=-2^32;
        for(int i=0;i<n;i++){
            cin>>opr;
            oprate();
        }
        cout<<endl;
    }

}