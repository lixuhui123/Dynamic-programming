#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
	/**
	 *	���������е���С������ɺ�
	 *	���룺��������arr
	 *	���أ����������е���С������ɺ�
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
		//�õ��������б�����


	}
};
int maindsadwQ()
{

	system("pause");
	return 0;
}