/*
��д�����г�������н��
#include<stdio.h>
int main( )
{   char   string[30]="How_are_you" ;
	char   *p=&string[0],   *p2=string+8;
    printf("%s,%s\n" , p , p2 ) ;
}
*/

#include <stdio.h>

int main()
{
	printf("How_are_you,you");//����Ϊ���string��ַ��ֵ���������ַͷ+8���ֵ
}