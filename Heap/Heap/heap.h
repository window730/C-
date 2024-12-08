#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>


//
typedef int hp_date_type;

//�ѽṹ����(С��)
typedef struct heap
{
	hp_date_type* arr;
	int size;
	int capcity;
} hp;

//��������
void swap(hp_date_type* x, hp_date_type* y);

//�ѳ�ʼ��
void hp_init(hp* php);
//������
void hp_destroy(hp* php);

//�����ϵ���
void hp_adjust_up(hp_date_type* arr, int child);
//�����µ���
void hp_adjust_down(hp_date_type* arr, int parent, int size);

//���
void hp_push(hp* php, hp_date_type x);
//����
void hp_pop(hp* php);

//ȡ�Ѷ�Ԫ��
hp_date_type hp_top(hp* php);
//�ж϶��Ƿ�Ϊ��
bool hp_is_empty(hp* php);
//������ЧԪ�ظ���
int hp_size(hp* php);