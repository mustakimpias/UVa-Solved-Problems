#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m, ans;
    int x;
    while (scanf("%lld %d", &m, &x) == 2)
    {
        if (m == 0 && x == 0)
            break;
        if(x == 100)
            printf("Not found\n");
        else
        {
            ans = ((m - 1) * 100) / (100 - x);
            if((m - 1) * 100 % (100 - x) == 0)
                ans -= 1;
            if(ans < m)
                printf("Not found\n");
            else 
                printf("%lld\n", ans);
        }
    }
    return 0;
}