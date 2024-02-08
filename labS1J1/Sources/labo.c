#include"labo.h"
#include <stdbool.h>

typedef struct {
	char characters;
	int lenght;
}String;

char* sousTexte(char* texte, int from, int to) {
	int i = 0;
	char str[1403] = {0};
	while (i + from <= to) {
		str[i] = texte[from + i];
		i++;
	} 
	return str;
};


void set_String(char* text, String* s) {

	s = text;

};


int String_is_palindrome(String* s) {

	for (int i = 0;i < Sizeof(s);i++) {
		if (s[i] == s[Sizeof(s) - i]) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
};


void bubbleSort(int elements[], int n) {

	bool échanger = false;

	for (int i = 0; i <= sizeof(elements) - 1; i++) {
		if (elements[i] > elements[i + 1]) {
			échanger = true; 
			elements[i] = elements[i + 1];
			elements[i + 1] = elements[i];
		}

		if (i >= sizeof(elements) - 1 && échanger == true) {

			échanger = false;
			i = -1;

		}
	}

};