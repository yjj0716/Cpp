#include <iostream>
using namespace std;

int main2()
{
	//��������;
	//1������ͨ��������ͳ����������ռ���ڴ��С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2������ͨ���������鿴�����׵�ַ
	cout << "�����׵�ַΪ��" << (int)arr << endl;
	cout << "�����е�һ��Ԫ�صĵ�ַΪ��" << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�صĵ�ַΪ��" << (int)&arr[1] << endl;

	//��������һ�����������ɽ��и�ֵ����
	//arr = 10;

	system("pause");

	return 0;
}