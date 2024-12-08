#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

//��ʼ��
void st_init(st* pst)
{
	assert(pst);
	pst->arr = NULL;
	pst->capacity = pst->top = 0;
}

//����
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

//�п�
bool st_is_empty(st* pst)
{
	assert(pst);
	return pst->top == 0;
}

//��ջ
void st_push(st* pst, st_data_type x)
{
	assert(pst);
	//�жϿռ��Ƿ��㹻
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

//��ջ
void st_pop(st* pst)
{
	assert(pst);
	assert(!st_is_empty(pst));
	pst->top--;
}

//ȡջ��
st_data_type st_top(st* pst)
{
	assert(!st_is_empty(pst));
	return pst->arr[pst->top - 1];
}

//��ЧԪ�ظ���
int st_size(st* pst)
{
	assert(pst);
	return pst->top;
}

