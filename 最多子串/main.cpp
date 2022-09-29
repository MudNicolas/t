#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, ans, cnt[N];
char c[N];
int main()
{
    scanf("%s", c + 1);
    n = strlen(c + 1);
    for (register int i = 1; i <= n; i++)
    {
        cnt[c[i] - 'a']++;
    }
    for (register int i = 0; i <= 25; i++)
    {
        ans = max(ans, cnt[i]);
    }
    return printf("%d\n", ans), 0;
}