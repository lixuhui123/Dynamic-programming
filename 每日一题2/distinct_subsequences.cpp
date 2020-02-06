#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	int numDistinct(string S, string T) 
	{
		if (S.empty())
		{
			return 0;
		}
		if (T.empty())
		{
			return 1;
		}
		int len1 = S.size();
		int len2 = T.size();
		vector<vector<int>> numDis(len1 + 1, vector<int>(len2+1, 0));
		for (int i=0;i<=len1;++i)
		{
			numDis[i][0] = 1;
		}
		for (int i=1;i<=len1;++i)
		{
			for (int j=1;j<=len2;++j)
			{
				if (S[i-1]==T[j-1])
				{
					numDis[i][j] = numDis[i - 1][j] + numDis[i - 1][j - 1];
				}
				else
				{
					numDis[i][j] = numDis[i - 1][j];
				}
			}
			return numDis[len1][len2];
		}






	}
};
int main()
{
	
	system("pause"); 
	return 0;
}