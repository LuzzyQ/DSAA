#include<iostream>
#include<string>

using namespace std;
int test,m,n;
string str;
int nextList[100000/3];
void mknext(string key,int a){
    for (int i=1,j=0;i<a;i++){
        while(j>0&&key[i]!=key[j])
            j=nextList[j-1];
        if(key[i]==key[j])
            j++;
        nextList[i]=j;
    }
}
bool kmp(string mid,string key){
    int a=key.length();
    int len =mid.length();
    for(int i=0,j=0;i<len;i++){
        while(j>0&&mid[i]!=key[j])
            j=nextList[j-1];
        if(mid[i]==key[j])
            j++;
        if(j==a)
            return true;
    }
    return false;
}
int found(){
    m=n/3;
    for(int i=m;i>0;i--){
        string lft=str.substr(0,i);
        // cout<<lft<<" "<<str.substr(n-i,i)<<endl;
        if(lft==str.substr(n-i,i)){
            string mid=str.substr(i,n-2*m);
            mknext(lft,i);
            if(kmp(mid,lft))
                return i;
        }
    }
    return 0;
}

int main(){
    cin >> test;
    while(test--){
        cin >>n>>str;
        cout<<found()<<endl;
    }

}