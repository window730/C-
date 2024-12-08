#define _CRT_SECURE_NO_WARNINGS 1

#include "heap.h"

//初始化
void hp_init(hp* php)
{
	assert(php);
	php->arr = NULL;
	php->capcity = php->size = 0;
}

//销毁
void hp_destroy(hp* php)
{
	assert(php);
	if (php->arr)
	{
		free(php->arr);
	}
	php->arr = NULL;
	php->capcity = php->size = 0;
}

//交换
void swap(hp_date_type* x, hp_date_type* y)
{
	hp_date_type z = *x;
	*x = *y;
	*y = z;
}

//向上调整
void hp_adjust_up(hp_date_type* arr, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (arr[child] < arr[parent])
		{
			swap(&arr[child], &arr[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

//向下调整
void hp_adjust_down(hp_date_type* arr, int parent, int size)
{
	int child = 2 * parent + 1;
	while (child < size)
	{
		//找最小
		if (child + 1 < size && arr[child + 1] < arr[child])
		{
			child++;
		}
		//
		if (arr[child] < arr[parent])
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

//入堆
void hp_push(hp* php, hp_date_type x)
{
	assert(php);

	if (php->capcity == php->size)
	{
		int newcp = php->capcity == 0 ? 4 : 2 * php->capcity;
		hp_date_type* tmp = (hp_date_type*)realloc(php->arr, sizeof(hp_date_type) * newcp);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(1);
		}

		php->arr = tmp;
		php->capcity = newcp;
	}

	php->arr[php->size] = x;

	hp_adjust_up(php->arr, php->size);

	php->size++;
}

//出堆
void hp_pop(hp* php)
{
	assert(php && php->size);

	//交换堆顶和堆尾
	swap(&php->arr[0], &php->arr[php->size - 1]);
	php->size--;

	hp_adjust_down(php->arr, 0, php->size);
}

//取堆顶
hp_date_type hp_top(hp* php)
{
	assert(php && php->size);
	return php->arr[0];
}

//判空
bool hp_is_empty(hp* php)
{
	assert(php);
	return php->size == 0;
}

//元素个数
int hp_size(hp* php)
{
	assert(php);
	return php->size;
}