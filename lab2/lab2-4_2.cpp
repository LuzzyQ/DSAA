#include<iostream>
using namespace std;

bool check(int b[],int n,int mid,int d[],int s[],int t[]){
    int sum=0;
    for (int i=0;i<=mid;i++){
        b[s[i]-1]-=d[i];
        b[t[i]]+=d[i];
    }
    // for (int i=0;i<n;i++){
    //     cout <<b[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<n;i++){
        sum+=b[i];
        if(sum<0)
            return true;
    }
    return false;
}
int main(){
    int m,n;
    while(~scanf("%d %d",&n,&m)){
        int a[n+1],b[n+1];
        int d[m],s[m],t[m];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            // cout <<a[i];
        }
        // cout<<endl;
        for (int i=0;i<m;i++){
            scanf("%d %d %d",&d[i],&s[i],&t[i]);
        }
        
        int start=0,end=m-1,mid=m/2;
        int min=-1;
        while(end>=start){
            mid=(end+start)/2;
            // cout <<start<<" "<<mid<<" "<<end<<" "<<endl;
            b[0]=a[0];
            for(int i=1;i<n;i++){
                b[i]=a[i]-a[i-1];
            }
            if(check(b,n,mid,d,s,t)){
                end=mid-1;
                min=mid;
            }else
                start=mid+1;
        }
        if(min!=-1){
            printf("-1\n%d\n",min+1);
        }else
        printf("0\n");

    }

}