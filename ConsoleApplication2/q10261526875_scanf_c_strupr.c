#define	_CRT_SECURE_NO_WARNINGS //Visual Studio �p�̋L�q
#include<stdio.h>
#include<stdlib.h>

void STR(char* str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
}



int main(void) {
	int i;
	char str[50];


	for (i = 0; ; i++) {
		if (scanf("%c", &str[i]) == 1) {
			//scanf ����
			if (str[i] == '\n') {
				str[i] = '\0';// ���s��Null����
				break;
			}
		}
		else {
			//scanf ���s
			fprintf(stderr, "���͎��s\n");
			exit(EXIT_FAILURE);
		}
	}

	STR(str);
	for (i = 0; str[i] != 0; i++) {
		printf("%c", str[i]);

	}
	return 0;


}
