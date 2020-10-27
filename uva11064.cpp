#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll phi(ll n)
{
    ll ans = n;
    for(ll i = 2; i * i <= n; i++)
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
    return ans;
}

ll CountDivisor(ll n)
{
	ll divisor = 1;
    for(ll i = 2; i * i <= n; i++)
    {
        if(i * i == n)
            divisor += 1;
        else if(n % i == 0)
            divisor += 2;
    }
    return divisor;
}

int main()
{
    ll n;
    while(cin >> n)
    {
        ll a, b;
        a = phi(n);
        //cout << a << endl;
        b = CountDivisor(n);
        //cout << b << endl;
        if(n <= a + b)
            cout << "0" << endl;
        else 
            cout << n - a - b << endl;
    }
    return 0;
}
