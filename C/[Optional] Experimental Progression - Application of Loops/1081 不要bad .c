//�ɼ�������һ���ַ�����಻����80���ַ����Իس���������Ҫ����ʵ��ɾ�������ַ��еġ�bad��(Сд)����������Ľ��(�������bad)��

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[81];
	gets(str);
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] == 'b' && str[i + 1] == 'a' && str[i + 2] == 'd')
		{
			for (int j = i; j < len - 2; j++)
			{
				str[j] = str[j + 3];
			}
			len -= 3;
			i -= 3;
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%c", str[i]);
	}
	return 0;
}