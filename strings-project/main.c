#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 

void erase(char *arr, char character); 

int main()
{
	char arr[256], character;
	printf("Podaj tekst: ");
	gets(arr);
	printf("Podaj znak: ");
	scanf("%c", &character);
	usun(arr, character);
	printf("Tekst po usunieciu ostatniego wystapienia  znaku '%c': ", character);
	puts(arr);
	
	return 0;
}

void erase(char *arr, char character) {
	int dl = strlen(arr);
	int i = dl-1;
	while(i >= 0) {
		if(arr[i] == character) {
			strcpy(arr + i, arr + i + 1);
			break;
		}
		i--;
	}
	
	if(i < 0) {
		printf("'%c' nie wystepuje w '%s'\n", character, arr);
		exit(0);	
	}
	
} 
