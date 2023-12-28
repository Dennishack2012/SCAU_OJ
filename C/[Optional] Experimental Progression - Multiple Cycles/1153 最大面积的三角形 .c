/*������ά����ϵ�е�n(n<50)���������x, y(x, y<1000������)������������������ͬһ��ֱ���ϵ���������Թ���һ�������Σ����ҳ��������������Σ���������(ʵ��, ����4λС��)��
�����������ʽs = (a + b + c) / 2; Area = sqrt(s * (s - a) * (s - b) * (s - c))��ע�⣺��������ʹ��double������*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

double cnm(int a, int b, int c, int d)
{
	double e;
	e = sqrt((a - b) * (a - b) + (c - d) * (c - d));
	return e;
}

int main()
{
	double s, area, a, b, c, max = 0;
	int n;
	scanf("%d", &n);
	double x[50], y[50];
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &x[i]);
		scanf("%lf", &y[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				a = cnm(x[i], x[j], y[i], y[j]);
				b = cnm(x[i], x[k], y[i], y[k]);
				c = cnm(x[k], x[j], y[k], y[j]);
				s = (a + b + c) / 2;
				area = sqrt(s * (s - a) * (s - b) * (s - c));
				if (area > max)
					max = area;
			}
		}
	}
	printf("%.4f", max);
}