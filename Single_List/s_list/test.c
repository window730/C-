#define _CRT_SECURE_NO_WARNINGS 1

#include "s_list.h"

//slt* AnnexListNode(slt** headA, slt* headB)
//{	
//	slt* ptail, * pcur;
//	slt* phead = *headA;
//	slt* p2 = headB;
//	ptail = pcur = phead;
//	while (ptail->next)
//	{
//		ptail = ptail->next;
//	}
//	while (p2)
//	{
//		pcur = phead;
//		while (pcur && (pcur->date != p2->date))
//		{
//			pcur = pcur->next;
//		}
//		if (pcur == NULL)
//		{
//			ptail->next = p2;
//			ptail = ptail->next;
//		}
//		p2 = p2->next;
//	}
//	ptail->next = NULL;
//	return phead;
//}
//
//int main()
//{
//	slt* ListNodeA = NULL;
//	slt* ListNodeB = NULL;
//	slt_push_back(&ListNodeA,4);
//	slt_push_back(&ListNodeA,5);
//	slt_push_back(&ListNodeA,6);
//	slt_push_back(&ListNodeB,6);
//	slt_push_back(&ListNodeB,7);
//	slt_push_back(&ListNodeB,8);
//	slt* EndListNode = AnnexListNode(&ListNodeA, ListNodeB);
//	slt_print(EndListNode);
//	return 0;
//}
//
////计算链表长度
//int lenth(slt* list)
//{
//	slt* pcur = list;
//	int sum = 0;
//	while (pcur)
//	{
//		pcur = pcur->next;
//		sum++;
//	}
//	return sum;
//}
////查找位置
//int find(slt* list, slt_dtype x)
//{
//	slt* pcur = list;
//	int i = 0;
//	while (pcur)
//	{
//		if (pcur->date == x)
//		{
//			return i;
//		}
//		pcur = pcur->next;
//		i++;
//	}
//	return NULL;
//}
//int main()
//{
//	slt* classmate = NULL;
//	slt_push_front(&classmate,"赵一");
//	slt_push_front(&classmate,"钱二");
//	slt_push_front(&classmate,"孙三");
//	slt_push_front(&classmate,"李四");
//	slt_push_front(&classmate,"周五");
//	slt_push_front(&classmate,"吴六");
//	slt_push_front(&classmate,"郑七");
//	slt_push_front(&classmate,"王八");
//	slt_pop_back(&classmate);
//	slt_insert_after(slt_find(classmate,"王八"), "冯九");
//	slt_print(classmate);
//	//printf("李四位置为%d\n", find(classmate, "李四"));
//	printf("班级人数为%d\n", lenth(classmate));
//	return 0;
//}