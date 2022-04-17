#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	char 文字配列[4 + 1];
	int i = 0;
	printf("%zu桁の数字列を入力してください。\n", sizeof 文字配列 - 1);
	while (i < sizeof 文字配列 - 1) {
		const int ch = getchar();
		switch (ch) {
		case EOF:
			return EXIT_FAILURE;//入力失敗
		default:
			文字配列[i] = (char)ch;//代入
			if (isdigit((unsigned char)ch)) {
				++i;
				continue;//0から9までの文字を代入したので続ける
			}
			else
				return EXIT_FAILURE;//他の文字を代入したのでプログラムを終了させる
		}
	}
	文字配列[i] = '\0';
	printf("入力内容：%s\n", 文字配列);
	return EXIT_SUCCESS;
}