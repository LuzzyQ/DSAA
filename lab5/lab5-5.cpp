#include <iostream>
#include <cstring>

using namespace std;
int test, n, m;
string S, T;
int nextList[100000];
void mknext()
{
    // memset(nextList,0,100000);
    int i, j;
    nextList[0] = -1;
    for (int i = 0, j = -1; i < n;)
    {
        if (j == -1 || S[i] == S[j])
            nextList[++i] = ++j;
        else
            j = nextList[j];
    }
}
int match()
{
    int j = 0;
    for (int i = 0; i < m;)
    {
        if (j == -1 || T[i] == S[j])
        {
            i++;
            j++;
        }
        else
            j = nextList[j];

    }
        return j;
}
int main()
{
    cin >> test;
    while (test--)
    {
        cin >> n >> m >> S >> T;
        mknext();
        int num = match();
        cout << num;
        if (num)
        {
            cout << " " << S.substr(0, num);
        }
        cout << endl;
    }
}