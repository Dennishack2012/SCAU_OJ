//����һ���ַ�����������80���ַ����Իس����������жϸ��ַ����Ƿ�Ϊ���Ĵ�������������ƴд���������ƴд��һ���ģ����������Y�����������N��
#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, k = 1;
	char ch[80];
	gets(ch);
	for (i = 0, j = strlen(ch) - 1; i < strlen(ch) / 2; i++, j--)
	{
		if (ch[i] != ch[j])
		{
			k = 0;
			break;
		}
	}
	if (k == 1)
		printf("Y");
	else
		printf("N");
	return 0;
}