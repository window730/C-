#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

int main()
{
	ls* plist = NULL;
	list_init(&plist);
	list_push_front(plist, 1);
	list_push_front(plist, 2);
	list_push_front(plist, 3);
	list_push_front(plist, 4);
	list_print(plist);
	ls* p = list_find(plist, 1);
	list_erase(p);
	list_print(plist);
	list_destroy(&plist);
	return 0;
}