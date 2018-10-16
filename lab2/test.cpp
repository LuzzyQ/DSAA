#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

bool check(double s[],double c[],double d,int n,int k)
{
    double w[n];
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        w[i] = s[i] * (c[i] - d);
    }
    sort(w,w+n);
    for (int i = k; i < n ; i++){
        cout<<w[i]<<" ";
        sum += w[i];
    }
    cout<<endl;
    return sum >= 0;
}

int main()
{
    double eps = 1e-8;
    int n,k;
    while(scanf("%d%d", &n, &k)){
        double s[n], c[n], w[n];
        for (int i = 0; i < n; i++){
            scanf("%lf", s + i);
        }
        for (int i = 0; i < n; i++){
            scanf("%lf", c + i);
        }
        double start = 0, end = 1e3;
        while (abs(end - start) > eps)
        {
            double mid = (start + end) / 2;
            if (check(s,c,mid,n,k))
                start = mid;
            else
                end = mid;
        }
        printf("%.3lf\n", start);
        return 0;
    }
}