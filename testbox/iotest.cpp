#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char name[40];
    char hello[40];
    cout << "please input your name:";
    cin >> name >> hello;
    cout << "your name is :"<<name<<'\n';
    cout << hello;
    return 0;
}
