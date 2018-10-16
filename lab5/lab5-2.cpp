    #include<iostream>
    #include<string>

    using namespace std;
    int test,m,n;
    int i,j;
    string str1,str2;

    bool star(char c){
        if (c=='*')
            return true;
        return false;
    }
    bool scan(){
        bool flag=true;
        i=0;
        while(!star(str1[i])&&i<n){
            if(str1[i]!=str2[i])
                flag=false;
            i++;
        }
        i=n-1;j=m-1;
        while(!star(str1[i])&&i>=0&&j>=0){
            if(str1[i]!=str2[j])
                flag = false;
            i--;
            j--;
        }
        return flag;
    }


    int main(){
        cin >> test;
        while(test--){
            cin >>n>>m;
            cin >> str1>>str2;
            if(scan())
                cout<<"YES\n";
            else
                cout<< "NO\n";
        }
    }