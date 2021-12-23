#include <iostream>
using namespace std;

int main()
{
	//宣言
	char moji;

	cout << "Hellowin" << endl;
	cout << "この中でオーバーマンでないものは？" << endl;
	cout << "a:ブリュンヒルデ b:アンダーゴレーム c:ランスロットル" << endl;
	cin >> moji;

	if (moji == 'c')
	{
		cout << "正解" << endl;
	}
	else if(moji =='a' || moji =='b')
	{
		cout << "残念" << endl;
	}
	else
	{
		cout << "キーが違います" << endl;
	}

	return 0;
}