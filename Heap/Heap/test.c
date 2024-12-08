#define _CRT_SECURE_NO_WARNINGS 1

#include "heap.h"

int main()
{
	hp dui;
	hp_init(&dui);

	hp_push(&dui, 3);
	hp_push(&dui, 5);
	hp_push(&dui, 6);
	hp_push(&dui, 4);
	hp_push(&dui, 7);
	hp_push(&dui, 2);
	hp_push(&dui, 1);

	printf("%d\n", hp_top(&dui));

	hp_pop(&dui);
	printf("%d\n", hp_top(&dui));

	hp_pop(&dui);
	printf("%d\n", hp_top(&dui));

	hp_pop(&dui);
	printf("%d\n", hp_top(&dui));

	hp_pop(&dui);
	printf("%d\n", hp_top(&dui));

	hp_pop(&dui);
	printf("%d\n", hp_top(&dui));

	hp_pop(&dui);
	printf("%d\n", hp_top(&dui));

	hp_destroy(&dui);
	return 0;
}