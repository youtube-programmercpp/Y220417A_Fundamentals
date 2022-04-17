#include <stdio.h>
char* fgetcを用いてfgetsを再現(char* buffer, int size, FILE* stream)
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
#define fgetsを使用した場合と比べる
#ifdef fgetsを使用した場合と比べる
		puts("---------------- fgets ----------------");
		while (fgets(buf, sizeof buf, fp))
			fputs(buf, stdout);
		rewind(fp);
		puts("----------------fgetcを用いてfgetsを再現----------------");
#endif
		while (fgetcを用いてfgetsを再現(buf, sizeof buf, fp))
			fputs(buf, stdout);
		fclose(fp);
	}
}
