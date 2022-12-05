#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int a[15][15];
int n;
string in;

inline void sp()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * 2 <= n; j++)
        {
            swap(a[i][j], a[i][n - j + 1]);
        }
    }
}

inline void sz()
{
    for (int i = 1; i * 2 <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            swap(a[i][j], a[n - i + 1][j]);
        }
    }
}

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    cin >> in;
    int len = in.size() - 1;
    for (int i = 0; i <= len; i++)
    {
        if (in[i] == '1')
            sp();
        if (in[i] == '2')
            sz();
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
