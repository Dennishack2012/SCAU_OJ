//���������ַ���s1��s2(ÿ����ռһ�У��Ի��лس�������)�����������ַ����������ַ���ASCII��ֵ֮�͵Ĳ

#include <stdio.h>

int main()
{
	int i=0,j=0;
	char s1,s2;
	while ((s1 = getchar()) != '\n')
		i += s1;
	while((s2=getchar())!= '\n')
		j += s2;
	printf("%d\n",i-j);
	return 0;
}