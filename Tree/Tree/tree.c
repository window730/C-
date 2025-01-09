#define _CRT_SECURE_NO_WARNINGS 1

#include "tree.h"
#include "queue.h"


//创建新节点
bt* bt_buy_node(bt_date_type x)
{
	bt* new = (bt*)malloc(sizeof(bt));
	if (new == NULL)
	{
		perror("malloc fail");
		exit(1);
	}
	new->data = x;
	new->left = new->right = NULL;
	return new;
}

//先序遍历
void bt_pre_order(bt* root)
{
	if (root == NULL)
	{
		return;
	}

	printf("%d ", root->data);

	bt_pre_order(root->left);
	bt_pre_order(root->right);
}

//中序遍历
void bt_in_order(bt* root)
{
	if (root == NULL)
	{
		return;
	}

	bt_in_order(root->left);

	printf("%d ", root->data);

	bt_in_order(root->right);
}

//后序遍历
void bt_post_order(bt* root)
{
	if (root == NULL)
	{
		return;
	}

	bt_post_order(root->left);
	bt_post_order(root->right);

	printf("%d ", root->data);
}

//节点个数
int bt_size(bt* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return 1 + bt_size(root->left) + bt_size(root->right);
}

//叶子节点个数
int bt_leaf_size(bt* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}

	return bt_leaf_size(root->left) + bt_leaf_size(root->right);
}

//第k层节点个数
int bt_level_size(bt* root, int k)
{
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}

	return bt_level_size(root->left, k - 1) + bt_level_size(root->right, k - 1);
}

//树高度\深度
int bt_depth(bt* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int l = bt_depth(root->left);
	int r = bt_depth(root->right);

	return 1 + (l > r ? l : r);
}

//查找
bt* bt_find(bt* root, bt_date_type x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == x)
	{
		return root;
	}
	
	bt* l = bt_find(root->left, x);
	if (l)
	{
		return l;
	}
	bt* r = bt_find(root->right, x);
	if (r)
	{
		return r;
	}

	return NULL;
}

//销毁
void bt_destroy(bt** proot)
{
	if (*proot == NULL)
	{
		return;
	}

	bt_destroy(&((*proot)->left));
	bt_destroy(&((*proot)->right));

	free(*proot);
	*proot = NULL;
}

//层次遍历
void bt_level_order(bt* root)
{
	que q;
	que_init(&q);
	que_push(&q, root);

	while (!que_is_empty(&q))
	{
		bt* front = que_front(&q);
		printf("%d ", front->data);
		que_pop(&q);

		if (front->left)
		{
			que_push(&q, front->left);
		}
		if (front->right)
		{
			que_push(&q, front->right);
		}
	}

	que_destroy(&q);
}

//判断是否为完全二叉树
bool bt_is_complete(bt* root)
{
	que q;
	que_init(&q);
	que_push(&q, root);

	while (!que_is_empty(&q))
	{
		bt* front = que_front(&q);
		que_pop(&q);

		if (front == NULL)
		{
			break;
		}

		que_push(&q, front->left);
		que_push(&q, front->right);
	}

	while (!que_is_empty(&q))
	{
		bt* front = que_front(&q);
		que_pop(&q);

		if (front != NULL)
		{
			que_destroy(&q);
			return false;
		}

	}

	que_destroy(&q);
	return true;

}






