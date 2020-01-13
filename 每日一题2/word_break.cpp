//#include <iostream>
//#include <string>
//#include <unordered_set>
//using namespace std;
// 
//class Solution {
//public:
//	bool wordBreak(string s, unordered_set<string> &dict) 
//	{
//		int len = s.size();
//		//初始化，F(0)=true；
//		vector<bool> canBreak(len + 1, false);
//		canBreak[0] = true;
//		for (int i = 1; i <= len; ++i)
//		{
//			for (int j = i - 1; j >= 0; --j)
//			{
//				//F(i)  j < i && F(j) && [j + 1, i]是否在词典中
//				if (canBreak[j])
//				{
//					if (dict.find(s.substr(j, i - j)) != dict.end())
//					{
//						canBreak[i] = true;
//						break;
//					}
//				}
//			}
//		}
//		return canBreak[len];
//	}
//};
//
//int main()
//{
//
//
//
//	string s = "leetcode";
//	unordered_set<string> data = { "leet","code" };
//	Solution test;
//	cout<<test.wordBreak(s, data);
//	system("pause");
//
//	return 0;
//}