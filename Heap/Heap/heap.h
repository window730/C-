#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>


//
typedef int hp_date_type;

//堆结构定义(小堆)
typedef struct heap
{
	hp_date_type* arr;
	int size;
	int capcity;
} hp;

//交换函数
void swap(hp_date_type* x, hp_date_type* y);

//堆初始化
void hp_init(hp* php);
//堆销毁
void hp_destroy(hp* php);

//堆向上调整
void hp_adjust_up(hp_date_type* arr, int child);
//堆向下调整
void hp_adjust_down(hp_date_type* arr, int parent, int size);

//入堆
void hp_push(hp* php, hp_date_type x);
//出堆
void hp_pop(hp* php);

//取堆顶元素
hp_date_type hp_top(hp* php);
//判断堆是否为空
bool hp_is_empty(hp* php);
//队列有效元素个数
int hp_size(hp* php);