/*�����ʽ
һ��17λ�����֤�ţ����֤�ŵ�ǰ17λ��


�����ʽ
���������󣨲���17λ��������ַ�����ERROR�������������ȷ��ͨ�����㲹��У��λC�󣬽����������֤����ʾ������*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char id[18];
	int i, sum = 0, C;
	scanf("%s", id);
	if (strlen(id) != 17)
	{
		printf("ERROR");
		return 0;
	}
	for (i = 0; i < 17; i++)
	{
		sum += (id[i] - '0') * (1 << (17 - i));
	}
	C = (12 - sum % 11) % 11;
	if (C == 10)
		id[17] = 'X';
	else
		id[17] = C + '0';
	for (i = 0; i < 18; i++)
		printf("%c", id[i]);
	return 0;
}