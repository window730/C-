#define _CRT_SECURE_NO_WARNINGS 1

#include "queue.h"

int main()
{
	que dui;
	que_init(&dui);

	que_push(&dui, 1);
	printf("��ͷ��%d  ��β��%d\n", que_front(&dui), que_back(&dui));
	que_push(&dui, 2);
	printf("��ͷ��%d  ��β��%d\n", que_front(&dui), que_back(&dui));
	que_push(&dui, 3);
	printf("��ͷ��%d  ��β��%d\n", que_front(&dui), que_back(&dui));
	que_push(&dui, 4);
	printf("��ͷ��%d  ��β��%d\n", que_front(&dui), que_back(&dui));

	printf("��ЧԪ�ظ�����%d\n", que_size(&dui));

	que_push(&dui, 5);
	printf("��ͷ��%d  ��β��%d\n", que_front(&dui), que_back(&dui));
	que_push(&dui, 6);
	printf("��ͷ��%d  ��β��%d\n", que_front(&dui), que_back(&dui));
	que_push(&dui, 7);
	printf("��ͷ��%d  ��β��%d\n", que_front(&dui), que_back(&dui));


	que_pop(&dui);
	printf("��ͷ��%d  ��β��%d\n", que_front(&dui), que_back(&dui));
	que_pop(&dui);
	printf("��ͷ��%d  ��β��%d\n", que_front(&dui), que_back(&dui));
	que_pop(&dui);
	printf("��ͷ��%d  ��β��%d\n", que_front(&dui), que_back(&dui));

	printf("��ЧԪ�ظ�����%d\n", que_size(&dui));

	que_pop(&dui);
	printf("��ͷ��%d  ��β��%d\n", que_front(&dui), que_back(&dui));
	que_pop(&dui);
	printf("��ͷ��%d  ��β��%d\n", que_front(&dui), que_back(&dui));


	que_pop(&dui);
	printf("��ͷ��%d  ��β��%d\n", que_front(&dui), que_back(&dui));
	printf("��ЧԪ�ظ�����%d\n", que_size(&dui));

	que_destroy(&dui);

	return 0;
}
