#include <stdio.h>

int read_until_asterisk()
{
	for (;;) {
		const int ch = getchar();
		switch (ch) {
		case '*':
			return '*';
		case EOF:// End Of File
			return EOF;
		default:
			continue;
		}
	}
}
int copy_until_newline()
{
	for (;;) {
		const int ch = getchar();
		switch (ch) {
		case EOF:
			return EOF;
		case '\n':
			putchar(ch);
			return '\n';
		default:
			putchar(ch);
			continue;
		}
	}
}
int main()
{
	if (read_until_asterisk() == '*') {
		(void)copy_until_newline();
	}
}
