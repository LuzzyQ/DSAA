#include<iostream>

using namespace std;

int paird(int *a,int n,int m){
    int count =0;
    int start,end,field;
    for(int i=0;i<n-1;i++){
        start=i+1;
        end=n-1;
        field=(end+start)/2;
        while(start<=end){
            if(*(a+i)+*(a+field)==m){
                count++;
                break;
            }else if(*(a+i)+*(a+field)>m){
                end=field-1;
            }else{
                start = field+1;
            }
            field=(end+start)/2;
        }
            // cout << i<<" "<<field<<" "<<start<<" "<<end<<" "<<count<<endl;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int test;

    cin >>test;
    int n,m;
    while(test--){
        cin>>n>>m;
        int *a;
        int k[n];
        for(int i=0;i<n;i++){
            cin>>k[i];
        }
        a=k;
        // cout <<"hi";
        cout <<paird(a,n,m)<<"\n";


    }
    return 0;
}
