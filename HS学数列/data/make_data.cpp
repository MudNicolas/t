#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
#define il inline
#define rg register
#define gc getchar
#define pc putchar
#define ll long long
il int brand(){return(rand()<<16)+(rand()<<1)+(rand()&1);}
const int maxn=1e4+5;
ll s[maxn],b[maxn],a[maxn],sum;
il void make(int n,int l,int r,char*in,char*out){
	for(rg int i=1;i<=n;i++)b[i]=brand()%(r-l+1)+l,s[i]=(ll)b[i]*i,a[i]=s[i]-s[i-1];
	freopen(in,"w",stdout);
	printf("%d\n",n);
	for(rg int i=1;i<=n;i++)printf("%lld%c",b[i],i==n?'\n':' ');
	freopen(out,"w",stdout);
	for(rg int i=1;i<=n;i++)printf("%lld%c",a[i],i==n?'\n':' ');
}
const int Max=1e7;
char x[15]="ex_A .in",y[15]="ex_A .out";
int N[15]={10, 10,100,100,500,800,1000,2000,5000,10000};
int R[15]={10,Max,100,Max, 100, Max,  Max,  Max,  Max,   Max};
int main(){
	srand(GetTickCount());
	for(rg int i=0;i<10;i++){
		x[4]=y[4]=i+48;
		make(N[i],1,R[i],x,y);
	}
	return 0;
}
