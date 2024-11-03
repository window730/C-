#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//重定义数据类型
typedef char* slt_dtype;

//定义链表
typedef struct s_list_node
{
	slt_dtype date;
	struct s_list_node* next;
}slt;

//销毁链表
void slt_destroy(slt** pp_head);

//打印链表
void slt_print(slt* p_head);

//创建新节点
slt* slt_buy_node(slt_dtype x);

//插入数据
void slt_push_back(slt** pp_head, slt_dtype x);
void slt_push_front(slt** pp_head, slt_dtype x);
void slt_insert(slt** pp_head, slt* pos, slt_dtype x);
void slt_insert_after(slt* pos, slt_dtype x);

//删除数据
void slt_pop_back(slt** pp_head);
void slt_pop_front(slt** pp_head);
void slt_erase(slt** p_head, slt* pos);
void slt_erase_after(slt* pos);

//查找数据
slt* slt_find(slt* p_head, slt_dtype x);