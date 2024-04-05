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
	int index = 0;
	if (curr == NULL) {
		int vtemp = 0; //permet de savoir si j'ai trouver ma key
		
		for (int z = 0; z < len; z++) {
			vtemp = dfs(root, len, root[z], key, s);
			if (vtemp != 0) {
				break;
			}
		}
	}
	else {
		curr->visited = 1;
		stack_push(s, curr);
		if (curr->data == key) {
			return 1;
		}
		else {
			for (int y = 0; y < curr->len; y++) {
				if (curr->adj[y]->visited == 1) {

				}
				else {

				}
			}
		}
	}
	//stack_push(s, root[index]);
	//root[index]->visited = 1;

	//while (s->top != -1)
	//{
	//	Node* temp = (Node*)stack_pop(s);
	//	temp->visited = 1;
	//	
	//	for (int y = 0; y < temp->len; y++) {
	//		if (temp->adj[y]->data == key) { 
	//			stack_push(s, temp->adj[y]); 
	//		}
	//		if (temp->adj[y]->visited == 1) {
	//			continue;
	//		}
	//		else {
	//			temp->adj[y]->visited = 1;
	//			stack_push(s, temp);
	//			stack_push(s, temp->adj[y]);
	//			
	//		}
	//	}

	//	if (temp->data == key) {
	//		return 1;
	//	}

	//	index++;
	//}

	//return 1;
}

int bfs(Node* root[], void* key, Stack* s)
{
	
}
