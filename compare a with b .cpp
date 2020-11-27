//if0
//题目名称：
////打印3的倍数的数
////题目内容：
////写一个代码打印1 - 100之间所有3的倍数的数字
//end if


#include <stdio.h>
int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf(" % d ", i);
		}
		printf(" \n ");
	}
	return 0;
 }

