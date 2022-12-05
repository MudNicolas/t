#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 1e5+5;
int n,m,ans = 0;
int attack[maxn],defense[maxn];
int main(){
	scanf("%d %d",&m,&n);
	if(n <= m){printf("0");return 0;}
	for(int i=1;i<=m;++i)scanf("%d",&defense[i]);
	for(int i=1;i<=n;++i)scanf("%d",&attack[i]);
	sort(attack+1,attack+n+1),sort(defense+1,defense+m+1);
	int pa = 1;
	for(int i=1;i<=m;++i){
		while(attack[pa] <= defense[i] and pa <= n)ans += attack[pa++];
		++pa;
		if(i != m && pa == n+1){printf("0");return 0;}
	}
	while(pa <= n)ans += attack[pa++];
	printf("%d",ans);
	return 0;
}
