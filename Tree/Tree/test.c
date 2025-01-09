#define _CRT_SECURE_NO_WARNINGS 1

#include "tree.h"

int main()
{
	bt* node1 = bt_buy_node(1);
	bt* node2 = bt_buy_node(2);
	bt* node3 = bt_buy_node(3);
	bt* node4 = bt_buy_node(4);
	bt* node5 = bt_buy_node(5);
	bt* node6 = bt_buy_node(6);

	node1->left = node2;
	node1->right = node3;//             1
	node2->left = node4;//        2            3
	node2->right = node5;//   4      5     
	node3->right = node6;//  6

	//bt_pre_order(node1); //1 2 4 5 3 6
	//printf("\n");
	//bt_in_order(node1);//4 2 5 1 6 3
	//printf("\n");
	//bt_post_order(node1);//4 5 2 6 3 1
	//printf("\n");
	//bt_level_order(node1);//1 2 3 4 5 6
	//printf("\n");



	//printf("节点个数为%d\n", bt_size(node1));// 6
	//printf("叶子节点个数为%d\n", bt_leaf_size(node1));// 3
	//printf("第K层节点个数为%d\n", bt_level_size(node1,3));// 2
	//printf("树的高度为%d\n", bt_depth(node1));// 4

	//bt* find = bt_find(node1, 7);
	//if (find)
	//{
	//	printf("找到了 是%d\n", find->data);
	//}
	//else
	//{
	//	printf("找不到\n");
	//}

	//bt_is_complete(node1);

	printf("%s\n", bt_is_complete(node1) ? "是完全二叉树" : "不是完全二叉树");

	bt_destroy(&node1);

	return 0;
}