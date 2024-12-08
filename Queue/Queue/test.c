#define _CRT_SECURE_NO_WARNINGS 1

#include "queue.h"

int main()
{
	que dui;
	que_init(&dui);

	que_push(&dui, 1);
	printf("队头是%d  队尾是%d\n", que_front(&dui), que_back(&dui));
	que_push(&dui, 2);
	printf("队头是%d  队尾是%d\n", que_front(&dui), que_back(&dui));
	que_push(&dui, 3);
	printf("队头是%d  队尾是%d\n", que_front(&dui), que_back(&dui));
	que_push(&dui, 4);
	printf("队头是%d  队尾是%d\n", que_front(&dui), que_back(&dui));

	printf("有效元素个数是%d\n", que_size(&dui));

	que_push(&dui, 5);
	printf("队头是%d  队尾是%d\n", que_front(&dui), que_back(&dui));
	que_push(&dui, 6);
	printf("队头是%d  队尾是%d\n", que_front(&dui), que_back(&dui));
	que_push(&dui, 7);
	printf("队头是%d  队尾是%d\n", que_front(&dui), que_back(&dui));


	que_pop(&dui);
	printf("队头是%d  队尾是%d\n", que_front(&dui), que_back(&dui));
	que_pop(&dui);
	printf("队头是%d  队尾是%d\n", que_front(&dui), que_back(&dui));
	que_pop(&dui);
	printf("队头是%d  队尾是%d\n", que_front(&dui), que_back(&dui));

	printf("有效元素个数是%d\n", que_size(&dui));

	que_pop(&dui);
	printf("队头是%d  队尾是%d\n", que_front(&dui), que_back(&dui));
	que_pop(&dui);
	printf("队头是%d  队尾是%d\n", que_front(&dui), que_back(&dui));


	que_pop(&dui);
	printf("队头是%d  队尾是%d\n", que_front(&dui), que_back(&dui));
	printf("有效元素个数是%d\n", que_size(&dui));

	que_destroy(&dui);

	return 0;
}
