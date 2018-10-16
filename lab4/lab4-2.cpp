#include<iostream>
#include<cstring>

using namespace std;
int test,num,flag1;
char l[30000],str[30000];
//left or right
bool side(char a){
    if(a=='('||a=='['||a=='{') 
        return true;
    return false;
}
//use array as stack ,check whether paired 
bool stack_check(int num){
    char tmp;
    flag1=0;
    for(int i=0;i<num;i++){
        tmp=str[i];
        // cout << tmp<<" ";
        if(side(tmp)){
            l[flag1]=tmp;
            flag1++;
        }else{
            // cout<<tmp-l[flag1]<<endl;
            if(flag1==0)
                return false;
            if(tmp-l[flag1-1]==1||tmp-l[flag1-1]==2){
                flag1--;
            }else
                return false;
        }
    }
    if (flag1==0)
        return true;
    else
        return false;
}

bool check(){
    scanf("%d",&num);
    // cout <<num<<endl;
    // if(num%2==1)
    //     return false;  
        scanf("%s",str);
    //  cout<<str;
    return stack_check(num);
}

int main()
{
    scanf("%d",&test);
    while(test--){
        if(check())
            printf("YES\n");
        else
            printf("NO\n");
    }
}
