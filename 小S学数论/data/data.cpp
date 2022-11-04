#include<bits/stdc++.h>
using namespace std;
#define int long long
int rand(int l,int r){return 1ll*rand()*rand()%(r-l+1)+l; }
signed main()
{
//	freopen("4.in","w",stdout);
	srand(time(0));
	char s[100] = "suck0.in";
//	srand (GetTickCount ());
	for (int i : {  1,2,3,4,5,6,7,8,9,0 })
	{
		s[4]=i+'0';
		freopen (s, "w", stdout);
		int n=rand(15,1000),k=rand(2,n/2);
		printf("%lld %lld\n",n,k);
	}
	
	return 0;
}
