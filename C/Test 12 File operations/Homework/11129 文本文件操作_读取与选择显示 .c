/*
�ڵ�ǰĿ¼�д����ļ���Ϊ"case1.in"���ı��ļ�����Ҫ��򿪸��ļ�����������������ַ���ֻ�����е������ַ����Ⱥ�˳����ʾ����Ļ�ϡ�

����case1.in�������£�
13 cats and 22 bikes
������Ļ�����������£�
1322

#include "stdio.h"

main()
{
    FILE *fp;
    char ch;

    if((_______________________)==NULL)
        return 0;
    while(_______________________)
    {
        _______________________
    }
    fclose(fp);
}
*/

#include "stdio.h"

main()
{
    FILE* fp;
    char ch;

    if ((fp=fopen("case1.in","r")) == NULL)//���ļ�
        return 0;
    while ((ch=fgetc(fp))!=EOF)//��ȡ�ļ�
    {
        if (ch>='0' && ch<='9')//�ж��Ƿ�Ϊ����
		{
			putchar(ch);//���
		}
    }
    fclose(fp);//�ر��ļ�
}