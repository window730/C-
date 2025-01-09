#define _CRT_SECURE_NO_WARNINGS 1

#include "sort.h"

void print_arr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test(int j)
{
	srand(time(j));
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 10;
	}
	print_arr(arr, 10);

	//insert_sort(arr, 10);
	//bubble_sort(arr, 10);
	//shell_sort(arr, 10);
	//select_sort(arr, 10);
	//heap_sort(arr, 10);
	//quick_sort(arr, 10);
	merge_sort(arr, 10);

	print_arr(arr, 10);
}

int main()
{
	test(0);
	return 0;
}