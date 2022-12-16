#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
long long brand(){return (rand()<<16)+(rand()<<3)+(rand()&1);}
long long a[100]={114514,1919810,19260817,998244353,1000000007};
void calc(int x){
	int N,n,m;
	N=a[brand()%5];
	n=brand()%(x/2)+1;
	m=n+brand()%(x/2)+1;
	while(m>x)m=n+brand()%(x/2)+1;
	cout<<N<<' '<<n<<' '<<m<<endl;
}
int main(){
	freopen("wish0.in","w",stdout);calc(10);
	freopen("wish1.in","w",stdout);calc(10);
	freopen("wish2.in","w",stdout);calc(10);
	freopen("wish3.in","w",stdout);calc(100);
	freopen("wish4.in","w",stdout);calc(100);
	freopen("wish5.in","w",stdout);calc(100);
	freopen("wish6.in","w",stdout);calc(1000);
	freopen("wish7.in","w",stdout);calc(1000);
	freopen("wish8.in","w",stdout);calc(1000);
	freopen("wish9.in","w",stdout);calc(1000);
	return 0;
}
