#include"labo.h"
#include <stdbool.h>
#include <string.h>


char* sousTexte(char* texte, int from, int to) {
	int i = 0;
	static char str[512] = {0};
	while (i + from < to) {
		str[i] = texte[from + i];
		i++;
	}
	str[i] = '\0';
	return str;
};


void set_String(char* text, String* s) {

	for (int i = 0; i <= strlen(text); i++) {
		 s->characters[i] = text[i];
	}

};


int String_is_palindrome(String* s) {

	for (int i = 0;i < sizeof(s);i++) {

		if (s->characters[i] == s->characters[sizeof(s) - i]) {
			return 1;
		}

	}
	return 0;
};


void bubbleSort(int elements[], int n) {

	bool échanger = false;

	for (int i = 0; i < n - 1; i++) {
		if (elements[i] > elements[i + 1]) {
			échanger = true; 
			int wtf = elements[i];
			elements[i] = elements[i + 1]; 
			elements[i+1] = wtf ;
		}

		if (échanger == true) {

			bubbleSort(elements, n);

		}
	}

};