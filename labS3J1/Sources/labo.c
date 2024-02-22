#include "labo.h"


void insert(Node* currNode, void* newData) {


	Node n = { 0 };
	n.data = newData;
	n.next = NULL;

	if (currNode->next != NULL) {
		n.next = currNode->next;
	}

	currNode->next = &n;

	allocate(sizeof(currNode));

}

void insertHead(Node* head, void* newData){
	
	Node n = { 0 };
	n.data = newData;
	n.next = NULL;
	if (head->data = NULL) {
		head->data = newData;
	}
}

Node* removeByData(Node* head, void* rmData){

	void* save = 0;
	Node n = { 0 };
	
}
Node* removeByName(Node* head, char* name){}
void sort(Node* head){}