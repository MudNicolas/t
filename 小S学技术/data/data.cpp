#include<bits/stdc++.h>
using namespace std;
int rand(int l,int r){return 1ll*rand()*rand()%(r-l+1)+l; }
double ra(double l,double r){return 1.0*rand()/RAND_MAX*(r-l)+l;}
int attack[100010],defense[100010];
signed main()
{
//	freopen("4.in","w",stdout);
	srand(time(0));
	double PI=acos(-1);
	char s[100] = "0.in";
	char s2[100] = "sk0.out";
	for (int i : {0,1})
	{
		s[0]=i+'0';
		s2[2]=i+'0';
		int n,m;
		freopen(s, "r", stdin);
		freopen(s2, "w", stdout);
		scanf("%d %d",&m,&n);int ans=0;
		if(n <= m){printf("0");return 0;}
		for(int i=1;i<=m;++i)scanf("%d",&defense[i]);
		for(int i=1;i<=n;++i)scanf("%d",&attack[i]);
		sort(attack+1,attack+n+1),sort(defense+1,defense+m+1);
		int pa = 1;
		for(int i=1;i<=m;++i){
			while(attack[pa] <= defense[i] and pa <= n) ans += attack[pa++];
			++pa;
			if(i != m && pa == n+1){printf("0");return 0;}
		}
		while(pa <= n)ans += attack[pa++];
		printf("%d",ans);
//		for(int i=1;i<=m;++i) scanf("%lld",&defense[i]);
//		for(int i=1;i<=n;++i) scanf("%lld",&attack[i]);
//		for(int i=1;i<=m;i++) printf("%lld ",defense[i]);puts("");
//		for(int i=1;i<=n;i++) printf("%lld ",attack[i]);puts("");
	}
	return 0;
}
