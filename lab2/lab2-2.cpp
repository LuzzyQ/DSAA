#include<iostream>
#include<math.h>
using namespace std;
double func(double x,double y){
    return (5*pow(x,7)+6*pow(x,6)+3*pow(x,3)+4*pow(x,2)-2*x*y);
}
double funcd(double x,double y){
    return (35*pow(x,6)+36*pow(x,5)+9*pow(x,2)+8*x-2*y);
}
int main(int argc, char const *argv[])
{
    int test;
    int count=0;
    double y,start,end,field;
    cin >>test;
    while(count<test){
        cin >>y;
        start=0,end=100;
        field=50;
        while((end-start)>0.000001){
            if(funcd(field,y)==0)
                break;
            else if(funcd(field,y)<0)
                start=field;
            else 
                end=field;
            field=(start+end)/2;
            // cout <<field<<" ";
        }
        count++;
        cout <<"Case "<<count<<": ";
        printf("%.4f\n",func(field,y));


    }
    return 0;
}
