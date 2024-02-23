#include "labo.h"


void insert(Node* currNode, void* newData) {


	Node* n = allocate(sizeof(Node));
	n->data = newData;
	n->next = NULL;

	if (currNode->next != NULL) {
		n->next = currNode->next;
	}
	currNode->next = n;
}

void insertHead(Node* head, void* newData){
	
	Node* n = allocate(sizeof(Node));
	n->data = newData;
	n->next = NULL;
	if (head->data == NULL) {
		head->data = newData;
	}
	else {
		head->next = n;
	}
}

Node* removeByData(Node* head, void* rmData){

	Node* temp = head;
	Node* last = NULL; 
	while (temp != NULL && temp->data != rmData) {
		last = temp;
		temp = temp->next;
	}
	if (temp == NULL) {
		return;
	}
	last->next = temp->next;

	memset(temp, 0, sizeof(Node));
}
Node* removeByName(Node* head, char* name){

	Node* last = NULL;
	Node* Temp = head;
	while (Temp != NULL) {
		Person* p = (Person*)Temp->data;
		if (strcmp(p->name, name)) {
			break;
		}
		last = Temp;
		Temp = Temp->next; 
	}
	last = Temp->next;

	memset(Temp, 0, sizeof(Node));
	
}
void sort(Node* head){ 
	


}