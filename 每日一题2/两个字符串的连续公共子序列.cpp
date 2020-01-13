#include <iostream>
#include <string>
using namespace std;
int maincvfdsazd()
{
	string str1;
	string str2;
	int len1, chang;
	int len2, duan;


	while (cin >> str1 >> str2)
	{
		int start = 0;
		int maxlen = 0;
		int arr[100][100] = { 0 };
		len1 = str1.size();
		len2 = str2.size();
		 
		 
		for (int i = 1; i <= len1; i++)
		{
			for (int j = 1; j <= len2; ++j)
			{
				if (str1[i - 1] == str2[j - 1])/*  */
				{
					arr[i][j] = arr[i - 1][j - 1] + 1;
				}
				if (arr[i][j] > maxlen)
				{
					maxlen = arr[i][j];
					start = i - maxlen;
				}
			}
		}
		cout << str1.substr(start, maxlen ) << endl;

	}
	system("pause");
	return 0;
}