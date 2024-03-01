#include "labo.h"

Stack* new_stack(size_t max_size) {

	Stack* s;
	s = allocate(sizeof(Stack));
	s->max_size = max_size;
	s->top = -1;
	s->data = allocate(sizeof(void*) * max_size);
	return s;
}

void push(Stack* s, void* newData) {

	if (s->top + 1 < s->max_size) {
		s->top += 1;
		s->data[s->top] = newData;
	}

}

void* pop(Stack* s) {

	void* out = NULL;
	if (s->top - 1 >= 0) {
		out = s->data[s->top];
		s->top -= 1;
	}
	return out;
}

void* peek(Stack* s) {

	void* out = pop(s);
	if (out != NULL) {
		push(s, out);
	}
	return out;

}

void reverseStack(Stack* s) {

	void* temp[1024];
	int ind = 0;

	while (s->top >= 0) {
		temp[ind++] = pop(s);
	}
	for (int i = ind - 1; i >= 0; i--) {
		push(s, temp[i]);
	}
}

void sortStack(Stack* s) {

	void* temp[1024];
	int ind = 0;

	while (s->top >= 0) {
		temp[ind++] = pop(s);
	}
	int i;
	int x;
	int testeur;

	for (x = 0; x < sizeof(temp); x++) {
		for (i = 0; i < sizeof(temp) - 1; i++) {
			if (temp[i + 1] < temp[i]) {
				testeur= temp[i + 1];
				temp[i + 1] = temp[i];
				temp[i] = testeur;
			}
		}
	}
	for (int i = ind - 1; i >= 0; i--) {
		push(s, temp[i]);
	}


}