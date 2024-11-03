#define _CRT_SECURE_NO_WARNINGS 1
#include "s_list.h"


//��ӡ����
void slt_print(slt* p_head)
{
	while (p_head)
	{
		printf("%s->", p_head->date);
		p_head = p_head->next;
	}
	printf("NULL\n");
}
//��������
void slt_destroy(slt** pp_head)
{
	assert(pp_head && *pp_head);
	slt* pcur = *pp_head;
	while (pcur)
	{
		slt* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	*pp_head = NULL;
}
//�����½ڵ�
slt* slt_buy_node(slt_dtype x)
{
	slt* node = (slt*)malloc(sizeof(slt));
	assert(node);
	node->date = x;
	node->next = NULL;
	return node;
}

//β������
void slt_push_back(slt** pp_head, slt_dtype x)
{
	assert(pp_head);
	if (*pp_head == NULL)
	{
		*pp_head = slt_buy_node(x);
		return;
	}
	slt* pcur = *pp_head;
	while (pcur->next)
	{
		pcur = pcur->next;
	}
	pcur->next = slt_buy_node(x);
}

//ͷ������
void slt_push_front(slt** pp_head, slt_dtype x)
{
	assert(pp_head);
	slt* newnode = slt_buy_node(x);
	newnode->next = *pp_head;
	*pp_head = newnode;
}

//ָ��λ��֮ǰ����
void slt_insert(slt** pp_head, slt* pos, slt_dtype x)
{
	assert(pp_head && pos);
	if (pos == *pp_head)
	{
		slt_push_front(pp_head, x);
		return;
	}
	slt* new = slt_buy_node(x);
	slt* prev = *pp_head;
	while (prev->next != pos)
	{ 
		prev = prev->next;
	}
	new->next = pos;
	prev->next = new;
}

//ָ��λ��֮�����
void slt_insert_after(slt* pos, slt_dtype x)
{
	assert(pos);
	slt* new = slt_buy_node(x);
	new->next = pos->next;
	pos->next = new;
}

//β��ɾ��
void slt_pop_back(slt** pp_head)
{
	assert(pp_head && *pp_head);
	if ((*pp_head)->next == NULL)
	{
		free(*pp_head);
		*pp_head = NULL;
		return;
	}
	slt* ptail = *pp_head;
	slt* prev = NULL;
	while (ptail->next)
	{
		prev = ptail;
		ptail = ptail->next;
	}
	prev->next = NULL;
	free(ptail);
	ptail = NULL;
}

//ͷ��ɾ��
void slt_pop_front(slt** pp_head)
{
	assert(pp_head && *pp_head);
	slt* next = (*pp_head)->next;
	free(*pp_head);
	*pp_head = next;
}

//ָ��λ��ɾ��
void slt_erase(slt** pp_head, slt* pos)
{
	assert(pp_head && *pp_head && pos);
	if (pos == *pp_head)
	{
		slt_pop_front(pp_head);
		return;
	}
	slt* prev = *pp_head;
	while (prev->next != pos)
	{
		prev = prev->next;
	} 
	prev->next = pos->next;
	free(pos);
	pos == NULL;
}

//ָ��λ��֮��ɾ��
void slt_erase_after(slt* pos)
{
	assert(pos && pos->next);
	slt* pcur = pos->next;
	pos->next = pos->next->next;
	free(pcur);
	pcur = NULL;
}

//��������
slt* slt_find(slt* p_head, slt_dtype x)
{
	assert(p_head);
	slt* pcur = p_head;
	while (pcur)
	{
		if (pcur->date == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}