//�ɼ�������10������������ȡ����������������ֵ����������Сֵ��������λС����

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double a[10];
	for (int i = 0; i < 10; i++)
		scanf("%lf", &a[i]);
	double min = fabs(a[0] - a[1]);
	for(int i=0;i<9;i++)
		for(int j=i+1;j<10;j++)
			if(fabs(a[i]-a[j])<min)
				min=fabs(a[i]-a[j]);
	printf("%.2f", min);
}