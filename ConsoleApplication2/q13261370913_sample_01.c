#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <math.h>
int main()
{
	double 身長_cm, 体重_kg;
	if (scanf("%lf%lf", &身長_cm, &体重_kg) == 2) {
		//入力成功

		const double 身長_m     = 身長_cm / 100       ;
		const double 身長_m_2乗 = 身長_m  * 身長_m    ;// pow(身長_m, 2);
		const double BMI        = 体重_kg / 身長_m_2乗;
		const double 適正体重   = 身長_m_2乗 * 22     ;
		printf("身長=%.3f cm\n"    , 身長_cm );
		printf("体重=%.3f kg\n"    , 体重_kg );
		printf("BMI=%.3f\n"        , BMI     );
		printf("適正体重=%.3f kg\n", 適正体重);
	}
	else {
		//入力失敗
		printf("入力エラーが発生しました。\n");
	}
}
