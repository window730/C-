#define _CRT_SECURE_NO_WARNINGS 1
#include "Seqlist.h"

int main()
{
	sl s;
	sl_init(&s);
	sl_push_front(&s, 1);
	sl_push_front(&s, 2);
	sl_push_front(&s, 3);
	sl_push_front(&s, 4);
	sl_push_front(&s, 5);
	sl_push_front(&s, 6);
	sl_push_insert(&s, 99, 0);
	sl_push_insert(&s, 88, s.size);
	sl_push_insert(&s, 99, 3);
	printf("%d\n",sl_find(&s, 5));
	printf("%d\n",sl_find(&s, 99));
	printf("%d\n",sl_find(&s, 77));




	sl_destroy(&s);
	return 0;
}