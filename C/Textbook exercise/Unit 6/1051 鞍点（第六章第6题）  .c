/*
�ɼ�������һ��3��4��3��4�У������־������������������־�����ͬ��Ҫ����������־����еİ��㣨���ھ����������������С��������
��û�а��㣬�����NO��������
*/

#include <stdio.h>
int main()
{
	int a[3][4],i,j,maxj,max,m,flag;

	for (i=0;i<3;i++)//�������
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);

	for (i = 0; i < 3; i++)
	{
		max=a[i][0];
		maxj=0;//��¼���ֵ���к�
		for (j = 0; j < 4; j++)//�ҳ���i�е����ֵ
		{
			if (a[i][j]>max)
			{
				max=a[i][j];
				maxj=j;
			}
		}

		flag=1;//����a[i][maxj]�ǰ���
		
		for (m = 0; m < 3; m++)//�ж�a[i][maxj]�Ƿ��ǵ�m�е���Сֵ
		{
			if (a[m][maxj]<a[i][maxj])
			{
				flag=0;
				break;
			}
		}

		if(flag==1)
		{
			printf("%d",max);
			break;//�ҵ����㣬����ѭ��
		}
	}
	if(!flag)
		printf("NO");
}