#include<iostream>
using namespace std;
void print_width(int w,int d){
    for(int i=0;i<w;i++){
        cout << "+-";
    }
    cout <<"+";

    for(int i=0;i< d ;i++){
        cout << ".+";
    }
}
void print_grid_top(int w,int d){
    for(int i =0;i<w;i++){
        cout << "/.";
    }
    for(int i=0;i<d;i++){
        cout << "/|";
    }
    cout << "\n";
}

void print_grid_middle(int w,int d){
    for(int i =0;i<w;i++){
        cout << "|.";
    }
    cout << "|";
    for(int i=0;i<d;i++){
        cout << "/|";
    }
}

void printbox(int w,int d,int h){
    int height = 2*h + 2*d +1;
    int width = 2*d + 2*w +1;
    //top
    for(int i=2*d;i>0;i--){
            for(int j=0;j<i;j++){
                cout << ".";
            }
            if(i%2==0){
                print_width(w,d-i/2);
                cout << "\n";
            }
            else{
                print_grid_top(w,d-i/2);
            }
    }
    //if h > d :middle
    for(int i=0;i<(h-d);i++){
        print_width(w,d);
        cout << "\n";
        print_grid_middle(w,d);
        cout << "\n";
    }
    print_width(w,d);
    cout << "\n";
    //bottom
    for(int i=1;i<=2*d;i++){
        if(i%2==0){
            print_width(w,d-i/2);
        }else{
            print_grid_middle(w,d-i/2-1);
            cout << '/';
        }
        for(int j=0;j<i;j++){
            cout << ".";
        }
        cout << "\n";
    }
}
int main(){
    int x,y,z,test;
    cin >>test;
    while(test--){
        cin >> x>>y>>z;
        printbox(x,y,z);
    }
}