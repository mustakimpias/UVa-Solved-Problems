#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin >> n && n)
    {
        if(n == 1)
            cout << 0 << endl;
        else
        {
            long long ans = n;
            for(long long i = 2; i * i <= n; i++)
            {
                if(n % i == 0)
                {
                    while(n % i == 0)
                    {
                        n /= i;
                    }
                    ans = (ans * (i - 1)) / i; 
                }
            }
            if(n > 1)
                ans = (ans * (n - 1)) / n;
            cout << ans << endl;
        }
    }
    return 0;
}