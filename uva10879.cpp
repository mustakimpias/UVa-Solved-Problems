#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int n;
        scanf("%d", &n);
        printf("Case #%d: %d ", i, n);
        int count = 0;
        for(int j = 2; j < sqrt(n); j++){
            if(n % j == 0){
                printf(" = %d * %d", j, n / j);
                count++;
            }
            if(count == 2)
                break;
        }
        printf("\n");
    }
    return 0;
}