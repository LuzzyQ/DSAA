#include<iostream>
#include<algorithm>
using namespace std;
bool tem(double a,double b)
{
    return a>b;
}
bool check(double a[],double b[],int n,double mid,int k){
    double w[n];
    double sum=0;
    for (int i=0;i<n;i++){
        w[i]=a[i]*(b[i]-mid);
    }
    sort(w,w+n,tem);
    for (int i=0;i<n-k;i++){
        sum+=w[i];
    }
    // cout<<endl;
    return sum>=0;
}

int main(int argc, char const *argv[])
{
    int n,k;
    double esp=10E-9;
    while(~scanf("%d %d",&n,&k)){
        double s[n],c[n];
        for(int i=0;i<n;i++){
            scanf("%lf",&s[i]);

        }
        for(int i=0;i<n;i++){
            scanf("%lf",&c[i]);
        }
        double start =0,end=100;
        while(abs(end-start)>esp){
            double mid =(start+end)/2;
            if(check(s,c,n,mid,k)){
                start=mid;
            }else{
                end=mid;
            }
            // printf("%.3f\n",mid);
        }
        printf("%.3lf\n",start);
    }

    return 0;
}
