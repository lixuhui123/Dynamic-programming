#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
	/**
	 *	正数数组中的最小不可组成和
	 *	输入：正数数组arr
	 *	返回：正数数组中的最小不可组成和
	 */
	int getFirstUnFormedNum(vector<int> arr, int len) {
		double add = 0;
		int  m_min=arr[0];
		int m_max;
		for (auto & i:arr)
		{
			add += i;
			if (i<m_min)
			{
				m_min = i;
			}
		}
		m_max = add;
		//得到数组所有遍历和


	}
};
int maindsadwQ()
{

	system("pause");
	return 0;
}