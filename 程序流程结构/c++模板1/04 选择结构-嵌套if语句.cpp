#include <iostream>
using namespace std;

int main4()
{
	//选择结构 多条件if语句
	/*
	提示用户输入一个高考考试分数，根据分数做如下判断
	分数如果大于600分视为考上一本，大于500考上二本，大于400考上三本，其余视为未考上本科；
	在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。
	*/
		


	//1、提示输入高考分数
	int score = 0;
	cout << "请输入考试分数：" << endl;
	cin >> score;

	//2、显示高考分数
	cout << "您输入的考试分数为：" << score << endl;

	//3、判断
	//如果大于600 一本
		// 大于700 北大
		// 大于650 清华
		// 其余    人大
	//如果大于500 二本
	//如果大于400 三本
	//其余情况，  未考上本科
	if (score > 600)
	{
		cout << "恭喜您考入一本大学" << endl;
		if (score > 700)
		{
			cout << "您能考入北京大学" << endl;
		}
		else if (score > 650)
		{
			cout << "您能考入清华大学" << endl;
		}
		else
		{
			cout << "您能考入人民大学" << endl;
		}
		
	}
	else if (score > 500) //第二个条件判断
	{
		cout << "恭喜您考入二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考入三本大学" << endl;
	}
	else
	{
		cout << "未考上本科，请再接再厉" << endl;
	}

	system("pause");

return 0;
}