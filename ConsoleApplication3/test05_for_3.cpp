#include <iostream>
int copy_until_newline()
{
	for (;;) {
		switch (const int ch = std::cin.get()) {
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
#include <numeric>
int main()
{
	if (std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '*')) {
		(void)copy_until_newline();
	}
}
