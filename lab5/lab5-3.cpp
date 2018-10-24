#include<iostream>
#include<string>

using namespace std;
int test ,n,m;
string S,P;
int count;
int nextList[1000000];

void mknext(){
    int i,j;
    nextList[0]=0;
    for (i=1,j=0;i<m;i++){
        while(j>0&&P[i]!=P[j])
            j=nextList[j-1];
        if(P[i]==P[j])
            j++;
        nextList[i]=j;
    }
}
int kmp(){
    mknext();
    count =0;
    int i;
    int j=0;//patterned
    for(i=0;i<n;i++){
        while(j>0&&S[i]!=P[j])
            j=nextList[j-1];
        if(S[i]==P[j]){
            j++;
        }
        if (j==m){
            count++;
            j=nextList[j-1];
        }

    }
    // cout<<count <<endl;
        
    return count ;
}

int main(){
    cin >> test;
    while(test--){
        cin >> n >> S >> m >> P;
        // mknext();
        cout << kmp()<<endl;

    }

}