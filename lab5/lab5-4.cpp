#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;
int test,m,n;
char str[100000];
int count;
int nextList[100000];
void mknext(string key,int a){
    for (int i=1,j=0;i<a;i++){
        while(j>0&&key[i]!=key[j])
            j=nextList[j-1];
        if(key[i]==key[j])
            j++;
        nextList[i]=j;
    }
}
bool kmp(int a){
    count=0;
    bool flag=false;
    for(int i=a,j=0;i<n-a;i++){
        while(j>0&&str[i]!=str[j])
            j=nextList[j-1];
        if(str[i]==str[j])
            j++;
        if(j==a){
            return true;
        }
            
    }
    return false;
}
int found(){
    m=n/3;
    for(int i=m;i>0;i--){
        // cout << str.substr(0,i)<< " "<<str.substr(n-i,i) <<endl;
        if(memcmp(str,str+n-i,i)==0){
            if(kmp(i)){
                
                    return i;
            }
        }
    }
    return 0;
}

int main(){
    cin >> test;
    while(test--){
        // cin >>n>>str;
        scanf("%d",&n);
        scanf("%s",&str[0]);
        mknext(str,n);
        // cout<<found()<<endl;
        printf("%d\n",found());
    }

}