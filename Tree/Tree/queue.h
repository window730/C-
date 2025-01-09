#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//typedef int que_date_type;
typedef struct binary_tree* que_date_type;

//������нڵ�ṹ
typedef struct queue_node
{
	que_date_type date;
	struct queue_node* next;

}que_node;

//������нṹ
typedef struct queue
{
	que_node* ptail;
	que_node* phead;
	int size;
} que;

//��ʼ������
void que_init(que* pq);
//���ٶ���
void que_destroy(que* pq);
//�����½ڵ�
que_node* que_buy_node(que_date_type x);
//�����п�
bool que_is_empty(que* pq);

//�����
void que_push(que* pq, que_date_type x);
//������
void que_pop(que* pq);

//ȡ��ͷԪ��
que_date_type que_front(que* pq);
//ȡ��βԪ��
que_date_type que_back(que* pq);
//��ȡ������ЧԪ�ظ���
int que_size(que* pq);