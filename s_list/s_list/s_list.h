#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//�ض�����������
typedef char* slt_dtype;

//��������
typedef struct s_list_node
{
	slt_dtype date;
	struct s_list_node* next;
}slt;

//��������
void slt_destroy(slt** pp_head);

//��ӡ����
void slt_print(slt* p_head);

//�����½ڵ�
slt* slt_buy_node(slt_dtype x);

//��������
void slt_push_back(slt** pp_head, slt_dtype x);
void slt_push_front(slt** pp_head, slt_dtype x);
void slt_insert(slt** pp_head, slt* pos, slt_dtype x);
void slt_insert_after(slt* pos, slt_dtype x);

//ɾ������
void slt_pop_back(slt** pp_head);
void slt_pop_front(slt** pp_head);
void slt_erase(slt** p_head, slt* pos);
void slt_erase_after(slt* pos);

//��������
slt* slt_find(slt* p_head, slt_dtype x);