#include <stdio.h>
char* fgetc��p����fgets���Č�(char* buffer, int size, FILE* stream)
{
	if (size > 1) {
		int ch = fgetc(stream);
		if (ch == EOF)
			return NULL;
		else {
			char* const first = buffer;
			for (;;) {
				*buffer++ = (char)ch;
				if (ch == '\n')
					break;
				if (buffer == &first[size - 1])
					break;
				if ((ch = fgetc(stream)) == EOF)
					break;
			}
			*buffer = '\0';
			return first;
		}
	}
	else
		return NULL;
}
int main()
{
	FILE* fp;
	if (fopen_s(&fp, __FILE__, "r") == 0) {
		char buf[16];
#define fgets���g�p�����ꍇ�Ɣ�ׂ�
#ifdef fgets���g�p�����ꍇ�Ɣ�ׂ�
		puts("---------------- fgets ----------------");
		while (fgets(buf, sizeof buf, fp))
			fputs(buf, stdout);
		rewind(fp);
		puts("----------------fgetc��p����fgets���Č�----------------");
#endif
		while (fgetc��p����fgets���Č�(buf, sizeof buf, fp))
			fputs(buf, stdout);
		fclose(fp);
	}
}
