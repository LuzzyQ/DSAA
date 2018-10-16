#include<iostream>
using namespace std;

void print_box(int x,int y,int **){
}


int main(int argc, char const *argv[])
{
    int test,w,h,d,x,y;
    int i,j;
    cin >>test;
    while(test--){
        cin >> w >> d >> h;
        x=2*h+2*d+1;
        y=2*w+2*d+1;
        char cube[x][y];
        for (i=0;i<x;i++){
            for(j=0; j<y;j++){
                cube[i][j]='.';
            }
        }
        //front
        for(i=x-1;i>=x-2*h-1;i--){
            for(j=0;j<2*w+1;j++){
                if(i%2==0){
                    if(j%2==0)
                        cube[i][j]='+';
                    else
                        cube[i][j]='-';
                }else{
                    if(j%2==0)
                        cube[i][j]='|';
                }
            }
        }
        //top
        for (i=0;i<2*d;i++){
            if(i%2==0){
                
                for(j=0;j<w;j++){
                    cube[i][2*d-i+2*j]='+';
                    cube[i][2*d-i+2*j+1]='-';
                }
                    cube[i][2*d-i+2*j]='+';
            }else{
                for(j=0;j<w;j++){
                    cube[i][2*d-i+2*j]='/';
                }
                cube[i][2*d-i+2*j]='/';
            }
        }
        //right
        for (i=y-1;i>2*w;i--){
            if(i%2==0){
                
                for(j=y-1-i;j<y-1-i+2*h;j=j+2){
                    cube[j][i]='+';
                    cube[j+1][i]='|';
                }
                    cube[j][i]='+';
            }else{
                for(j=y-1-i;j<y-1-i+2*h;j=j+2){
                    cube[j][i]='/';
                }
                    cube[j][i]='/';
            }
        }
        //print 
        for (int i=0;i<x;i++){
            for(int j=0; j<y;j++){
               cout <<cube[i][j];
            }
               cout <<'\n'; 
        }
    }
    return 0;
}
