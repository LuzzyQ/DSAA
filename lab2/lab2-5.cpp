#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

bool check(double a ,double b){
    if(a>b)
        return true;
    return false;
}
int main(){
    int L,n,m;
    while(~scanf("%d %d %d",&L,&n,&m)){
        int a[n+2];
        double ave =L/m;
        int max=0,front =0;
        a[0]=0;
        for (int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        a[n+1]=L;
        sort(a,a+n+2);
        for (int i=0;i<m;i++){
            int start=front+1;
            int end=n+1;
            int mid =(start+ end )/2;
            while(end-start>1){
                cout <<"before"<< start<<" "<<mid<<" "<<end<<endl;
                if(!check(abs(a[mid]-a[front]-ave),abs(a[mid-1]-a[front]-ave))){
                    end=mid;
                }else{
                    start=mid;
                }
                mid =(start + end )/2;
                cout <<"after"<< start<<" "<<mid<<" "<<end<<endl;
            }
            if(check(abs(a[start]-a[front]-ave),abs(a[end]-a[front]-ave))){
                mid=end;
            }else{
                mid=start;
            }
            if (max < a[mid]-a[front])
                max = a[mid]-a[front];
            front =mid;
        }
        printf("%d\n",max);
    }
}