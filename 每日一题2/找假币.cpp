#include <iostream>
using namespace std;
int maincdsaacwa()
{
	int num;
	//Õæ¶ñĞÄ
	while (cin>>num&&num)
	{
		int add = 0;
		while (num>1)
		{
			add++;
			num = num / 3 + 1 - (num % 3 ^ 3) / 3;
		}
		cout << add <<endl;
	}
	system("pause"); 
	return 0;
}