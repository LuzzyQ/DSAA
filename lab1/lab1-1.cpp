#include<iostream>
#include<string>
#include<cstring>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[])
{
    int test;
    int roll,num;
    bool got;
    string key[10],word;
    cin >> test;
    while(test--){
        cin >> roll;
        for (int i=0;i<roll;i++){
            cin >>key[i];
            transform(key[i].begin(),key[i].end(),key[i].begin(),::tolower);
        }
        cin >> num;
        got =false;
        for(int j=0;j<num;j++){
            cin >> word;
                // cout << num<<'\n';
            transform(word.begin(),word.end(),word.begin(),::tolower);
            for (int i=0;i<roll;i++){
                // cout << word <<":"<<key[i]<<'\n';
                if(word==key[i]){
                    got=true;
                    break;
                }
            }
        }
        if(got)
            cout << "Appeared\n";
        else
            cout << "Not appeared\n";

    }
}
