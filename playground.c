#include <stdio.h>


void lower(char txt[]){
	char lower[255];
	for(int i = 0; txt[i] != '\0'; i++) lower[i] = (txt[i] >= 65 && txt[i] <= 90) ? txt[i] + 32 : txt[i];
	printf("%s\n", lower);
}

int main(){
	lower("AMINOFF");
	return 0;
}
