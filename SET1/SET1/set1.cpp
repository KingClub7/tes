#include <iostream>
using namespace std;

int main()
{
	//�錾
	char moji;

	cout << "Hellowin" << endl;
	cout << "���̒��ŃI�[�o�[�}���łȂ����̂́H" << endl;
	cout << "a:�u�������q���f b:�A���_�[�S���[�� c:�����X���b�g��" << endl;
	cin >> moji;

	if (moji == 'c')
	{
		cout << "����" << endl;
	}
	else if(moji =='a' || moji =='b')
	{
		cout << "�c�O" << endl;
	}
	else
	{
		cout << "�L�[���Ⴂ�܂�" << endl;
	}

	return 0;
}