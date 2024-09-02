#include <stdio.h>

int main(){
	char str[] = "hello  this is test  some tabs			lal			";
	char newstr[300];
	for(int i = 0; str[i] != '\0'; i++){
		switch(str[i]){
			case ' ':
				newstr[i] = '_';
				break;
			case '\t':
				newstr[i] = '>';
				break;
			default:
				newstr[i] = str[i];
				break;
		}
	}

	printf("%s\n", newstr);
	return 0;
}
