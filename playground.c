void rm_chars(char s[], char c[]){
	char result[100];
	int n = 0;
	int j = 0;
	int count = 0;

	for(int i=0; s[i] != '\0'; i++){
		if(s[i] != c[j++]){
			result[count++] = s[i];
		}
	}

	result[count] = '\0';
}

int main(){
	char a[] = "hello";
	char b[] = "he";
	
	rm_chars(a, b);
}
