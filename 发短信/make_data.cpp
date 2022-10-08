#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
void calc(int x){
	int n=rand()%x+1;
	string ans="";
	for(int i=1;i<=n;i++){
		int A=rand()%26;
		ans+='a'+A;
	}
	cout<<ans<<endl;
}
int main(){
	srand(GetTickCount());
	freopen("mob0.in","w",stdout);calc(10);
	freopen("mob1.in","w",stdout);calc(10);
	freopen("mob2.in","w",stdout);calc(10);
	freopen("mob3.in","w",stdout);calc(100);
	freopen("mob4.in","w",stdout);calc(100);
	freopen("mob5.in","w",stdout);calc(100);
	freopen("mob6.in","w",stdout);calc(1000);
	freopen("mob7.in","w",stdout);calc(1000);
	freopen("mob8.in","w",stdout);calc(1000);
	freopen("mob9.in","w",stdout);calc(10000);
	return 0;
}
