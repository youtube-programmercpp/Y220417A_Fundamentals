#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int vx;
	printf("三角形の底辺を入力してください\n >> ");
	scanf("%d", &vx);
	int vy;
	printf("三角形の高さを入力してください\n >> ");
	scanf("%d", &vy);
	double vz;
	vz = (vx * vy) / 2.;
	printf("三角形の面積は %fです。\n", vz);
	return 0;
}