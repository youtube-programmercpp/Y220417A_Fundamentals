#include <stdio.h>
#include <ctype.h>
void trim_space(char* line)
{
	while (*line) {
		if (isspace((unsigned char) * line)) {
			for (char* 移動先 = line++;;) {
				if (*line == '\0') {
					*移動先 = '\0';
					return;
				}
				else if (isspace((unsigned char)*line))
					++line;
				else
					*移動先++ = *line++;
			}
		}
		else
			++line;
	}
}
int main()
{
	puts("文字列を入力してください。");
	char line[256];
	if (fgets(line, sizeof line, stdin)) {
		trim_space(line);
		printf("%s\n", line);
	}
}
