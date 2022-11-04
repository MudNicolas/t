#include<cmath>
#include<cstdio>
int n,k;
int main()
{
	scanf("%d%d",&n,&k);
    double res=1.0;int ans=0;
    while(res>1.0-k/100.0)
    {
	    res=res*(n-ans)/n;
	    ans++;
	}
	printf("%d\n",ans);
	return 0;
}
