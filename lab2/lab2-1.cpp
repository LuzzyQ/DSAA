#include<iostream>

using namespace std;

void demon(int a[],int s,int m){
    // int temp;
    // for(int j=s-1;j>0;j--){
    //     for(int i=0;i<j;i++){
    //         if(a[i]>a[i+1]){
    //             temp=a[i];
    //             a[i]=a[i+1];
    //             a[i+1]=temp;
    //         }
    //     }
    // }    
    int start=0,end=s,field=s/2;
    // cout <<start <<end<<field;
    while(end>=start){
        if(a[field]==m)
            break;
        else if(a[field]>m)
            end=field-1;
        else
            start =field+1;
        // cout <<field;
        field=(end+start)/2;
    }
    // cout <<field;
    if(a[field]==m)
        printf("YES\n");
    else
        printf("NO\n");
}

int main(int argc, char const *argv[])
{
    int test,m,n;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&n,&m);
        // cout <<n<<" "<<m;
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d ",&a[i]);
        }
        demon(a,n,m);
    }
    return 0;
}
