#include <iostream>
using namespace std;
void calc(){
    int n;long long t;
    cin>>n>>t;
    int a[n+5];
    for(int i=1;i<=n;i++)cin>>a[i];
    int vis[n+5];
    memset(vis,0,sizeof vis);
    int fir=0,sec=0,now=1;
    while(vis[now]!=1){
                       vis[now]+=1;
                       now=a[now];
                       fir++;
    }
    while(vis[now]!=2){
                       vis[now]+=1;
                       now=a[now];
                       sec++;
    }
    int yuan=fir-sec;
    t=(t-yuan)%sec+yuan;
    now=1;
    while(t--)now=a[now];
    cout<<now<<endl;
}
int main(){
    freopen("scape0.in","r",stdin);freopen("scape0.out","w",stdout);calc();
    freopen("scape1.in","r",stdin);freopen("scape1.out","w",stdout);calc();
    freopen("scape2.in","r",stdin);freopen("scape2.out","w",stdout);calc();
    freopen("scape3.in","r",stdin);freopen("scape3.out","w",stdout);calc();
    freopen("scape4.in","r",stdin);freopen("scape4.out","w",stdout);calc();
    freopen("scape5.in","r",stdin);freopen("scape5.out","w",stdout);calc();
    freopen("scape6.in","r",stdin);freopen("scape6.out","w",stdout);calc();
    freopen("scape7.in","r",stdin);freopen("scape7.out","w",stdout);calc();
    freopen("scape8.in","r",stdin);freopen("scape8.out","w",stdout);calc();
    freopen("scape9.in","r",stdin);freopen("scape9.out","w",stdout);calc();
    return 0;
}
