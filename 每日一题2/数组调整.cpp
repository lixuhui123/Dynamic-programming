#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	/**
	 *  ����λ�϶�����������ż��λ�϶���ż��
	 *  ���룺����arr�����ȴ���2
	 *  len��arr�ĳ���
	 *  ��arr����������λ�϶�����������ż��λ�϶���ż��
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
       ��Ӧ���Ӧ��Ϊ:
       [6,7,6,7,1,5,7,9,3,9,2]
       ������Ϊ:
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