#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
long long brand(){
	return (rand()<<16)+(rand()<<1)+(rand()&1);
}
void calc(int x){
	int n=brand()%x+1;
	int m=brand()%10000+1;
	int t=brand()%m+1;
	int k[15];
	for (int i=1;i<=n;i++)k[i]=brand()%(2*m)+1;
	cout<<n<<' '<<m<<' '<<t<<endl;
	for (int i=1;i<=n;i++)cout<<k[i]<<endl;
}
int main() {
	srand(GetTickCount());
	freopen("fou0.in","w",stdout);calc(10);
	freopen("fou1.in","w",stdout);calc(10);
	freopen("fou2.in","w",stdout);calc(10);
	freopen("fou3.in","w",stdout);calc(10);
	freopen("fou4.in","w",stdout);calc(10);
	freopen("fou5.in","w",stdout);calc(10);
	freopen("fou6.in","w",stdout);calc(10);
	freopen("fou7.in","w",stdout);calc(10);
	freopen("fou8.in","w",stdout);calc(10);
	freopen("fou9.in","w",stdout);calc(10);
	return 0;
}
