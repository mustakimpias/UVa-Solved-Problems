#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t); // number of test case
    while (t--)
    {
        int student;
        scanf("%d", &student); // number of student
        vector<int> m;
        long long sum = 0, count = 0;
        for (int i = 0; i < student; i++)
        {
            int marks;
            scanf("%d", &marks); // marks of each student
            m.push_back(marks);
            sum += marks;
        }
        int average = sum / student;
        for (int j = 0; j < student; j++)
            if (m[j] > average)
                count++;
        double ans = (double)count / (double)student;
        printf("%.3lf%%\n", ans * 100.0);
    }
    return 0;
}