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
	if (out = NULL) {
		push(s, out);
	}
	return out;

}

void reverseStack(Stack* s) {

	new_stack(s->top)

}

void sortStack(Stack* s) {}