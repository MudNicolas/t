#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
long long brand(){return (rand()<<16)+(rand()<<3)+(rand()&1);}
void calc(long long x){
	long long n=brand()%x+1;
	printf("%lld\n",n);
}
int main(){
	srand(GetTickCount());
	freopen("odo0.in","w",stdout);calc(1000);
	freopen("odo1.in","w",stdout);calc(10000);
	freopen("odo2.in","w",stdout);calc(100000);
	freopen("odo3.in","w",stdout);calc(1000000);
	freopen("odo4.in","w",stdout);calc(10000000);
	freopen("odo5.in","w",stdout);calc(100000000);
	freopen("odo6.in","w",stdout);calc(1000000000);
	freopen("odo7.in","w",stdout);calc(10000000000);
	freopen("odo8.in","w",stdout);calc(100000000000);
	freopen("odo9.in","w",stdout);calc(1000000000000);
	return 0;
}
