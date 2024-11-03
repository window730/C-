#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

//�ض�����������
typedef int list_date_type;

//����˫������ṹ��
typedef struct ListNode
{
	list_date_type date;
	struct ListNode* prev;
	struct ListNode* next;
}ls;

//�����½ڵ�
ls* list_buy_node(list_date_type x);
//�����ʼ��
void list_init(ls** pphead);
//��ӡ˫������
void list_print(ls* phead);
//�ж������Ƿ�Ϊ��
bool list_is_empty(ls* phead);
//��������
void list_destroy(ls** pphead);

//����β��
void list_push_back(ls* phead, list_date_type x);
//����ͷ��
void list_push_front(ls* phead, list_date_type x);
//ָ��λ��(pos)֮�����
void list_insert(ls* pos, list_date_type x);

//����βɾ
void list_pop_back(ls* phead);
//����ͷɾ
void list_pop_front(ls* phead);
//ɾ��ָ��λ��(pos)
void list_erase(ls* pos);

//���ҽڵ�
ls* list_find(ls* phead, list_date_type x);