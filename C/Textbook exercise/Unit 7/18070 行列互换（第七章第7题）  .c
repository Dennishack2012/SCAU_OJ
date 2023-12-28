/*����һ��4*4���󣬱�д���������ֱ�ʵ�ֶԶ�ά����Ԫ�ص������н��н������Լ������н��н���

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp=*a;*a=*b;*b=temp;
}

void col(int a[][4], int i, int j)
{
    _______________________
}

void row(int a[][4], int i, int j)
{
    _______________________
}

int main()
{
    int a[4][4];
    int i,j;
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            scanf("%d", &a[i][j]);
    col(a,0,2);
    row(a,0,2);
    col(a,1,3);
    row(a,1,3);
    col(a,0,3);
    row(a,0,3);
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
*/

#include <stdio.h>

void swap(int* a, int* b)
{
    int temp;
    temp = *a; *a = *b; *b = temp;
}

void col(int a[][4], int i, int j)
{
    int k;
    for (k = 0; k < 4; k++)
        swap(&a[k][i], &a[k][j]);
}

void row(int a[][4], int i, int j)
{
    int k;
    for (k = 0; k < 4; k++)
        swap(&a[i][k], &a[j][k]);
}

int main()
{
    int a[4][4];
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);
    col(a, 0, 2);
    row(a, 0, 2);
    col(a, 1, 3);
    row(a, 1, 3);
    col(a, 0, 3);
    row(a, 0, 3);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}