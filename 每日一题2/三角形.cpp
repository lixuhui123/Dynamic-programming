#include <iostream>
#include<vector>
#include <sstream>
#include <string>
using namespace std;
int mainfreafef()
{
	vector<double> m_v;
	string line;
	double tmp;
	while (getline(cin,line))
	{
		istringstream iss(line);
		while (iss>>tmp)
		{
			m_v.push_back(tmp);
		}
		 /* �������ж�������������֮�ʹ��ڵ����� */
		if ((m_v[0]+m_v[1] > m_v[2]) && 
			(m_v[0]+m_v[2]>m_v[1]) && 
			(m_v[1]+m_v[2]>m_v[0]))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}

		m_v.clear();
	}
	system("pause"); 
	return 0;
}