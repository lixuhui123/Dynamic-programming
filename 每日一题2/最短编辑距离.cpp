#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/* 它每次只对一行文本做删除一个字符、插入一个字符或替换一个字符三种操作 */
/* 深入理解题意，填表-》定义初始状态，公式 */
int deal_shortest(string str1, string str2)
{
	int len1 = str1.size();
	int len2 = str2.size();
	int i = 0;
	int j = 0;
	vector<vector<int>> m_v(len1 + 1, vector<int>(len2 + 1, 0));//生成二维数组用于填表
	/* 设定初始值 ,vector一旦设定存储空间那么它就成了C语言中的数组，存在边界*/
	m_v[0][0] = 0;
	for (i = 1; i <= len1; ++i)
	{
		m_v[i][0] = i;
	}
	for (i = 1; i <= len2; ++i)
	{
		m_v[0][i] = i;
	}
	for (i = 1; i <= len1; ++i)
	{
		for (j = 1; j <= len2; ++j)
		{
			if (str1[i - 1] == str2[j - 1])
			{
				m_v[i][j] = m_v[i - 1][j - 1];
			}
			else
			{
				m_v[i][j] = min(m_v[i][j - 1], min(m_v[i - 1][j - 1], m_v[i - 1][j])) + 1;
			}
		}
	}
	return m_v[len1][len2];
}
int main()
{
	string str1;
	string str2;
	while (cin >> str1 >> str2)
	{
		cout << deal_shortest(str1, str2) << endl;
		str1.clear();
		str2.clear();
	}
	system("pause");
	return 0;
}