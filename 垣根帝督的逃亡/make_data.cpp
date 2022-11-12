#include <iostream>
#include <windows.h>
using namespace std;
long long brand(){
     return (rand()<<16)+(rand()<<3)+(rand()&1);
}
void calc(int x){
     int n=brand()%x+1;
     long long t=brand()%(10000*x)+1;
     int a[n+5];
     memset(a,0,sizeof a);
     for(int i=1;i<=n;i++)
             a[i]=brand()%n+1;
     cout<<n<<' '<<t<<endl;
     for(int i=1;i<=n;i++)cout<<a[i]<<endl;
}
int main(){
    freopen("scape0.in","w",stdout);calc(10);
    freopen("scape1.in","w",stdout);calc(10);
    freopen("scape2.in","w",stdout);calc(100);
    freopen("scape3.in","w",stdout);calc(100);
    freopen("scape4.in","w",stdout);calc(1000);
    freopen("scape5.in","w",stdout);calc(1000);
    freopen("scape6.in","w",stdout);calc(10000);
    freopen("scape7.in","w",stdout);calc(10000);
    freopen("scape8.in","w",stdout);calc(100000);
    freopen("scape9.in","w",stdout);calc(100000);
    return 0;
}
