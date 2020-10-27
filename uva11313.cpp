#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t; // number of test case
    while(t--){
        int n, m; // n is the totalnumber of candidates and
        cin >> n >> m; // m is the number of chefs participating in a single TV show.
        if((n - 1) % (m - 1) == 0){
            cout << (n - 1) / (m - 1) << endl;
        }
        else{
            cout << "cannot do this\n";
        }
    }
    return 0;
}