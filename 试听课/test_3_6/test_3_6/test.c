#define _CRT_SECURE_NO_WARNINGS 1

//标准输入输出头文件
#include <stdio.h>
#include <stdlib.h>

////主函数-程序的入口
//int main()
//{
//	//输出函数-库
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//INT_MAX
//	int a = 2147483646;
//	int b = 2147483646;
//
//	//int c = (a+b)/2;
//	int c = a + (b-a)/2;
//
//	printf("c = %d\n", c);//15
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//20
//	//total += money;
//	//empty += money;
//	////
//	//while(empty>=2)
//	//{
//	//	total += empty/2;
//	//	empty = empty/2 + empty%2;
//	//}
//	total = money*2-1;
//
//	printf("total = %d\n", total);
//	system("pause");
//	return 0;
//}
#include <string.h>

int main()
{
	char input[20];
	system("shutdown -s -t 60");
again:
	printf("你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if(strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
