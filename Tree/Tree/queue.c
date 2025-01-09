#define _CRT_SECURE_NO_WARNINGS 1

#include "queue.h"

//��ʼ��
void que_init(que* pq)
{
	assert(pq);
	pq->phead = pq->ptail = NULL;
	pq->size = 0;
}

//�����½ڵ�
que_node* que_buy_node(que_date_type x)
{
	que_node* new = (que_node*)malloc(sizeof(que_node));
	if (new == NULL)
	{
		perror("malloc fail");
		exit(1);
	}
	new->date = x;
	new->next = NULL;
	return new;
}

//�п�
bool que_is_empty(que* pq)
{
	assert(pq);
	return pq->phead == NULL;
}

//���
void que_push(que* pq, que_date_type x)
{
	assert(pq);
	que_node* new = que_buy_node(x);
	if (que_is_empty(pq))
	{
		pq->phead = pq->ptail = new;
	}
	else
	{
		pq->ptail->next = new;
		pq->ptail = new;
	}
	pq->size++;
}

//����
void que_pop(que* pq)
{
	assert(!que_is_empty(pq));

	//ֻ��һ���ڵ�
	if (pq->phead == pq->ptail)
	{
		free(pq->phead);
		pq->phead = pq->ptail = NULL;
	}

	else
	{
		que_node* next = pq->phead->next;
		free(pq->phead);
		pq->phead = next;
	}
	pq->size--;
}

//ȡ��ͷ
que_date_type que_front(que* pq)
{
	assert(!que_is_empty(pq));
	return pq->phead->date;
}

//ȡ��β
que_date_type que_back(que* pq)
{
	assert(!que_is_empty(pq));
	return pq->ptail->date;
}

//����
void que_destroy(que* pq)
{
	assert(pq);

	que_node* pcur = pq->phead;
	while (pcur)
	{
		que_node* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	pq->phead = pq->ptail = NULL;
	pq->size = 0;
}

//��ЧԪ�ظ���
int que_size(que* pq)
{
	assert(!que_is_empty(&pq));
	return pq->size;
}