#define _CRT_SECURE_NO_WARNINGS 1

#include "stack.h"

int main()
{
	st zhan;
	st_init(&zhan);
	st_push(&zhan, 1);
	st_push(&zhan, 2);
	st_push(&zhan, 3);
	st_push(&zhan, 4);
	st_push(&zhan, 5);
	st_push(&zhan, 6);
	
	printf("%d\n", st_top(&zhan));
	st_pop(&zhan);
	printf("%d\n", st_top(&zhan));
	st_pop(&zhan);
	printf("%d\n", st_top(&zhan));
	st_pop(&zhan);

	printf("有%d个元素\n", st_size(&zhan));


	printf("%d\n", st_top(&zhan));
	st_pop(&zhan);
	printf("%d\n", st_top(&zhan));
	st_pop(&zhan);
	printf("%d\n", st_top(&zhan));
	st_pop(&zhan);

	printf("有%d个元素\n", st_size(&zhan));

	st_destroy(&zhan);

	return 0;
}