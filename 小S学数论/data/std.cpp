#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool s[1001];//��������Щ��
	int n,k,w=0;//w��¼�����˼�����
	cin>>n>>k;//����
	memset(s,true,sizeof(s));//д��������
	for(int i=2;i<=n;i++)//��û�л�������
	{
		if(s[i]==true)//���û�б�����
		{
			for(int j=i+i;j<=n;j+=i)//�����ı���
			{
				if(s[j]==true)//������ı���û������
				{
					w++;//�ֻ���һ����
					s[j]=false;//��������������
					if(w==k)//����Ѿ�����k����
					{
						cout<<j;//�����
						return 0;//����
					}
				}
			}
		}
	}
	return 0;//������
}
