#include "labo.h"


Node* create_node(void* data) {
	Node n;

	n.data = data;
	n.adj = memset(n.adj, 0, UINT8_MAX);
	n.visited = 0;
	n.len = 0;
	n.revPath = (QNode)allocate(sizeof(QNode));
	n.revPath.prev = NULL;

	return &n;
}