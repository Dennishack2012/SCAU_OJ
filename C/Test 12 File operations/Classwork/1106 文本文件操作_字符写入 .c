/*
�ɼ�������������ַ��������ŵ�����Сд�ַ�bye��Ϊ������־�����������ַ�������bye����д���½����ļ�answer.txt�У�ע���ļ����ڵ�ǰĿ¼���� ����ɸù��ܣ���ע�⣬����⣬�벻Ҫʹ��return 0�����������Ӱ�����ж��д�
������������������£�
He, can you write the code?
Yes, you can.bye
No, you can't.
������ִ�к����ļ�answer.txt���������£�
He, can you write the code?
Yes, you can.bye

��ע����No, you can't.��bye֮�����Բ������
��ע�������в�Ҫʹ��return��exit()�������������У�

#include "stdio.h"

main()
{
_______________________
}
*/

#include "stdio.h"

int main()
{
	FILE *fp;//�����ļ�ָ��
	char ch, ch1 = ' ', ch2 = ' ', ch3 = ' ';
	if ((fp = fopen("answer.txt", "w")) == NULL)//�ж��ļ��Ƿ�򿪳ɹ�
	{
		return 1;
	}
	while ((ch = getchar()) != EOF)//�ж��Ƿ��������
	{
		fputc(ch, fp);//���ַ�д���ļ�
		ch1 = ch2; ch2 = ch3; ch3 = ch;//��������ַ���ֵ��ch1��ch2��ch3
		if (ch1 == 'b' && ch2 == 'y' && ch3 == 'e')//�ж��Ƿ�����bye
			break;//����ѭ��
	}
	fclose(fp);//�ر��ļ�
}