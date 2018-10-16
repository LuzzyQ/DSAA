#include<iostream>
#include<cstring>

using namespace std;
int test,count;
string str;
string key="lanran";
bool check(){
    str="";
    cin>>str;
    count =0;
    for(int i=0;i<str.length();i++){
        if (str[i]==key[count])
            count++;
        if (count==6)
            return true;
    }
    return false;
}
int main(){
    scanf("%d",&test);
    while(test--){
        if(check())
            printf("YES\n");
        else
            printf("NO\n");
    }

}