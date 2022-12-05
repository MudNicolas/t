#include<bits/stdc++.h>
using namespace std;
#define il inline
#define rg register
#define gc getchar
#define pc putchar
#define ll long long
il int read(){
	rg int ret=0;rg char c=gc();rg bool f=1;
	while(!isdigit(c)){c=='-'?f=!f:0;c=gc();}
	while(isdigit(c))ret=(ret<<3)+(ret<<1)+(c^48),c=gc();
	return f?ret:-ret;
}
const int maxn=1e4+5;
int n;
ll s[maxn];
int main(){
	n=read();
	for(rg int i=1;i<=n;i++)s[i]=(ll)read()*i;
	for(rg int i=1;i<=n;i++)printf("%lld ",s[i]-s[i-1]);
	return 0;
}
