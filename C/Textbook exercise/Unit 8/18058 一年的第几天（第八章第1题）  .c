/*����һ���ṹ�����ͱ�ʾ�������ͣ������ꡢ�¡��գ��������ж���һ���������͵ı�������������ڵ��ꡢ�¡��գ�
���㲢�����������һ��ĵڼ��졣

#include <stdio.h>

struct DATE
{
_______________________
};

int days(struct DATE date)
{
_______________________
}

int main()
{
    struct DATE d;
    scanf("%d-%d-%d", &d.year, &d.month, &d.day);
    printf("%d", days(d));
}
*/

#include <stdio.h>

struct DATE
{
	int year;
	int month;
	int day;
};

int days(struct DATE date)
{
	int sum = 0;
	int i = 0;
	int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0)
	{
		arr[1] = 29;
	}
	for (i = 0; i < date.month - 1; i++)
	{
		sum += arr[i];
	}
	sum += date.day;
	return sum;
}

int main()
{
	struct DATE d;
	scanf("%d-%d-%d", &d.year, &d.month, &d.day);
	printf("%d", days(d));
	return 0;
}