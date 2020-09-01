#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 999999999

// для нахождения нок двух переменных
int func_2(int a, int b)
{
	int simple;
	for (simple=2; simple<MAX_NUM; simple++)
	{
		if ((simple%a==0)&&(simple%b==0))
			return simple;
	}
	return -1;
} 

// для нахождения нок трех переменных
int func_3(int a, int b, int c)
{
	int simple;
	for (simple=2; simple<MAX_NUM; simple++)
	{
		if ((simple%a==0)&&(simple%b==0)&&(simple%c==0))
			return simple;
	}
	return -1;
}

// для нахождения нок четырех переменных
int func_4(int a, int b, int c, int d)
{
	int simple;
	for (simple=2; simple<MAX_NUM; simple++)
	{
		if ((simple%a==0)&&(simple%b==0)&&(simple%c==0)&&(simple%d==0))
			return simple;
	}
	return -1;
}


void NOK()
{
	int count=0;	
	int a=0, b=0, c=0, d=0, nok;
	
	printf("Количество переменых: ");
	scanf("%d", &count);
	switch(count)
	{
	case 2:
		printf ("a: ");
		scanf ("%d",&a);
		printf ("b: ");
		scanf ("%d",&b);

		nok=func_2(a, b);
		printf ("\nNOK: %d\n", nok);
		break;
	case 3:
		printf ("a: ");
		scanf ("%d",&a);
		printf ("b: ");
		scanf ("%d",&b);
		printf ("c: ");
		scanf ("%d",&c);

		nok=func_3(a, b, c);
		printf ("\nNOK: %d\n", nok);
		break;
	case 4:
		printf ("a: ");
		scanf ("%d",&a);
		printf ("b: ");
		scanf ("%d",&b);
		printf ("c: ");
		scanf ("%d",&c);
		printf ("d: ");
		scanf ("%d",&d);

		nok=func_4(a, b, c, d);
		printf ("\nNOK: %d\n", nok);
		break;
	default: 
			printf("Не включен в программу\n");
	}
}
