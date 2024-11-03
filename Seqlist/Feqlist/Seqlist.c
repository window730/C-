#define _CRT_SECURE_NO_WARNINGS 1
#include "Seqlist.h"

//��ʼ��˳���
void sl_init(sl* ps)
{
	ps->arr = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

//����˳���
void sl_destroy(sl* ps)
{
	if (ps->arr)
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

//����ڴ�
void sl_check_capacity(sl* ps)
{
	if (ps->size >= ps->capacity)
	{
		ps->capacity = (ps->capacity == 0 ? 4 : ps->capacity * 2);
		sl_dtype* tmp = (sl_dtype*)realloc(ps->arr, (ps->capacity) * sizeof(sl_dtype));
		if (tmp == NULL)
		{
			perror("�ڴ濪��ʧ��!!");
			exit(1);
		}
		ps->arr = tmp;
	}
}

//β����������
void sl_push_back(sl* ps, sl_dtype x)
{
	assert(ps);
	sl_check_capacity(ps);
	ps->arr[ps->size++] = x;
}


//ͷ����������
void sl_push_front(sl* ps, sl_dtype x)
{
	assert(ps);
	sl_check_capacity(ps);
	for (int i = ps->size++; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
}

//β��ɾ������
void sl_pop_back(sl* ps)
{
	assert(ps);
	if (ps->size == 0)
	{
		return;
	}
	ps->size--;
}

//ͷ��ɾ������
void sl_pop_front(sl* ps)
{
	assert(ps);
	if (ps->size == 0)
	{
		return;
	}
	for (int i = 0; i < (ps->size)-1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//�м��������
void sl_push_insert(sl* ps, sl_dtype x, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	sl_check_capacity(ps);
	for (int i = ps->size; i > pos; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}

//�м�ɾ������
void sl_pop_erase(sl* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	for (int i = pos; i < ps->size-1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//��������
int sl_find(sl* ps, sl_dtype x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}
