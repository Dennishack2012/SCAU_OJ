/*
����10���������������ǵ�ƽ��ֵ����ͳ���ж��ٸ�����ƽ��ֵ��
*/

#include <stdio.h>

int main()
{
	int a[10], i, count=0,sum=0;
	float average;

	for (i=0; i < 10; i++)//����10������
		scanf("%d", &a[i]);

	for (i = 0; i < 10; i++)
	{
		sum += a[i];
	}

	average = sum / 10.0;//����ƽ��ֵ

	for (i = 0; i < 10; i++)//ͳ���ж��ٸ�����ƽ��ֵ��
	{
		if (a[i] > average)
			count++;
	}

	printf("%d",count);
	return 0;
}