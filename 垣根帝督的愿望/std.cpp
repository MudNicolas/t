#include <bits/stdc++.h>
using namespace std;
int N,n,m;
int p[10005];
void make_p(){
	p[++p[0]]=2;
	for(int i=3;i<=1000;i+=2){
		bool flag=1;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag)p[++p[0]]=i;
	}
}
int check(int x){
	int sum=0;
	for(int i=1;i<=p[0];i++){
		while(x%p[i]==0)x/=p[i],sum++;
	}
	return sum;
}
void calc(){
	cin>>N>>n>>m;
	int sum=0,mul=1;
	for(int i=n;i<=m;i++){
		bool flag=1;
		int t=check(i);
		for(int j=1;j<i;j++){
			if(check(j)>t){
				flag=0;
				break;
			}
		}
		if(flag){
			sum=(sum+i)%N;
			mul=(mul*i)%N;
		}
	}
	cout<<(sum+1)/(__gcd(sum+1,mul+1))<<' '<<(mul+1)/(__gcd(sum+1,mul+1))<<endl;
}
int main(){
	make_p();
	freopen("wish0.in","r",stdin);freopen("wish0.out","w",stdout);calc();
	freopen("wish1.in","r",stdin);freopen("wish1.out","w",stdout);calc();
	freopen("wish2.in","r",stdin);freopen("wish2.out","w",stdout);calc();
	freopen("wish3.in","r",stdin);freopen("wish3.out","w",stdout);calc();
	freopen("wish4.in","r",stdin);freopen("wish4.out","w",stdout);calc();
	freopen("wish5.in","r",stdin);freopen("wish5.out","w",stdout);calc();
	freopen("wish6.in","r",stdin);freopen("wish6.out","w",stdout);calc();
	freopen("wish7.in","r",stdin);freopen("wish7.out","w",stdout);calc();
	freopen("wish8.in","r",stdin);freopen("wish8.out","w",stdout);calc();
	freopen("wish9.in","r",stdin);freopen("wish9.out","w",stdout);calc();
	return 0;
}
