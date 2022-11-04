#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool s[1001];//来存下这些数
	int n,k,w=0;//w记录划掉了几个数
	cin>>n>>k;//输入
	memset(s,true,sizeof(s));//写下所有数
	for(int i=2;i<=n;i++)//找没有划掉的数
	{
		if(s[i]==true)//如果没有被划掉
		{
			for(int j=i+i;j<=n;j+=i)//找它的倍数
			{
				if(s[j]==true)//如果它的倍数没被划掉
				{
					w++;//又划掉一个数
					s[j]=false;//现在它被划掉了
					if(w==k)//如果已经划掉k个数
					{
						cout<<j;//输出答案
						return 0;//结束
					}
				}
			}
		}
	}
	return 0;//别忘了
}
