#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;

    while(scanf("%d %d", &a, &b) == 2){
        int c = a;
        int d = b;
        if (a > b) swap(a, b);
        int max_cnt = 0, cnt;
        while(a <= b)
        {
            cnt = 1;
            int n = a;
            while(n != 1)
            {
                if (n % 2 == 1) n = 3 * n + 1;
                else n = n/2;
                cnt++;
            }
            if (cnt > max_cnt)
            max_cnt = cnt;
            a++;
        }
        cout << c << " " << d << " " << max_cnt << "\n";
    }

    return 0;
}
