#define _CRT_SECURE_NO_WARNINGS 1
#include "Seqlist.h"

int main()
{
	//创建并定义顺序表
	sl score;
	sl_init(&score);
	//尾插数据 73，90，95，87，100，80
	sl_push_back(&score, 73);
	sl_push_back(&score, 90);
	sl_push_back(&score, 95);
	sl_push_back(&score, 87);
	sl_push_back(&score, 100);
	sl_push_back(&score, 80);
	//打印顺序表
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", score.arr[i]);
	}
	//查找数据90
	printf("\n90在数组的下标为%d的位置\n",sl_find(&score, 90));
	//销毁顺序表 防止内存泄露
	sl_destroy(&score);
	return 0;
}