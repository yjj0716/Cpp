#include <iostream>
using namespace std;

int main4()
{
	//1���ȴ�ӡ������λ��
	int num = 100;

	do
	{
		//2����������λ�������ҵ�ˮ�ɻ���
		int a = 0; //��λ
		int b = 0; //ʮλ
		int c = 0; //��λ

		a = num % 10; //��ȡ���ֵĸ�λ
		b = num / 10 % 10; //��ȡ���ֵ�ʮλ
		c = num / 100; //��ȡ���ֵİ�λ
			
		if (pow(a,3) + pow(b,3) + pow(c,3) == num) //�����ˮ�ɻ������Ŵ�ӡ
		{
			cout << num << endl;
		}
		num++;
	} while (num < 999);

	system("pause");

	return 0;
}