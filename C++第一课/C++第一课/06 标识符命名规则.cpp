#include <iostream>
using namespace std;

//标识符的命名规则
//1、标识符不可以是关键字
//2、标识符是由字母、数字、下划线构成
//3、标识符第一个字符只能是字母或下划线
//4、标识符是区分大小写的
int main6()
{
	//1、标识符不可以是关键字
	//int int = 10;

	//2、标识符是由字母、数字、下划线构成
	int abc = 10;
	int ___abc = 10;
	int ___abc123 = 10;

	//3、标识符第一个字符只能是字母或下划线
	//int 123abc = 10;

	//4、标识符是区分大小写的
	int aaa = 10;
	//cout << AAA << endl;
	//AAA 和 aaa不是同一个名称

	//建议：给变量取名的时候，最好能够做到见名知意
	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	cout << sum << endl;
	system("pause");

	return 0;
}