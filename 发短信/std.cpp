#include<cstdio>
#include<string>
using namespace std;
const string A[26]={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
char s[10005];
string ans; 
int main(){
	freopen("mob7.in","r",stdin);
	freopen("mob7.out","w",stdout);
    scanf("%s",s);
	int lst=-1;
    for (int i=0;s[i];i++){
        if (lst==A[s[i]-'a'][0]-'0') ans+="#";
        lst=A[s[i]-'a'][0]-'0',ans+=A[s[i]-'a'];
    }
    for (int i=0;ans[i];i++)
      if (ans[i]=='#') printf("#");else printf("%c",ans[i]);
    printf("\n");
    return 0;
}
