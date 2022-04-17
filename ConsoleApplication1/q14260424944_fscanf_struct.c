#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student {
	int student_id[45];
	char name[45];
	char gender[45];
	int point[45];
} STUDENT;

int main(void) {
	FILE* fp;

	STUDENT person;
	int a;
	printf("学籍コード：");
	scanf("%d", &a);
	fp = fopen("02student.txt", "r");
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 45; i = i + 4) {
		fscanf(fp, "%d%*s %*c%*d", &person.student_id[i]);
		if (person.student_id[i] == a) {
			printf("学籍コード：%d\n", person.student_id[i]);
		}
	}
	for (rewind(fp), j = 1; j < 45; j = j + 4) {
		fscanf(fp, "%*d%s %*c%*d", &person.name[/*j*/0]); i = j - 1;
		if (person.student_id[i] == a) {
			printf("名前：%s\n", &person.name[/*i + 1*/0]);
		}
	}
	for (rewind(fp), k = 2; k < 45; k = k + 4) {
		fscanf(fp, "%*d%*s %c%*d", &person.gender[k]); i = k - 2;
		if (person.student_id[i] == a) {
			printf("性別：%c\n", person.gender[i + 2]);
		}
	}
	for (rewind(fp), l = 3; l < 45; l = l + 4) {
		fscanf(fp, "%*d%*s %*c%d", &person.point[l]); i = l - 3;
		if (person.student_id[i] == a) {
			printf("評価点：%d\n", person.point[i + 3]);

		}
	}
	return 0;

}
