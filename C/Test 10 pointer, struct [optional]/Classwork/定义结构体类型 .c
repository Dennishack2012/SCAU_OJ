/*Ҫ����һ����Ϊstudent�Ľṹ�����ͣ���������³�Ա��
��1���ַ�����name�����ɴ��10���ַ���
��2���ַ�����sex�����ڼ�¼�Ա�
��3���������ͱ���num�����ڼ�¼ѧ�ţ�
��4��float���ͱ���score�����ڼ�¼�ɼ���
��ʹ���д���������

#include "stdio.h"
_______________________
int main()
{
    struct  student stu;
    gets(stu.name);
    scanf("%c",  &stu.sex);
    scanf("%d",  &stu.num);
    scanf("%f",  &stu.score);
    printf("%s\n", stu.name);
    printf("%c\n", stu.sex);
    printf("%d\n", stu.num);
    printf("%f\n", stu.score);
    return 0;
}*/

#include "stdio.h"

struct student
{
    char name[10];
    char sex;
    int num;
    float score;
};
struct student stud1;

int main()
{
    struct  student stu;
    gets(stu.name);
    scanf("%c", &stu.sex);
    scanf("%d", &stu.num);
    scanf("%f", &stu.score);
    printf("%s\n", stu.name);
    printf("%c\n", stu.sex);
    printf("%d\n", stu.num);
    printf("%f\n", stu.score);
    return 0;
}