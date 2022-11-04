#include<bits/stdc++.h>
using namespace std;
#define int long long
int rand(int l,int r){return 1ll*rand()*rand()%(r-l+1)+l; }
double ra(double l,double r){return 1.0*rand()/RAND_MAX*(r-l)+l;}
signed main()
{
//	freopen("4.in","w",stdout);
	srand(time(0));
	double PI=acos(-1);
	char s[100] = "0.in";
	for (int i : {  0,1,2,3,4,5,6,7,8,9 })
	{
		s[0]=i+'0';
		freopen(s, "w", stdout);
		double v=ra(1,100),a=ra(PI/12,5*PI/12);
		printf("%.6lf %.6lf\n",v,a);
	}
	return 0;
}
