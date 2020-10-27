#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    while(scanf("%d", &n) == 1){
        int count = n;
        while(n >= 3){
            count += n / 3;
            n = n / 3 + n % 3;
        }
        if(n == 2) count++;
        printf("%d\n", count);
    }
    return 0;
}