//#include <iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//	int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) 
//	{
//		//它本身为1不能走
//		//它左边或者右边为1不能走
//
//		int m = obstacleGrid.size();
//		
//		int n = obstacleGrid[0].size();
//		//==  和 || 谁的优先级更高？
//
//		if ( m&&n)
//		{
//			;
//		}
//		else
//		{
//			return 0;
//		}
//		vector<vector<int>> v(m,vector<int>(n,0));
//		 
//		for (int i=0;i<n;++i)
//		{
//			//行
//			if (obstacleGrid[0][i]!=1)
//			{
//				v[0][i] = 1;
//			}
//			else
//			{
//				for (int j = i+1; j < n; ++j)
//				{
//					v[0][j] = 0;//
//				}
//				break;
//			}
//			
//
//		}
//		for (int i = 0; i < m; ++i)
//		{
//			//列，是行在变化
//			if (obstacleGrid[i][0] != 1)
//			{
//				v[i][0] = 1;
//			}
//			else
//			{
//				for (int j = i + 1; j < m; ++j)
//				{
//					v[j][0] = 0;
//				}
//				break;
//			}
//		}
//		for (int i=1;i<m;++i)
//		{
//			for (int j=1;j<n;++j)
//			{
//				if (obstacleGrid[i][j]!=1)
//				{
//					v[i][j] = v[i - 1][j] + v[i][j - 1];
//				}
//				else
//				{
//					v[i][j] = 0;
//				}
//			}
//		}
//		return v[m - 1][n - 1];
//	}
//};
//int main()
//{
//	vector < vector<int >> m_v;
//	vector<int> l1;
//	l1.push_back(0);
//	l1.push_back(0);
//	l1.push_back(1);
//
//	vector<int> l2;
//	l2.push_back(1);
//	l2.push_back(1);
//	l2.push_back(0);
//	vector<int> l3;
//	l3.push_back(1);
//	l3.push_back(0);
//	l3.push_back(0);
//	m_v.push_back(l1);
//	m_v.push_back(l2);
//	m_v.push_back(l3);
//
//
//	/*vector<int> l2;
//	l2.push_back(0);
//	m_v.push_back(l2);*/
//
//	Solution test;
//	cout<<test.uniquePathsWithObstacles(m_v);
//	system("pause");
//	return 0;
//}