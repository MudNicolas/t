#include <cmath>
#include <cstdio>

double v, th, vx, vy, t, x2;
const double g = 10.0;

int main()
{
    scanf("%lf%lf", &v, &th);
    vy = v * cos(th);
    vx = v * sin(th);
    t = vy / g;
    x2 = v * sin(th) * t;
    printf("%.1lf %.1lf\n", x2, (x2 / 2) * vy / vx);
    return 0;
}
