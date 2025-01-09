#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int bt_date_type;


//定义二叉树结构
typedef struct binary_tree
{
	bt_date_type data;
	struct binary_tree* left;
	struct binary_tree* right;
} bt;

//创建新节点
bt* bt_buy_node(bt_date_type x);

//前序遍历
void bt_pre_order(bt* root);
//中序遍历
void bt_in_order(bt* root);
//后序遍历
void bt_post_order(bt* root);

// ⼆叉树结点个数
int bt_size(bt* root);

// ⼆叉树叶⼦结点个数
int bt_leaf_size(bt* root);

// ⼆叉树第k层结点个数
int bt_level_size(bt* root, int k);

//⼆叉树的深度/⾼度

int bt_depth(bt* root);

// ⼆叉树查找值为x的结点
bt* bt_find(bt* root, bt_date_type x);

// ⼆叉树销毁
void bt_destroy(bt** root);

//层序遍历
void bt_level_order(bt* root);

//判断二叉树是否为完全二叉树
bool bt_is_complete(bt* root);
