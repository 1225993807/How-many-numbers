#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	gets_s(a);
	int flag = 1;
	int i=0 , j;
	int sum =0 ;
label_1:while (((int)a[i] - '0') >= 0 && ((int)a[i] - '0') <= 9 && a[i] != '\0')
{
	if (flag == 1)
	{
		sum++;
		flag = 0;
	}
	i++;
}
		while (((int)a[i] - '0') > 9||((int)a[i] - '0') <0 && a[i] != '\0')
		{
			flag = 1;
			i++;
			goto label_1;
		}
		printf("%d", sum);
		return 0;

}