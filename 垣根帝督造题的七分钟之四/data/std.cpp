#include <bits/stdc++.h>
using namespace std;
int k[15], m;
bool check(int x)
{
    int cnt = 1;
    int S = 0;
    while (x > 0)
    {
        S += k[cnt] * (x % 2);
        x /= 2;
        cnt++;
    }

    if (S >= m)
        return 1;
    else
        return 0;
}
void calc()
{
    int n, t;
    cin >> n >> m >> t;
    m -= t;
    memset(k, 0, sizeof k);
    int ans = 0;
    for (int i = 1; i <= n; i++)
        cin >> k[i];
    for (int i = 1; i < pow(2, n); i++)
        if (check(i))
            ans += 1;
    cout << ans << endl;
}
int main()
{
    freopen("fou0.in", "r", stdin);
    freopen("fou0.out", "w", stdout);
    calc();
    freopen("fou1.in", "r", stdin);
    freopen("fou1.out", "w", stdout);
    calc();
    freopen("fou2.in", "r", stdin);
    freopen("fou2.out", "w", stdout);
    calc();
    freopen("fou3.in", "r", stdin);
    freopen("fou3.out", "w", stdout);
    calc();
    freopen("fou4.in", "r", stdin);
    freopen("fou4.out", "w", stdout);
    calc();
    freopen("fou5.in", "r", stdin);
    freopen("fou5.out", "w", stdout);
    calc();
    freopen("fou6.in", "r", stdin);
    freopen("fou6.out", "w", stdout);
    calc();
    freopen("fou7.in", "r", stdin);
    freopen("fou7.out", "w", stdout);
    calc();
    freopen("fou8.in", "r", stdin);
    freopen("fou8.out", "w", stdout);
    calc();
    freopen("fou9.in", "r", stdin);
    freopen("fou9.out", "w", stdout);
    calc();
    return 0;
}
