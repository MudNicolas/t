#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <ctime>
#include <queue>
using namespace std;
char s[100], in[100], out[100];
int T;
int N[1005] = {0, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
int M[1005] = {0, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
void file()
{
    memset(s, 0, sizeof(s));
    memset(in, 0, sizeof(in));
    memset(out, 0, sizeof(out));
    strcat(s, "rosemary");
    sprintf(s + strlen(s), "%d.", T);
    strcat(in, s), strcat(in, "in");
    strcat(out, s), strcat(out, "out");
}
inline void R(int &x)
{
    x = 0;
    char ch = getchar();
    int f = 1;
    while ((ch < '0') || (ch > '9'))
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while ((ch >= '0') && (ch <= '9'))
    {
        x = (x * 10) + (ch - '0');
        ch = getchar();
    }
    x *= f;
}

void random()
{
    int n = N[T], m = M[T];

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", rand() % 1000000 + 1);
    }
    printf("\n");
    cout << m << endl;
    for (int i = 1; i <= m; i++)
    {
        int id = rand() & 1;
        if (id == 1)
        {
            cout << "query" << ' ';
            int L = rand() % 1000, R = rand() % 1000;
            printf("%d %d\n", min(L, R), max(L, R));
        }
        if (id == 0)
        {
            int L = rand() % 1000, R = rand() % 1000;
            int k = rand() % 1000 + 1;
            printf("add %d %d %d\n", min(L, R), max(L, R), k * (rand() & 1 ? 1 : -1));
        }
    }
}
int a[1000005];
void stdf()
{
    memset(a, 0, sizeof(a));
    int N, M;
    scanf("%d%d", &N, &M);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &a[i]);
    }
    string opt;
    for (int i = 1; i <= M; i++)
    {
        cin >> opt;
        if (opt == "add")
        {
            int L, R, K;
            scanf("%d%d%d", &L, &R, &K);
            for (int j = L; j <= R; j++)
            {
                a[j] += K;
            }
        }
        else
        {
            int L, R;
            int sum = 0;
            scanf("%d%d", &L, &R);
            for (int j = L; j <= R; j++)
            {
                sum += a[j];
            }
            printf("%d\n", sum);
        }
    }
}
int main()
{
    srand(time(NULL));
    for (T = 1; T <= 10; T++)
    {
        file();
        freopen(in, "w", stdout);
        random();
        fclose(stdout);
        freopen(in, "r", stdin);
        freopen(out, "w", stdout);
        stdf();
        fclose(stdin);
        fclose(stdout);
    }
    return 0;
}
