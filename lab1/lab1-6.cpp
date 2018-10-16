#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool ** change(bool **b,int m){
    // bool **data;
    // data=(bool **) malloc(19*sizeof(bool *));
    // for(bool i=0;i<19;i++){
    //     data[i]=(bool *)malloc(19*sizeof(bool));
    // }
    for(int i=0;i<19;i++){
        // *(+i)=!*(*b+i);
    }
    for(int j=0;j<19;j++){
        // *(*b)=!*(*b+i);
    }
}



int main(int argc, char const *argv[])
{
    int test;
    int matrix[19][19];
    bool b[19][19];
    string a[19]= {"b","c","d","f","g","h","j","k","l","m","n","p","q","r","s","t","v","x","z"};
    string word;
    // cout <<a[1]+a[2];
    cin >>test;
    while(test--){
            // cout<<pair[1]
        cin >> word;
        int max=0;

        for(int i=0 ,k=0;i<19;i++){
            for (int j=0;j<19;j++){
                // pair[k]=a[j]+a[i];
                matrix[i][j]=0;
                b[i][j]=false;
            }
        }
        //compare
        for(int i=0;i<word.length()-1;i++){
            for(int j=0 ;j<19;j++){
                for (int k=0;k<19;k++){
                    if(word.substr(i,2)==a[j]+a[k])
                        matrix[j][k]++;
                // pair[k]=a[j]+a[i];
                }
            }
        }
        // for(int x1=0;x1<2;x1++){
        // for(int x2=0;x1<2;x2++){
        // for(int x3=0;x1<2;x3++){
        // for(int x4=0;x1<2;x4++){
        // for(int x5=0;x1<2;x5++){
        // for(int x6=0;x1<2;x6++){
        // for(int x7=0;x1<2;x7++){
        // for(int x8=0;x1<2;x8++){
        // for(int x9=0;x1<2;x9++){
        // for(int x10=0;x1<2;x10++){
        // for(int x11=0;x1<2;x11++){
        // for(int x12=0;x1<2;x12++){
        // for(int x13=0;x1<2;x13++){
        // for(int x14=0;x1<2;x14++){
        // for(int x15=0;x1<2;x15++){
        // for(int x16=0;x1<2;x16++){
        // for(int x17=0;x1<2;x17++){
        // for(int x18=0;x1<2;x18++){
        // for(int x19=0;x1<2;x19++){
            

        // }    
        // }    
        // }    
        // }    
        // }    
        // }    
        // }    
        // }    
        // }    
        // }    
        // }    
        // }    
        // }    
        // }    
        // }    
        // }    
        // }    
        // }
        // }
        for(int i=0 ,k=0;i<19;i++){
            for (int j=0;j<19;j++){
            cout << matrix[i][j]<<" ";
            }
            cout <<endl;
        }
        
    }    
    return 0;
}
