#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution 
{
public:
	int minPathSum(vector<vector<int> > &grid) 
	{
		//先算出第一行和第一列的特殊的
		int row = grid.size();//行
		int len = grid[0].size();//列
		int i = 0;
		int j = 0;
		vector<vector<int>> arry(row, vector<int>(len, 0));
		arry[0][0] = grid[0][0];
		int tmp=grid[0][0];
		for ( i=1;i<len;++i)
		{
			//行
			tmp= tmp+grid[0][i];
			arry[0][i] = tmp;
		}
		tmp = grid[0][0];
		for ( i=1;i<row;++i)
		{
			//列
			
			tmp = tmp + grid[i][0];
			arry[i][0] = tmp;
		}

		/*for (auto &e : arry[0])
		{
			cout << e << endl;
		}
		for (auto &e : arry[2])
		{
			cout << e << endl;
		}*/
		//取上面和左面的最小值，加上它自己。
		for ( i=1;i<row;++i )
		{
			for (j=1;j<len;++j)
			{
				arry[i][j] = min(arry[i - 1][j], arry[i][j - 1]) + grid[i][j];
			}
		}

		return arry[row - 1][len - 1];
	}
};

int main()
{
	vector < vector<int >> m_v;
	vector<int> l1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(5);

	vector<int> l2;
	l2.push_back(3);
	l2.push_back(2);
	l2.push_back(1);
	/*vector<int> l3;
	l3.push_back(1);
	l3.push_back(2);
	l3.push_back(6);*/
	m_v.push_back(l1);
	m_v.push_back(l2);
	//m_v.push_back(l3);

	Solution test;
	cout<<test.minPathSum(m_v);
	system("pause");
	return 0;
}