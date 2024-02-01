#include"labo.h"

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


};
int String_is_palindrome(String* s) {

};
void bubbleSort(int elements[], int n) {

};