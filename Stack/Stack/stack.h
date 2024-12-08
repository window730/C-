#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int st_data_type;

//定义栈结构
typedef struct stack 
{
	st_data_type* arr;
	int capacity; //栈空间大小
	int top;//栈顶
} st;

//栈初始化
void st_init(st* pst);
//栈销毁
void st_destroy(st* pst);
//栈判空
bool st_is_empty(st* pst);

//入栈
void st_push(st* pst, st_data_type x);
//出栈
void st_pop(st* pst);
//取栈顶元素
st_data_type st_top(st* pst);

//获取栈有效元素个数
int st_size(st* pst);