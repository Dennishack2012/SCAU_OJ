/*
�ڵ�ǰĿ¼�д����ļ���Ϊ"case1.in"���ı��ļ�����Ҫ����ʹ��fopen��������򿪸��ļ�����������������ַ��� ������д��ĸ�ģ������ΪСд��ĸ�������ַ����䣬��������ַ���˳������Ļ��������������ɳ��� ��ע�⣬����⣬�벻Ҫʹ��return 0�����������Ӱ�����ж��д�
����case1.in�������£�
Hello my Dear:
Have a GooD Time!
������Ļ�����������£�
hello my dear:
have a good time!

����ʾ�����ύǰҪ�����Լ��Ĵ����Ƿ���ȷ������Դ�ļ�����Ŀ¼�Լ�����һ����Ϊcase1.in���ı��ļ���
���ļ����Լ�����һЩ��ĸ���Ա�����Լ��Ĵ����Ƿ���ȷ��

#include "stdio.h"

main()
{
    FILE *fp;
    char ch;

    if((_______________________)==NULL)
        return 0;
    while(_______________________)
    {
        if ('A'<=ch && ch<='Z')
            ch = ch + 32;
        _______________________;
    }
    fclose(fp);
}
*/

#include "stdio.h"

main()
{
    FILE* fp;
    char ch;

    if ((fp = fopen("case1.in", "r")) == NULL)
        return 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        if ('A' <= ch && ch <= 'Z')
            ch = ch + 32;
        putchar(ch);
    }
    fclose(fp);
}