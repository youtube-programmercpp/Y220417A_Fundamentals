#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <math.h>
int main()
{
	double �g��_cm, �̏d_kg;
	if (scanf("%lf%lf", &�g��_cm, &�̏d_kg) == 2) {
		//���͐���

		const double �g��_m     = �g��_cm / 100       ;
		const double �g��_m_2�� = �g��_m  * �g��_m    ;// pow(�g��_m, 2);
		const double BMI        = �̏d_kg / �g��_m_2��;
		const double �K���̏d   = �g��_m_2�� * 22     ;
		printf("�g��=%.3f cm\n"    , �g��_cm );
		printf("�̏d=%.3f kg\n"    , �̏d_kg );
		printf("BMI=%.3f\n"        , BMI     );
		printf("�K���̏d=%.3f kg\n", �K���̏d);
	}
	else {
		//���͎��s
		printf("���̓G���[���������܂����B\n");
	}
}
