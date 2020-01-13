#include <iostream>
#include <vector>
#include<string>
using namespace std;
bool deal_tongpei(string tpc, string dpc)
{
	int len1 = tpc.size();
	int len2 = dpc.size();
	int i = 0;
	int j = 0;
	vector<vector<int>> v(len1 + 1, vector<int>(len2 + 1, 0));
	v[0][0] = 1;
	for (i=1;i<=len1;++i)
	{
		v[i][0] = 0;
	}
	for (i=1;i<=len2;++i)
	{
		v[0][i] = 0;
	}
	for (i=1;i<=len1;++i)
	{
		for (j=1;j<=len2;++j)
		{
			/* 先处理？ */
			if (tpc[i-1]=='?')
			{
				if (v[i-1][j-1]==1)
				{
					v[i][j] = 1;
				}
				else
				{
					v[i][j] = 0;
				}
			}
			else if (tpc[i-1]=='*')
			{

				if (v[i][j-1]||v[i-1][j])
				{
					v[i][j] = 1;
				}
				else
				{
					v[i][j] = 0;
				}
			}
			else
			{
				/* 普通字符 */
				if (tpc[i-1]==dpc[j-1] && v[i-1][j-1])
				{
					v[i][j] = 1;
				}
				else
				{
					v[i][j] = 0;
				}
			}
		}
	}
	return v[len1][len2];
}
int maincdsad()
{
	string tpc;
	string dpc;
	int a = 0;
	while (cin>>tpc>>dpc)
	{
		a=deal_tongpei(tpc, dpc);
		if (a)
		{
			cout<<"true"<<endl;
		}
		else
		{
			cout<<"false"<<endl;
		}
		tpc.clear();
		dpc.clear();
	}

	system("pause"); 
	return 0;
}