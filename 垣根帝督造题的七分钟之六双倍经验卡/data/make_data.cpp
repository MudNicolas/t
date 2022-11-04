#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
long long brand()
{
    return (rand() << 16) + (rand() << 1) + (rand() & 1);
}
void calc(int x)
{
    int n = brand() % x + 1;
    cout << n << endl;
}
int main()
{
    srand(GetTickCount());
    freopen("six0.in", "w", stdout);
    calc(1000);
    freopen("six1.in", "w", stdout);
    calc(1000);
    freopen("six2.in", "w", stdout);
    calc(10000);
    freopen("six3.in", "w", stdout);
    calc(10000);
    freopen("six4.in", "w", stdout);
    calc(10000);
    freopen("six5.in", "w", stdout);
    calc(100000);
    freopen("six6.in", "w", stdout);
    calc(1000000);
    freopen("six7.in", "w", stdout);
    calc(10000000);
    freopen("six8.in", "w", stdout);
    calc(100000000);
    freopen("six9.in", "w", stdout);
    calc(1000000000);
    return 0;
}
