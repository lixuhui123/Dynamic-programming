#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	/**
	 *  奇数位上都是奇数或者偶数位上都是偶数
	 *  输入：数组arr，长度大于2
	 *  len：arr的长度
	 *  将arr调整成奇数位上都是奇数或者偶数位上都是偶数
	 */
	void oddInOddEvenInEven(vector<int>& arr, int len) 
	{
	 
		int i = 0, j = 1;
		while (i < len&&j < len) {
			if (arr[i] % 2 != 0 && arr[j] % 2 == 0) 
			{
				swap(arr[i], arr[j]);
				i += 2;
				j += 2;
				continue;
			}
			if (arr[i] % 2 == 0)
			{
				i += 2;
			}
			if (arr[j] % 2 != 0)
			{
				j += 2;
			}
		}
	}
	/*  0 1 2 3 4 5 6 7 8 9 10
	   [7,7,9,5,1,6,7,9,3,2,6]
       对应输出应该为:
       [6,7,6,7,1,5,7,9,3,9,2]
       你的输出为:
       [6,7,2,5,6,7,7,9,3,9,1] */
	 
};
int mainewaedQ()
{
	vector<int> v;
	int tmp;
	int a;
	while (cin>>tmp)
	{
		for (int i=0;i<tmp;++i)
		{
			cin >> a;
			v.push_back(a);
		}
		Solution test;
		test.oddInOddEvenInEven(v, tmp);
		for (auto & i :v)
		{
			cout << i << ' ';
		}

	}
	
	system("pause"); 
	return 0;
}