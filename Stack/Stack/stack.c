#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

//初始化
void st_init(st* pst)
{
	assert(pst);
	pst->arr = NULL;
	pst->capacity = pst->top = 0;
}

//销毁
void st_destroy(st* pst)
{
	assert(pst);
	if (pst->arr)
	{
		free(pst->arr);
	}
	pst->arr = NULL;
	pst->capacity = pst->top = 0;

}

//判空
bool st_is_empty(st* pst)
{
	assert(pst);
	return pst->top == 0;
}

//入栈
void st_push(st* pst, st_data_type x)
{
	assert(pst);
	//判断空间是否足够
	if (pst->capacity == pst->top)
	{
		int newcap = pst->capacity == 0 ? 4 : 2 * pst->capacity;
		st_data_type* tmp = realloc(pst->arr, newcap * sizeof(st_data_type));
		if (tmp == NULL)
		{
			perror("malloc fail!");
			exit(1);
		}
		pst->arr = tmp;
		pst->capacity = newcap;
	}
	pst->arr[pst->top] = x;
	pst->top++;
}

//出栈
void st_pop(st* pst)
{
	assert(pst);
	assert(!st_is_empty(pst));
	pst->top--;
}

//取栈顶
st_data_type st_top(st* pst)
{
	assert(!st_is_empty(pst));
	return pst->arr[pst->top - 1];
}

//有效元素个数
int st_size(st* pst)
{
	assert(pst);
	return pst->top;
}

