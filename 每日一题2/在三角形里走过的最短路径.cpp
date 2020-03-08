//#include<iostream>
//#include <vector>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//	int minimumTotal(vector<vector<int> > &triangle) 
//	{
//		/*int add = triangle[0][0];
//		int len = triangle.size();
//		int tmp = 0;
//		int j = 0;
//		for (int i=0;i<len;++i)
//		{
//			if (triangle[i + 1][j] > triangle[i + 1][j + 1])
//			{
//				tmp = triangle[i + 1][j + 1];
//				j = j + 1;
//			}
//			else
//			{
//				tmp = triangle[i + 1][j];
//				j = j;
//			}
//
//			add += tmp;
//
//
//		}
//
//		return add;*/
//
//		vector<vector<int>> minPath(triangle);//拷贝构造，用于存储当前的最短路径
//		for (int i=1;i<triangle.size();++i)
//		{
//			for (int j=0;j<=i;++j)
//			{
//				if (j==0)
//				{
//					//左边第一列，、、、、
//					minPath[i][j] = triangle[i][0] + minPath[i - 1][0];
//				}
//				else if (j==i)
//				{
//					//右边最后一列
//					minPath[i][j] = minPath[i - 1][j - 1] + triangle[i][i];
//
//				}
//				else
//				{
//					minPath[i][j] = min(minPath[i - 1][j], minPath[i - 1][j - 1]) + triangle[i][j];
//				}
//
//			}
//		}
//
//		int row = triangle.size();
//		int allMin = minPath[row - 1][0];
//		for (int i=0;i<row;++i)
//		{
//			allMin = min(allMin, minPath[row - 1][i]);
//		}
//		return allMin;
//
//	}
//
//};
//
//int main()
//{
//	vector < vector<int >> m_v ;
//	vector<int> l1;
//	l1.push_back(-1);
//	vector<int> l2;
//	l2.push_back(2);
//	l2.push_back(3);
//	vector<int> l3;
//	l3.push_back(1);
//	l3.push_back(-1);
//	l3.push_back(-3);
//	m_v.push_back(l1);
//	m_v.push_back(l2);
//	m_v.push_back(l3);
//
//	Solution test;
//	cout<<test.minimumTotal(m_v);
//
//
//
//	 
//	system("pause");
//	return 0;
//}