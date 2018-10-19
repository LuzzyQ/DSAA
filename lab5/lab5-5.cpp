#include<iostream>
#include<string>

using namespace std;
int test,n,m;
string S,T;
int nextList[100000];
int mknext(){
    int i,j;
    nextList[0]=0;
    for(i=1, j=0;i<m;i++){
        while(j>0&&T[i]!=S[j])
            j=nextList[j-1];
        if(T[i]==S[j]){
            j++;
        }
        if(j==n)
            return n;
        nextList[i]=j;
    }
    return nextList[m-1];
}
int main(){
    cin >> test;
    while(test--){
        cin >>n>>m>>S>>T;
        int num = mknext();
        // string s=S.substr(0,num);
        cout <<num;
        if(num!=0)
            cout<<" "<<S.substr(0,num); 
        cout<<endl;
        // printf("%d %s",num,s.c_str());
    }
}