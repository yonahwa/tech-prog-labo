#include "labo.h"


Node* create_node(void* data) {
	Node* n = (Node*)allocate(sizeof(Node));

	n->data = data;
	memset(n->adj, 0, UINT8_MAX);
	n->visited = 0;
	n->len = 0;
	QNode* qn = (QNode*)allocate(sizeof(QNode));
	qn->prev = NULL;
	n->revPath = qn;

	return n;
}

void add_adjacent_node(Node* root, Node* node)
{
	root->adj[root->len++] = node;
}

int dfs(Node* root[], int len, Node* curr, void* key, Stack* s)
{
	
	int i = 0;
	stack_push(s, root[i]);
	root[i]->visited = 1;

	while (s->top != 1)
	{
		Node* temp = (Node*)stack_pop(s);
		temp->visited = 1;
		
		for (int y = 0; y < temp->len; y++) {
			if (temp->adj[y]->data == key) {
				return i; //re check
			}
			if (temp->adj[y]->visited == 1) {
				continue;
			}
			else {
				stack_push(s, temp);
				stack_push(s, temp->adj[y]);
				break;
			}
		}

		

		i++;
	}
}

int bfs(Node* root[], void* key, Stack* s)
{
	
}
