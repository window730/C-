#define _CRT_SECURE_NO_WARNINGS 1

#include "s_list.h"

int main()
{
	slt* plist = NULL;
	slt_push_front(&plist, 1);
	slt_push_front(&plist, 2);
	slt_push_front(&plist, 3);
	slt_push_front(&plist, 4);
	slt_push_front(&plist, 5);
	slt_push_front(&plist, 6);
	slt* find = slt_find(plist, 4);
	slt_erase_after(find);
	slt_print(plist);
	slt_destroy(&plist);
}