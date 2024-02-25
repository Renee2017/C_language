#include <stdio.h>
int main()
{
	int day = 0;
	//输入
	scanf("%d", &day);
	if (1 == day)
		printf("星期1\n");
	else if (2 == day)
		printf("星期2\n");
	else if (3 == day)
		printf("星期3\n");
	else if (4 == day)
		printf("星期4\n");
	else if (5 == day)
		printf("星期5\n");
	else if (6 == day)
		printf("星期6\n");
	else if (7 == day)
		printf("星期天\n");
	else
		printf("输入错误\n");

	return 0;
}