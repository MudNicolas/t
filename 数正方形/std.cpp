#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int n;
struct node
{
    int x;
    int y;
} p[1005];
bool vis[1005][1005];

inline void R(int &x)
{
    x = 0;
    char ch = getchar();
    while ((ch < '0') || (ch > '9'))
        ch = getchar();
    while ((ch >= '0') && (ch <= '9'))
    {
        x = (x * 10) + (ch - '0');
        ch = getchar();
    }
}

int main()
{
    R(n);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        R(p[i].x);
        R(p[i].y);
        vis[p[i].x][p[i].y] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            double midx = (p[i].x + p[j].x) * 1.0 / 2;
            double midy = (p[i].y + p[j].y) * 1.0 / 2;
            double deltax = p[i].x - midx;
            double deltay = p[i].y - midy;
            double xnew = midx + deltay;
            double ynew = midy + deltax;
            if (ceil(xnew) != int(xnew))
                continue;
            if (ceil(ynew) != int(ynew))
                continue;
            int x_ = int(xnew);
            int y_ = int(ynew);
            if ((x_ == p[i].x && y_ == p[i].y) || (x_ == p[j].x && y_ == p[j].y))
                continue;
            if (x_ * y_ < 0 || (x_ < 0 && y_ < 0))
                continue;
            if (vis[x_][y_] == false)
                continue;

            xnew = midx - deltay;
            ynew = midy - deltax;
            if (ceil(xnew) != int(xnew))
                continue;
            if (ceil(ynew) != int(ynew))
                continue;
            x_ = int(xnew);
            y_ = int(ynew);
            if ((x_ == p[i].x && y_ == p[i].y) || (x_ == p[j].x && y_ == p[j].y))
                continue;
            if (x_ * y_ < 0 || (x_ < 0 && y_ < 0))
                continue;
            if (vis[x_][y_] == false)
                continue;

            xnew = midx + deltay;
            ynew = midy - deltax;
            if (ceil(xnew) != int(xnew))
                continue;
            if (ceil(ynew) != int(ynew))
                continue;
            x_ = int(xnew);
            y_ = int(ynew);
            if ((x_ == p[i].x && y_ == p[i].y) || (x_ == p[j].x && y_ == p[j].y))
                continue;
            if (x_ * y_ < 0 || (x_ < 0 && y_ < 0))
                continue;
            if (vis[x_][y_] == false)
                continue;

            xnew = midx - deltay;
            ynew = midy + deltax;
            if (ceil(xnew) != int(xnew))
                continue;
            if (ceil(ynew) != int(ynew))
                continue;
            x_ = int(xnew);
            y_ = int(ynew);
            if ((x_ == p[i].x && y_ == p[i].y) || (x_ == p[j].x && y_ == p[j].y))
                continue;
            if (x_ * y_ < 0 || (x_ < 0 && y_ < 0))
                continue;
            if (vis[x_][y_] == false)
                continue;

            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}
/*
7
1 0
0 1
1 2
2 1
3 3
4 0
5 2
*/
