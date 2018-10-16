#include<iostream>

using namespace std;
int test,m,n,count;
int front,rear;
int list[100000];
void counter(){
    count += (rear-front-1)*(rear-front)/2;
}
bool check(){
    if(rear>=n||front>=n)
        return false;
    else
        return list[rear]-list[front]<=m;
}
void init(){
    front=0;count=0;
    for(rear=2;rear<n;rear++,front++){
        if(check())
            break;
    }
    if(check())
        counter();
    // if(list[rear]-list[front]>m)
    //cout<<" "<<count<<" "<<endl;
}


int loop(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&list[i]);
    init();
    rear++;
    for(;rear<n;rear++){
        while(!check()&&rear-front>2){
            front++;
        };
        if(check()){
            counter();
            cout<<count<<endl;
        }else
            continue;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    scanf("%d",&test);
    while (test--){
        printf("%d\n",loop());
    }
}
