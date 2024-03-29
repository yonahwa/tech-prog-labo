#include "labo.h"

static long long tab[0x7ffffff] = { 0 };

long long fibonacci(int n) {
	if (tab[1] == 0) {
		memset(tab, -1, sizeof(long long) * 0x7ffffff);
	}
	if (n <= 1) { return n; }
	
	if (tab[n] == -1) {
		tab[n] = fibonacci(n - 1) + fibonacci(n - 2);
		return tab[n];
	}
	else {
		return tab[n];
	}
}

TreeNode* tree_create_node(void* data) {
	TreeNode* tn = allocate(sizeof(TreeNode));

	tn->data = data;
	tn->left = NULL;
	tn->right = NULL;
	return tn;
}

void tree_add_node(TreeNode* root, TreeNode* node) {
	if (root->left == NULL) {
		root->left = node;
	}
	else if (root->right == NULL) {
		root->right = node;
	}
}

int dfs(TreeNode* root, void* key) {
	int i = 0;
	Stack s = stack_init(32);
	stack_push(&s, root);

	while (s.top != -1) {
		TreeNode* temp = (TreeNode*)stack_pop(&s);
		i++;

		if (temp->data == key) {
			return i;
		}
		if (temp->right != NULL) {
			stack_push(&s, temp->right);
		}
		if (temp->left != NULL) {
			stack_push(&s, temp->left);
		}
	}
	return i;
}

int bfs(TreeNode* root, void* key) {
	int i = 0;
	Queue q;
	queue_init(&q);
	queue_push(&q, root);

	while (q.data != NULL)
	{
		TreeNode* temp = (TreeNode*)queue_pop(&q); 
		i++; 

		if (temp->data == key) { 
			return i; 
		}
		if (temp->left != NULL) { 
			queue_push(&q, temp->left); 
		}
		if (temp->right != NULL) {
			queue_push(&q, temp->right); 
		}
	}

	return i;
}