#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

//重定义数据类型
typedef int list_date_type;

//定义双向链表结构体
typedef struct ListNode
{
	list_date_type date;
	struct ListNode* prev;
	struct ListNode* next;
}ls;

//创建新节点
ls* list_buy_node(list_date_type x);
//链表初始化
void list_init(ls** pphead);
//打印双向链表
void list_print(ls* phead);
//判断链表是否为空
bool list_is_empty(ls* phead);
//链表销毁
void list_destroy(ls** pphead);

//链表尾插
void list_push_back(ls* phead, list_date_type x);
//链表头插
void list_push_front(ls* phead, list_date_type x);
//指定位置(pos)之后插入
void list_insert(ls* pos, list_date_type x);

//链表尾删
void list_pop_back(ls* phead);
//链表头删
void list_pop_front(ls* phead);
//删除指定位置(pos)
void list_erase(ls* pos);

//查找节点
ls* list_find(ls* phead, list_date_type x);