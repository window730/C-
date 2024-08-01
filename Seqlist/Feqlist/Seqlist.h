#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int sl_dtype;

typedef struct Seqlist
{
	sl_dtype* arr;
	int size;
	int capacity;
} sl;

//��ʼ��
void sl_init(sl* ps);

//����
void sl_destroy(sl* ps);

//����ڴ�
void sl_check_capacity(sl* ps);

//��������
void sl_push_back(sl* ps, sl_dtype x);
void sl_push_front(sl* ps, sl_dtype x);
void sl_push_insert(sl* ps, sl_dtype x, int pos);

//ɾ������
void sl_pop_back(sl* ps);
void sl_pop_front(sl* ps);
void sl_pop_erase(sl* ps, int pos);

//��������
int sl_find(sl* ps, sl_dtype x);


