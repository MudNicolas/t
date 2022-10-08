#include<bits/stdc++.h> 
using namespace std;
int ans=0,la,lb,L[20],R[20];
int cmp(int *a,int *b,int l)
{
	for(int i=0;i<l;i++)
	{
		if(*(a+i)<*(b+i))return -1;
		if(*(a+i)>*(b+i))return 1;
	}
	return 0;
}
void count(int l)
{
	int s[20];
	for (int i=0;i<=9;i++)
	{
		for (int j=0;j<=9;j++)
		{
			if (j==i)continue;
			for (int k=0;k<l;k++)
			{
				for (int tmp=0;tmp<l;tmp++) s[tmp]=i;
				s[k]=j;
				if (s[0]==0)continue;
				if (la<l&&l<lb) ans++;
				else {
					if (l==la&&(cmp(L,s,l)>0)) continue;
					if (l==lb&&(cmp(s,R,l)>0)) continue;
					ans++;
				}
			}
		}
	}
}
int main()
{
	freopen("odo9.in","r",stdin);
	freopen("odo9.out","w",stdout);
	char A[20],B[20];
	cin>>A>>B;
	la=strlen(A);
	lb=strlen(B);
	for(int i=0;i<la;i++)L[i]=A[i]-'0';
	for(int i=0;i<lb;i++)R[i]=B[i]-'0';
	for(int i=la;i<=lb;i++)count(i);
	cout<<ans;
	return 0;
}
