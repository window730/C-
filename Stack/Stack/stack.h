#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int st_data_type;

//����ջ�ṹ
typedef struct stack 
{
	st_data_type* arr;
	int capacity; //ջ�ռ��С
	int top;//ջ��
} st;

//ջ��ʼ��
void st_init(st* pst);
//ջ����
void st_destroy(st* pst);
//ջ�п�
bool st_is_empty(st* pst);

//��ջ
void st_push(st* pst, st_data_type x);
//��ջ
void st_pop(st* pst);
//ȡջ��Ԫ��
st_data_type st_top(st* pst);

//��ȡջ��ЧԪ�ظ���
int st_size(st* pst);