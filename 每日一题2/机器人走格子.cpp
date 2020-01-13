//#include <iostream>
//#include<vector>
//using namespace std;
////与下标严密相关，
//class Solution 
//{
//public:
//	int uniquePaths(int m, int n) 
//	{
//		vector<vector<int>> v(m+1,vector<int>(n+1,0));
//		v[0][1] = 1;
//		for (int i=1;i<=m;++i)
//		{
//			for (int j=1;j<=n;++j)
//			{
//				v[i][j] = v[i - 1][j] + v[i][j - 1];
//
//			}
//		}
//
//		return v[m][n];
//
//	}
//};
//int main()
//{
//	Solution test;
//	cout<<test.uniquePaths(1, 2);
//	system("pause"); 
//	return 0;
//}