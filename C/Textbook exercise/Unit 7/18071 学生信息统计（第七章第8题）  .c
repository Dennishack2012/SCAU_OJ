/*����10��ѧ��5�ſεĿ��Գɼ����ֱ��ú���ʵ�����¹��ܣ�
(1) ����һ��ѧ����ƽ���֡�
(2) ����ÿ�ſγ̵�ƽ���֡�
(3) �ҳ�ÿ�ſγ̵���߷֡�
��ʾ�������ʾ��λС����

#include <stdio.h>

void average(double a[][5], int n)
{
_______________________
}

void average2(double a[][5], int n)
{
_______________________
}

void top(double a[][5], int n)
{
_______________________
}

int main()
{
    double a[10][5];
    int i, j;
    for(i=0; i<10; i++)
        for(j=0; j<5; j++)
            scanf("%lf", &a[i][j]);
    average(a,10);
    average2(a,10);
    top(a,10);
    return 0;
}
*/

#include <stdio.h>

void average(double a[][5], int n)
{
    for (int i = 0; i < n; i++)
    {
        double sum = 0;
        for (int j = 0; j < 5; j++)
            sum += a[i][j];
        printf("%.2f ", sum / 5);
    }
    printf("\n");
}


void average2(double a[][5], int n)
{
    for (int i = 0; i < 5; i++)
    {
        double sum = 0;
        for (int j = 0; j < n; j++)
            sum += a[j][i];
        printf("%.2f ", sum / n);
    }
    printf("\n");
}

void top(double a[][5], int n)
{
    for (int i = 0; i < 5; i++)
    {
        double max = 0;
        for (int j = 0; j < n; j++)
            if (max < a[j][i])
                max = a[j][i];
        printf("%.2f ", max);
    }
    printf("\n");
}

int main()
{
    double a[10][5];
    int i, j;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 5; j++)
            scanf("%lf", &a[i][j]);
    average(a, 10);
    average2(a, 10);
    top(a, 10);
    return 0;
}