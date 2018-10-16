#include<iostream>
#include<algorithm>


using namespace std;

int check(int a[],int n,int m,int len){
    int count=0;
    int s=0;
    int max=0;
    while(s!=n+1){
            cout <<s<<" ";
        for (int i=s+1;i<=n+1;i++){
            if (i==n+1){
                if(a[i]-a[s]>len){
                    s=n+1;
                    break;
                }else{
                    if(max<a[i]-a[s])
                        max=a[i]-a[s];
                    s=n+1;
                    count++;
                    cout <<"ok";
                }

            }else if(a[i]-a[s]<=len&&a[i+1]-a[s]>len){
                if(max<a[i]-a[s])
                    max=a[i]-a[s];
                s=i;
                count++;
                break;
            }
        }
    }
    cout<<count<<" "<<max<<endl;
    if(count ==m){
        return max;
    }else if(count<m){
        return -1;
    }else{
        return -2;
    }
}

int main(int argc, char const *argv[])
{
    int L,n,m;
    while( ~scanf("%d %d %d ",&L,&n,&m)){
        int a[n+2];
        a[0]=0;
        for (int i =1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        a[n+1]=L;
        sort(a,a+n+2);
        //
        int flag=0;
        int start =0;
        int end =L;
        int mid=(start + end)/2;
        while(end >=start){
            cout<<start <<" "<<mid<<" "<<end<<endl;
            flag=check(a,n,m,mid);
            if (flag>0) 
                break;
            else if(flag==-2)//less people
                end=mid-1;
            else if(flag==-1)//more people
                start=mid+1;
            mid=(end+start)/2;
        }
        printf("%d\n",flag);

    }

    return 0;
}
