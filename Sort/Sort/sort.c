#define _CRT_SECURE_NO_WARNINGS 1

#include "sort.h"

void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

//√∞≈›≈≈–Ú
void bubble_sort(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

//≤Â»Î≈≈–Ú
void insert_sort(int* arr, int size)
{
	int i = 0;
	while (i < size - 1)
	{
		int pcur = i;
		int tmp = arr[i + 1];
		while (pcur >= 0)
		{
			if (tmp < arr[pcur])
			{
				arr[pcur + 1] = arr[pcur];
				pcur--;
			}
			else
			{
				break;
			}
		}
		arr[pcur + 1] = tmp;
		i++;
	}
}

//œ£∂˚≈≈–Ú
void shell_sort(int* arr, int size)
{
	int gap = size;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		int i = 0;
		while (i < size - gap)
		{
			int pcur = i;
			int tmp = arr[i + gap];

			while (pcur >= 0)
			{
				if (tmp < arr[pcur])
				{
					arr[pcur + gap] = arr[pcur];
					pcur -= gap;
				}
				else
				{
					break;
				}
			}

			arr[pcur + gap] = tmp;
			i++;
		}
	}
}

//—°‘Ò≈≈–Ú
void select_sort(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		swap(&arr[i], &arr[min]);
	}
}

//œÚœ¬µ˜’˚
void adjust_down(int* arr, int parent, int size)
{
	int child = 2 * parent + 1;
	while (child < size)
	{
		
		if (child + 1 < size && arr[child + 1] > arr[child])
		{
			child++;
		}
		
		if (arr[child] > arr[parent])
		{
			swap(&arr[child], &arr[parent]);
			parent = child;
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}
}

//∂—≈≈–Ú
void heap_sort(int* arr, int size)
{
	for (int i = (size - 1 - 1) / 2; i >= 0; i--)
	{
		adjust_down(arr, i, size);
	}

	int end = size - 1;
	while (end > 0)
	{
		swap(&arr[0], &arr[end]);
		adjust_down(arr, 0, end);
		end--;
	}
}

int quick_sort_findmid(int* arr, int left, int right)
{
	int mid = left++;
	while (left <= right)
	{
		while (arr[left] < arr[mid])
		{
			left++;
		}

		while (arr[right] > arr[mid])
		{
			right--;
		}

		if (left <= right)
		{
			swap(&arr[left++], &arr[right--]);
		}
	}
	swap(&arr[right], &arr[mid]);
	return right;
}

void quick_sort_recursive(int* arr, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int mid = quick_sort_findmid(arr, left, right);

	quick_sort_recursive(arr, left, mid - 1);
	quick_sort_recursive(arr, mid + 1, right);
}

//øÏ≈≈
void quick_sort(int* arr, int size)
{
	quick_sort_recursive(arr, 0, size - 1);
}

//
void merge_sort_recursive(int* arr, int left, int right, int* tmp)
{
	if (left >= right)
	{
		return;
	}

	int mid = (left + right) / 2;

	merge_sort_recursive(arr, left, mid, tmp);

	merge_sort_recursive(arr, mid + 1, right, tmp);

	int b1 = left;
	int e1 = mid;
	int b2 = mid + 1;
	int e2 = right;
	int index = b1;

	while (b1 <= e1 && b2 <= e2)
	{
		if (arr[b1] < arr[b2])
		{
			tmp[index++] = arr[b1++];
		}
		else
		{
			tmp[index++] = arr[b2++];
		}
	}

	while (b1 <= e1)
	{
		tmp[index++] = arr[b1++];
	}

	while (b2 <= e2)
	{
		tmp[index++] = arr[b2++];
	}

	for (int i = left; i < right; i++)
	{
		arr[i] = tmp[i];
	}
}

//πÈ≤¢
void merge_sort(int* arr, int size)
{
	int* tmp = (int*)malloc(sizeof(int) * size);

	merge_sort_recursive(arr, 0, size - 1, tmp);

	free(tmp);
	tmp = NULL;
}