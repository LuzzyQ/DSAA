#include<iostream>
using namespace std;
int sum(int a[],int m){
    int sum=0;
    for(int i=0;i<m;i++){
        sum+=a[i];
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int m, n;
    while(~scanf("%d %d",&n,&m)){   
        int a[n],b[n];
        int d[m],s[m],t[m];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<m;i++){
            scanf("%d %d %d",&d[i],&s[i],&t[i]);
        }

        int start=0;
        int end=m-1;
        int period=m/2;
        int flag=n+1;
        int x;
        b[0]=a[0];
        for(int i=1;i<n;i++){
            b[i]=a[i]-a[i-1];
        }
        while(end>=start){
            for(int i=0;i<=period;i++){
                b[s[i]-1]-=d[i];b[t[i]-1]+=d[i];
            }
            for (x=1;x<n;x++){
                // cout<<" "<<period<<" "<<sum(b,x)<<endl;
                if(sum(b,x)<0){
                    if(flag>period)
                        flag=period;
                    end=period-1;
                    break;
                }
                else 
                    continue;
            }
            if(x=n){
                start=period+1;
                period=(end+start)/2;
            }
        }
        if(flag>n)
            printf("0\n");
        else 
            printf("-1\n%d\n",flag);
    }
    return 0;
}
