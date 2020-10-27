#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int a[1005], cnt = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    cnt++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", cnt);
    }
    return 0;
}