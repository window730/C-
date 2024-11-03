#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

//创建新节点
ls* list_buy_node(list_date_type x)
{
	//开辟空间
	ls* newnode = (ls*)malloc(sizeof(ls));
	if (newnode == NULL)
	{
		perror("空间开辟失败");
		exit(1);
	}
	//存储数据 前后指针指向自身
	newnode->date = x;
	newnode->prev = newnode->next = newnode;
	return newnode;
}

//初始化
void list_init(ls** pphead)
{
	//创建哨兵位
	*pphead = list_buy_node(-1);
}

//打印
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

//判断链表是否为空
bool list_is_empty(ls* phead)
{
	assert(phead);
	return phead->next == phead;
}

//销毁
void list_destroy(ls** pphead)
{
	assert(pphead && *pphead);
	ls* pcur = (*pphead)->next;
	//遍历链表 逐个销毁
	while (pcur != *pphead)
	{
		ls* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	//销毁哨兵位
	free(*pphead);
	*pphead = NULL;
}

//尾插
void list_push_back(ls* phead, list_date_type x)
{
	assert(phead);
	//创建新节点
	ls* new = list_buy_node(x);
	//改变节点指向和哨兵位指向
	new->prev = phead->prev;
	new->next = phead;
	phead->prev->next = new;
	phead->prev = new;
}

//头插
void list_push_front(ls* phead, list_date_type x)
{
	assert(phead);
	//创建新节点
	ls* new = list_buy_node(x);
	//改变节点指向和哨兵位指向
	new->prev = phead;
	new->next = phead->next;
	phead->next->prev = new;
	phead->next = new;
}

//指定位置(pos)之后插入
void list_insert(ls* pos, list_date_type x)
{
	assert(pos);
	//创建新节点
	ls* new = list_buy_node(x);
	//改变节点指向
	new->prev = pos;
	new->next = pos->next;
	pos->next->prev = new;
	pos->next = new;
}

//尾删
void list_pop_back(ls* phead)
{
	//链表不为空
	assert(!list_is_empty(phead));
	//记录尾节点的前一个节点
	ls* pcur = phead->prev->prev;
	//释放尾节点内存
	free(phead->prev);
	//改变哨兵位指向
	phead->prev = pcur;
	pcur->next = phead;
}

//头删
void list_pop_front(ls* phead)
{
	//链表不为空
	assert(!list_is_empty(phead));
	//记录第一个有效节点的下个节点
	ls* pcur = phead->next->next;
	//释放第一个有效节点的内存
	free(phead->next);
	//改变哨兵位指向
	phead->next = pcur;
	pcur->prev = phead;
}

//删除指定位置(pos)
void list_erase(ls* pos)
{
	assert(pos);
	//记录前后节点
	ls* prev = pos->prev;
	ls* next = pos->next;
	//释放删除节点的内存
	free(pos);
	pos = NULL;
	//修改指针指向
	prev->next = next;
	next->prev = prev;
}

//查找
ls* list_find(ls* phead, list_date_type x)
{
	assert(!list_is_empty(phead));
	ls* pcur = phead->next;
	//遍历链表一一比对
	while (pcur != phead)
	{
		if (pcur->date == x)
		{
			//找到返回当前节点
			return pcur;
		}
		pcur = pcur->next;
	}
	//找不到返回空
	return NULL;
}