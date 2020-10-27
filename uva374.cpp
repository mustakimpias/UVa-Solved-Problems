#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll BigMod(ll base, ll power, ll mod)
{
    ll ans;
    if(power == 0)
        return 1;
    if(power == 1)
        return (base % mod);
    ans = BigMod(base, power / 2, mod) % mod;
    ans = (ans * ans) % mod;
    if(power % 2)
        ans = (ans * base) % mod;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll base, power, mod;
    while(cin >> base >> power >> mod)
    {
        ll ans = BigMod(base, power, mod);
        cout << ans << endl;
    }
    return 0;
}