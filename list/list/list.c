#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

//�����½ڵ�
ls* list_buy_node(list_date_type x)
{
	//���ٿռ�
	ls* newnode = (ls*)malloc(sizeof(ls));
	if (newnode == NULL)
	{
		perror("�ռ俪��ʧ��");
		exit(1);
	}
	//�洢���� ǰ��ָ��ָ������
	newnode->date = x;
	newnode->prev = newnode->next = newnode;
	return newnode;
}

//��ʼ��
void list_init(ls** pphead)
{
	//�����ڱ�λ
	*pphead = list_buy_node(-1);
}

//��ӡ
void list_print(ls* phead)
{
	ls* pcur = phead->next;
	while (pcur != phead)
	{
		printf("%d->", pcur->date);
		pcur = pcur->next;
	}
	printf("NULL\n");
}

//�ж������Ƿ�Ϊ��
bool list_is_empty(ls* phead)
{
	assert(phead);
	return phead->next == phead;
}

//����
void list_destroy(ls** pphead)
{
	assert(pphead && *pphead);
	ls* pcur = (*pphead)->next;
	//�������� �������
	while (pcur != *pphead)
	{
		ls* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	//�����ڱ�λ
	free(*pphead);
	*pphead = NULL;
}

//β��
void list_push_back(ls* phead, list_date_type x)
{
	assert(phead);
	//�����½ڵ�
	ls* new = list_buy_node(x);
	//�ı�ڵ�ָ����ڱ�λָ��
	new->prev = phead->prev;
	new->next = phead;
	phead->prev->next = new;
	phead->prev = new;
}

//ͷ��
void list_push_front(ls* phead, list_date_type x)
{
	assert(phead);
	//�����½ڵ�
	ls* new = list_buy_node(x);
	//�ı�ڵ�ָ����ڱ�λָ��
	new->prev = phead;
	new->next = phead->next;
	phead->next->prev = new;
	phead->next = new;
}

//ָ��λ��(pos)֮�����
void list_insert(ls* pos, list_date_type x)
{
	assert(pos);
	//�����½ڵ�
	ls* new = list_buy_node(x);
	//�ı�ڵ�ָ��
	new->prev = pos;
	new->next = pos->next;
	pos->next->prev = new;
	pos->next = new;
}

//βɾ
void list_pop_back(ls* phead)
{
	//����Ϊ��
	assert(!list_is_empty(phead));
	//��¼β�ڵ��ǰһ���ڵ�
	ls* pcur = phead->prev->prev;
	//�ͷ�β�ڵ��ڴ�
	free(phead->prev);
	//�ı��ڱ�λָ��
	phead->prev = pcur;
	pcur->next = phead;
}

//ͷɾ
void list_pop_front(ls* phead)
{
	//����Ϊ��
	assert(!list_is_empty(phead));
	//��¼��һ����Ч�ڵ���¸��ڵ�
	ls* pcur = phead->next->next;
	//�ͷŵ�һ����Ч�ڵ���ڴ�
	free(phead->next);
	//�ı��ڱ�λָ��
	phead->next = pcur;
	pcur->prev = phead;
}

//ɾ��ָ��λ��(pos)
void list_erase(ls* pos)
{
	assert(pos);
	//��¼ǰ��ڵ�
	ls* prev = pos->prev;
	ls* next = pos->next;
	//�ͷ�ɾ���ڵ���ڴ�
	free(pos);
	pos = NULL;
	//�޸�ָ��ָ��
	prev->next = next;
	next->prev = prev;
}

//����
ls* list_find(ls* phead, list_date_type x)
{
	assert(!list_is_empty(phead));
	ls* pcur = phead->next;
	//��������һһ�ȶ�
	while (pcur != phead)
	{
		if (pcur->date == x)
		{
			//�ҵ����ص�ǰ�ڵ�
			return pcur;
		}
		pcur = pcur->next;
	}
	//�Ҳ������ؿ�
	return NULL;
}