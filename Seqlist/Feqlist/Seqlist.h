#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int sl_dtype;

typedef struct Seqlist
{
	sl_dtype* arr;
	int size;
	int capacity;
} sl;

//初始化
void sl_init(sl* ps);

//销毁
void sl_destroy(sl* ps);

//检查内存
void sl_check_capacity(sl* ps);

//插入数据
void sl_push_back(sl* ps, sl_dtype x);
void sl_push_front(sl* ps, sl_dtype x);
void sl_push_insert(sl* ps, sl_dtype x, int pos);

//删除数据
void sl_pop_back(sl* ps);
void sl_pop_front(sl* ps);
void sl_pop_erase(sl* ps, int pos);

//查找数据
int sl_find(sl* ps, sl_dtype x);


