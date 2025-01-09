#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//typedef int que_date_type;
typedef struct binary_tree* que_date_type;

//定义队列节点结构
typedef struct queue_node
{
	que_date_type date;
	struct queue_node* next;

}que_node;

//定义队列结构
typedef struct queue
{
	que_node* ptail;
	que_node* phead;
	int size;
} que;

//初始化队列
void que_init(que* pq);
//销毁队列
void que_destroy(que* pq);
//创建新节点
que_node* que_buy_node(que_date_type x);
//队列判空
bool que_is_empty(que* pq);

//入队列
void que_push(que* pq, que_date_type x);
//出队列
void que_pop(que* pq);

//取队头元素
que_date_type que_front(que* pq);
//取队尾元素
que_date_type que_back(que* pq);
//获取队列有效元素个数
int que_size(que* pq);