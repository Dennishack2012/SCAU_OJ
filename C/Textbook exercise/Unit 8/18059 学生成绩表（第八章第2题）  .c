/*����10��ѧ����ÿ��ѧ�������ݰ���ѧ�š�������3�ſεĳɼ�������ṹ�����ͱ�ʾѧ�����ͣ�����10��ѧ�������ݣ�
����ÿ��ѧ����ƽ���ɼ�����ƽ���ɼ��ɸߵ����������ѧ����Ϣ���ɼ���ͬʱ��ѧ�Ŵ�С���������

#include <stdio.h>

struct data
{
_______________________
};

int main()
{
    int i,j;
    struct data stu[10],tmp;
    for(i=0; i<10; i++)
    {
_______________________
    }
    for(i=0; i<9; i++)
        for(j=0; j<9-i; j++)
        {
_______________________
        }
    for(i=0; i<10; i++)
    {
        printf("%d %s %.0lf %.0lf %.0lf\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
    }
    return 0;
}*/

#include <stdio.h>
#include <string.h>

struct data
{
    int num;
    char name[20];
    double score[3];
    double aver;
};

int main()
{
    int i, j;
    struct data stu[10], tmp;
    for (i = 0; i < 10; i++)
    {
        scanf("%d %s %lf %lf %lf", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
    }
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9 - i; j++)
        {
            if (stu[j].aver < stu[j + 1].aver)
            {
                tmp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = tmp;
            }
            else if (stu[j].aver == stu[j + 1].aver)
            {
                if (stu[j].num > stu[j + 1].num)
                {
                    tmp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = tmp;
                }
            }
        }
    for (i = 0; i < 10; i++)
    {
        printf("%d %s %.0lf %.0lf %.0lf\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
    }
    return 0;
}