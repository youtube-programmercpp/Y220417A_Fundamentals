#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	char �����z��[4 + 1];
	int i = 0;
	printf("%zu���̐��������͂��Ă��������B\n", sizeof �����z�� - 1);
	while (i < sizeof �����z�� - 1) {
		const int ch = getchar();
		switch (ch) {
		case EOF:
			return EXIT_FAILURE;//���͎��s
		default:
			�����z��[i] = (char)ch;//���
			if (isdigit((unsigned char)ch)) {
				++i;
				continue;//0����9�܂ł̕������������̂ő�����
			}
			else
				return EXIT_FAILURE;//���̕������������̂Ńv���O�������I��������
		}
	}
	�����z��[i] = '\0';
	printf("���͓��e�F%s\n", �����z��);
	return EXIT_SUCCESS;
}