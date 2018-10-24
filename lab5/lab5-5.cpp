#include<iostream>
#include<cstring>

using namespace std;
int test,n,m;
string S,T;
int nextList[100000];
int matches[100000];
void mknext(){
    // memset(nextList,0,100000);
    int i,j;
    nextList[0]=0;
    for(i=1, j=0;i<n-1;i++){
        while(j>0&&S[i]!=S[j])
            j=nextList[j-1];
        if(S[i]==S[j]){
            j++;
        }
        nextList[i]=j;
    }
    
}
int match(){
    matches[0]=0;
    for(int i=1,j=0;i<m;i++){
        while(j>0&&T[i]!=S[j])
            j=nextList[j-1];
        if(T[i]==S[j])
            j++;
        matches[i]=j;
        // cout << j<<" ";
        if(j==n-1)
            j=nextList[j-1];
        
    }
    return matches[m-1];
}
int main(){
    cin >> test;
    while(test--){
        cin >>n>>m>>S>>T;
        mknext();
        int num =match();
        // cout<<num;
        string s=S.substr(0,num);
        printf("%d %s\n",num,s.c_str());
        // if(num!=0){
        //     cout<<" "<<S.substr(0,num);
        // }
        // cout <<endl;
    }
}