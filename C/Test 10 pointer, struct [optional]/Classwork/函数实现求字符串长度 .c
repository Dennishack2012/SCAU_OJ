/*
�������ʵ���ɺ���ʵ�����ַ������ȣ���������

#include "stdio.h"

_______________________

int main()
{
	char s[80];
	int i;
	scanf("%s", s);
	i = f(s);
	printf("%d", i);
}
*/

#include "stdio.h"

int f(char ch[100])
{
    int i;
    for (i = 0; ch[i]; i++);//�ж��ַ���ch[i]�Ƿ����
    return i;
}

int main()
{
	char s[80];
	int i;
	scanf("%s", s);
	i = f(s);
	printf("%d", i);
}