#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	int a, b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d %d", a / b, a % b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 5 == 0)
//	{
//		printf("�ǵ���");
//	}
//	else
//	{
//		printf("������");
//	}
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("a=%d", a);
//
//	return 0;
// 
// 
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	int c = 0;
//	c = 5;
//	b += a = c++;
//	printf("%d%d%d", a, b, c);
//	return 0;
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	while (1)
//	{
//		a = 0;
//		scanf("%d", &a);
//		if (a >= 140)
//		{
//			printf("Genius��\n");
//		}
//		else
//		{
//			printf("no Genius\n");
//		}
//	}
////	return 0;
////}
//int main()
//{
//	int a, b = 0;
//	char c = 0;
//	scanf("%d %d", &a, &b);
//	if (a ==b)
//	{
//		c = '=';
//	}
//	else
//	{
//		c = (a > b) ? '>' : '<';
//	}
//	printf("%d %c %d\n", a, c, b);
//	return 0;
////}
//int main()
//{
//	int a,i = 0;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		printf("*");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
////}
//int MID(int x, int y, int z,int max,int min)
//{
//	if (x < max && x > min)
//	{
//		return x;
//	}
//	if (y < max && y > min)
//	{
//		return y;
//	}
//	if (z < max && z > min)
//	{
//		return z;
//	}
//}
//
//int main()
//{
//	int a, b, c = 0;
//	int max, mid, min;
//	scanf("%d%d%d", &a, &b, &c);
//	mid = (a > b) ? a : b;
//	max = (mid > c) ? mid : c;
//	mid = (a < b) ? a : b;
//	min = (mid < c) ? mid : c;
//	mid = MID(a, b, c, max, min);
//	printf("%d %d %d", max, mid, min);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main() 
//{
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a < (b + c) && b < (a + c) && c < (b + a))
//    {
//        if (a == b && b == c && c == a)
//        {
//            printf("Equilateral triangle!");
//        }
//        else if (a == b || a == c || c == b)
//        {
//            printf("lsosceles triangle!");
//        }
//        else
//        {
//            printf("Ordinary triangle!");
//        }
//    }
//    else
//    {
//        printf("Not a triangle!");
//    }
//    return 0;
//}
//int main()
//{
//	int i, count = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if ((i % 10) == 9 || (i / 10) == 9)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("��%d��", count);
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int a, b = 0;
//	a = rand()%10;
//	while (1)
//	{
//		scanf("%d", &b);
//		if (a == b)
//		{
//			break;
//		}
//		else
//		{
//			printf("�´���\n�����԰ɣ�����\n");
//		}
//	}
//	printf("�¶�������");
//	return 0;
//}
//
////

//int main()
//{
//	int i, j, a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (i = 0; i < a; i++)
//		{
//			if (i == 0)
//			{
//				for (j = 0; j < a; j++)
//				{
//					printf("*");
//					if (j < a - 1)
//					{
//						printf(" ");
//					}
//				}
//				printf("\n");
//			}
//			else if (i > 0 && i < a - 1)
//			{
//				printf("*");
//				for (j = 0; j < a - 2; j++)
//				{
//					printf("  ");
//				}
//				printf(" *\n");
//			}
//			else
//			{
//				for (j = 0; j < a; j++)
//				{
//					printf("*");
//					if (j < a - 1)
//					{
//						printf(" ");
//					}
//				}
//				printf("\n");
//			}
//		}
//	}
//	
//	return 0;
//}
//
//
//int main()
//{
//    int arr[10][10] = { 0 };
//    int i, j, m, n = 0;
//    scanf("%d %d", &m, &n);
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            printf("%d", arr[j][i]);
//            if (j < m - 1)
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//double avg(int arr[])
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	return sum / 10;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i ++ )
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("%lf", avg(arr));
//	return 0;
//}
//
//int main()
//{
//	int arr1[] = { 0,1,2,3,4 };
//	int arr2[] = { 5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int temp = 0;
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr1[%d] = %d  ",i,arr1[i]);
//		printf("arr2[%d] = %d\n",i,arr2[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d%d", &a, &b);
//	c = a % b;
//	while (c != 0)
//	{
//		a = b;
//		b = c;
//		c = a % b;
//	}
//	printf("���Լ��ʱ%d", b);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
//		{
//			printf("%d������  ", i);
//		}
//	}
//	return 0;
//}

//}
//int main()
//{
//	int i = 0;
//	int j = -1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = -(sum + (1.0 / i) * j);
//	}
//	printf("%lf", -sum);
//	return 0;
//}

//int max(int arr[])
//{
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		max = (max > arr[i]) ? max : arr[i];
//	}
//	return max;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("���ֵ��%d", max(arr));
//	return 0;
//}

//int main()
//{
//	int i, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d	", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = {"abcde"};
//	printf(arr);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int a, i = 0;
//    int rig, lef = 0;
//    char arr1[20] = {0};
//    char arr2[22] = {0};
//    for (i = 0; i < 20; i++)
//    {
//        arr1[i] = '*';
//    }
//    for (i = 0; i < 22; i++)
//    {
//        arr2[i] = ' ';
//    }
//    while (scanf("%d", &a) != EOF)
//    {
//        rig = a - 1;
//        lef = 0;
//        while (lef < a)
//        {
//            arr2[lef] = arr1[lef];
//            arr2[rig] = arr1[rig];
//            for (i = 0; i < a; i++)
//            {
//                printf("%c ", arr2[i]);
//            }
//            printf("\n");
//            arr2[lef] = ' ';
//            arr2[rig] = ' ';
//            lef++;
//            rig--;
//        }
//    }
//    return 0;
//}
//
//void Burt(int arr[], int sz)
//{
//	int i, j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}

//int main()
//{
//	int arr[1000] = { 0 };
//	int a, b, c, i = 0;
//	scanf("%d %d", &a, &b);
//	c = a + b;
//	for (i = 0; i < c; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Burt(arr, 1000);
//	for (i = 1000 - c; i < 1000; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <math.h>
//
//int prime(int i)
//{
//	int j = 0;
//	int z = 1;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			z = 0;
//			break;
//		}
//	}
//	return z;
//}
//int main()
//{
//	int i = 100;
//	for (i = 100; i <= 200; i++)
//	{
//		if (prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//void Leap(int a)
//{
//	if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("��������");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Leap(a);
//	return 0;
//}
//
//void multab(int a)
//{
//	int i, j = 0;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	multab(a);
//	return 0;
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int lef = 0;
//	int rig = sz - 1;
//	while (lef < rig)
//	{
//		int temp = 0;
//		temp = arr[lef];
//		arr[lef] = arr[rig];
//		arr[rig] = temp;
//		lef++;
//		rig--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	init(arr, 10);
//	print(arr, 10);
//	reverse(arr, 10);
//	print(arr, 10);
//	return 0;
//// 
//
//int main()
//{
//	int count = 0;
//	int rmb = 20;
//	int bottle = 0;
//	for (rmb = 20; rmb > 0;rmb--)
//	{
//		bottle++;
//		count++;
//	}
//	for (; bottle > 1;)
//	{
//		bottle -= 2;
//		count++;
//		bottle++;
//	}
//	printf("����%dƿ����\n", count);
//	return 0;
//}
//
//int main()
//{
//	char arr1[13] = { 0 };
//	char arr2[13] = { 0 };
//	int i = 0;
//	int lef = 6;
//	int rig = 6;
//	for (i = 0; i < 13; i++)
//	{
//		arr1[i] = '*';
//	}
//	for (i = 0; i < 13; i++)
//	{
//		arr2[i] = ' ';
//	}
//	while (lef >= 0)
//	{
//		arr2[lef] = arr1[lef];
//		arr2[rig] = arr1[rig];
//		rig++;
//		lef--;
//		for (i = 0; i < 13; i++)
//		{
//			printf("%c", arr2[i]);
//		}
//		printf("\n");
//	}
//	rig--;
//	lef++;
//	while (lef <rig )
//	{
//		arr2[lef] = ' ';
//		arr2[rig] = ' ';
//		rig--;
//		lef++;
//		for (i = 0; i < 13; i++)
//		{
//			printf("%c", arr2[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int /*power(int a,int n)
//{
//	int i = 0;
//	int r = 1;
//	for (i < 0; i < n; i++)
//	{
//		r = r * a;
//	}
//	return r;
//}
//
//int SZ(int a)
//{
//	int count = 0;
//	while (1)
//	{
//		if (a / 10 != 0)
//		{
//			count++;
//			a = a / 10;
//		}
//		else
//		{
//			count++;
//			break;
//		}
//	}
//	return count;
//}
//
//int Narnum(int a,int sz)
//{
//	if (a == 0)
//	{
//		return 0;
//	}
//	return power(a%10,sz) + Narnum(a / 10, sz);
//}
//
//int main()
//{
//	int i = 0;
//	int z, sz = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		sz = SZ(i);
//		z = Narnum(i,sz);
//			if (z == i)
//			{
//				printf("%d ", i);
//			}
//	}
//	return 0;
////}*/
//
//int main()
//{
//	int a, i, sum = 0;
//	scanf("%d", &a);
//	int arr[5] = { 0 };
//	arr[0] = a;
//	arr[1] = a * 11;
//	arr[2] = a * 111;
//	arr[3] = a * 1111;
//	arr[4] = a * 11111;
//	for (i = 0; i < 5; i++)
//	{
//		sum = sum + arr[i];
//	}
//	printf("%d", sum);
// 	return 0;
//}

//int Fib(int a)
//{
//	if (a == 1 || a == 2)
//	{
//		return 1;
//	}
//	return Fib(a - 1) + Fib(a - 2);
//}
//
////
////int Fib(int a)
////{
////	int i, z = 0;
////	int x = 1;
////	int y = 1;
////	if (a <= 2)
////	{
////		return 1;
////	}
////	for (i = 0; i < a-2; i++)
////	{
////		z = x + y;
////		x = y;
////		y = z;
////	}
////	return z;
////}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	printf("%d", Fib(a));
//	return 0;
//}

//
//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//
//int main()
//{
////    printf("%d", Fun(2));
////    return 0;
////}
//
//int fun(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	return n * fun(n, k - 1);
//}
//
//int main()
//{
//	int a, b = 0;
//	while (1)
//	{
//		scanf("%d%d", &a, &b);
//		printf("��%d\n", fun(a, b));
//	}
//	return 0;
//}
////
//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	return n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", DigitSum(a));
//	return 0;
//}
//
//int facl(int n)
//{
//	if (n == 1 || n == 0)
//	{
//		return 1;
//	}
//	return n * facl(n - 1);
//}
////
////int facl(int n)
////{
////	int i = 0;
////	int r = 1;
////	for (i = 1; i <= n; i++)
////	{
////		r = r * i;
////	}
////	return r;
////}
//
//int main()
//{
//	int a = 0;
//	while (1)
//	{
//		scanf("%d", &a);
//		printf("��%d\n", facl(a));
//	}
//	return 0;
//}

//void print(int a)
//{
//	if (a < 10)
//	{
//		printf("%d\n",a);
//		return;
//	}
//	printf("%d\n", a % 10);
//	print(a / 10);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
////	return 0;
////}
//
//void binsrch(int arr[], int a, int sz)
//{
//	int lef = 0;
//	int rig = sz - 1;
//	while (lef <= rig)
//	{
//		int mid = (lef + rig) / 2;
//		if (arr[mid] > a)
//		{
//			rig = mid - 1;
//		}
//		else if(arr[mid] < a)
//		{
//			lef = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��� �ǵ�%d��Ԫ��%d\n", mid, arr[mid]);
//			return;
//		}
//	}
//	printf("�Ҳ���\n");
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int a, i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	while(1)
//	{
//		scanf("%d", &a);
//		binsrch(arr, a, sz);
//	}
////	return 0;
////}
//
//int main()
//{
//	int a = 114514;
//	int b = 1919810;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
//
//int co(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	count = co(a);
//	printf("��%d��1", count);
//	return 0;
//}

//void even(int a)
//{
//	int arr[16] = { 0 };
//	int i = 0;
//	a = a >> 1;
//	for (i = 0; i < 16; i++)
//	{
//		arr[i] = a & 1;
//		a = a >> 2;
//	}
//	printf("ż��λ��");
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void odd(int a)
//{
//	int arr[16] = { 0 };
//	int i = 0;
//	for (i = 0; i < 16; i++)
//	{
//		arr[i] = a & 1;
//		a = a >> 2;
//	}
//	printf("����λ��");
//	for (i = 15; i >= 0; i--)
//	{
//		printf(" %d", arr[i]);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int a = 0;
//	while (1)
//	{
//		scanf("%d", &a);
//		odd(a);
//		even(a);
//	}
//	return 0;
//}#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
////    return 0;
////}
//
//int srch(int arr[], int sz)
//{
//	int i, j = 0;
//	int r = 0;
//	for (i = 0; i < sz; i++)
//	{
//		r = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (j == i)
//			{
//				continue;
//			}
//			if (arr[i] == arr[j])
//			{
//				r = 1;
//				break;
//			}
//		}
//		if (r == 0)
//		{
//			return arr[i];
//		}
//	}
//	return 666;
//}
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("������%d", srch(arr, sz));
//	return 0;
//}



//int main()
//{
//    char arr[100] = { 0 };
//    char* p = arr;
//    int i = 100;
//    int r = 0;
//    fgets(p,100,stdin);
//    for (i = 99; i >= 0; i--)
//    {
//        if (r = 0)
//        {
//            if (*(p + i) == ' ')
//            {
//                continue;
//            }
//         }
//        else
//        {
//            printf("%c", *(p + i));
//            r = 1;
//        }
//    }
//    return 0;
//}

//#include <string.h>
// 
//int main()
//{
//	char arr[] = {"abcdef"};
//	char* p = arr;
//	int a = 0;
//	int sz = strlen(arr);
//	printf("������");
//	scanf("%d", &a);
//	int b = a;
//	while (a < sz)
//	{
//		printf("%c", *(p + a));
//		a++;
//	}
//	p = arr;
//	sz = 0;
//	while (sz < b)
//	{
//		printf("%c", *(p + sz));
//		sz++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//#include <string.h>
//
//void Bust(int* p, int sz)
//{
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int* pp = p;
//		int r = 0;
//		for (j = 0; j < sz-i-1; j++)
//		{
//			if (*pp > *(pp + 1))
//			{
//				int temp = *pp;
//				*pp = *(pp + 1);
//				*(pp + 1) = temp;
//				r = 1;
//			}
//			pp++;
//		}
//		if (r = 0)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {2,3,5,5,9,0,8,6,3,3};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	Bust(p, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//#include <string.h>
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { "nddsfnodvofgd" };
//	char* p = arr;
//	int sz1 = my_strlen(p);
//	int sz2 = strlen(p);
//	printf("%d\n%d", sz1, sz2);
//	return 0;
////}
//int arr[10] = { 0 };
//int* fun(int* p,int sz)
//{
//	int i = 0;
//	int n = 0;
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = p[n];
//		n += 2;
//	}
//	n = 0;
//	for (i = 5; i < 10; i++)
//	{
//		arr[i] = p[n + 1];
//		n += 2;
//	}
//	return arr;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = fun(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//#include <string.h>
//
//int fun(char* p1, char* p2)
//{
//	int sz1 = strlen(p1);
//	int sz2 = strlen(p2);
//	int i = 0;
//	char* p = p2;
//	while (*p1 != *p2)
//	{
//		p2++;
//	}
//	for (i = 0; i < sz1; i++)
//	{
//		if (p2 > p + sz2 - 1)
//		{
//			p2 = p;
//		}
//		if (*p1 != *p2)
//		{
//			return 0;
//		}
//		p2++;
//		p1++;
//	}
////	return 1;
//}
////
////int main()
////{
////	char s1[] = "abcde";
////	char s2[] = "cdeab";
////	char s3[] = "acbde";
////	printf("%d ", fun(s1, s2));
////	printf("%d ", fun(s1, s3));
////	return 0;
////}
////
//
//void search(int arr[5][5], int x, int y, int k)
//{
//	int i = 0;
//	int j = y - 1;
//	while (i < x && j >= 0)
//	{
//		if (arr[i][j] < k)
//		{
//			i++;
//		}
//		else if (arr[i][j] > k)
//		{
//			j--;
//		}
//		else
//		{
//			printf("�ҵ�����%d\n", arr[i][j]);
//			return;
//		}
//	}
//	printf("�Ҳ�������\n");
//}
//
//int main()
//{
//	int arr[5][5] = { 0 };
//	int i = 0;
//	int j = 0;
//	int n = 1;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = n;
//			n++;
//		}
//	}
//	while (j--,j>0)
//	{
//		scanf("%d", &n);
//		search(arr, 5, 5, n);
//	}
//	return 0;
//}

//int main()
//{
//	char k;
//	for (k = 'a'; k < 'e'; k++)
//	{
//		if ((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd') == 3)
//		{
//			printf("������%c",k);
//		}
//	}
//	return 0;
//}

//void yang(int arr[][10], int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (i == j || j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d	", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	yang(arr, 10);
//	return 0;
////}
//
//void fun(int (*p)(int, int))
//{
//	int a,b = 0;
//	printf("������������:");
//	scanf("%d %d", &a, &b);
//	printf("%d\n", p(a, b));
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div(int a, int b)
//{
//	return a / b;
//}
//void menu()
//{
//	printf("***********������************\n");
//	printf("*****************************\n");
//	printf("*******1.�ӷ�	2.����*******\n");
//	printf("*******3.�˷�	4.����*******\n");
//	printf("*******0.�˳�	*************\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("exit");
//			break;
//		case 1:
//			fun(add);
//			break;
//		case 2:
//			fun(sub);
//			break;
//		case 3:
//			fun(mul);
//			break;
//		case 4:
//			fun(div);
//			break;
//		defult:
//			printf("�������");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//void search(int* p, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int r = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (i == j)
//			{
//				continue;
//			}
//			if (*(p + i) == *(p + j))
//			{
//				r = 1;
//				break;
//			}
//		}
//		if (r == 0)
//		{
//			printf("�䵥��%d\n", *(p + i));
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	search(arr,sz);
//	return 0;
//}
//
//int main()
//{
//	int a,b = 0;
//	int day = 0;
//	scanf("%d %d", &a, &b);
//	if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
//	{
//		if (b == 2)
//		{
//			day = 29;
//		}
//		else if (b<8 && b%2 != 0 || b>7 && b%2 == 0)
//		{
//			day = 31;
//		}
//		else
//		{
//			day = 30;
//		}
//	}
//	else
//	{
//		if (b == 2)
//		{
//			day = 28;
//		}
//		else if (b < 8 && b % 2 != 0 || b>7 && b % 2 == 0)
//		{
//			day = 31;
//		}
//		else
//		{
//			day = 30;
//		}
//	}
//	printf("%d", day);
//	return 0;
//}


//int main()
//{
//	/*struct stu arr[] = { {"zhangsan",22},{"lisi",18},{"wangwu",26} };*/
//	int arr[] = { 2,4,5,3,7,1,9,0,6,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*qsort(arr, sz, sizeof(arr[0]), cmp_by_struct);*/
//	qsort(arr, sz, sizeof(arr[0]), cmp_by_int);
//	printarr(arr,sz);
//	return 0;
//}

//#include <stdlib.h>
//
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_by_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//int cmp_by_struct(const void* p1, const void* p2)
//{
//	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
//}
//
//void printarr(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//
//void Exchange(char* pp1, char* pp2, size_t width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char temp = *pp1;
//		*pp1 = *pp2;
//		*pp2 = temp;
//		pp1++;
//		pp2++;
//	}
//}
//
//void my_qsort(void* arr, size_t sz, size_t width, int (*p)(const void*, const void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (p(((char*)arr + j * width), ((char*)arr + (j + 1)*width)) > 0)
//			{
//				Exchange((char*)arr + j * width, (char*)arr + (j + 1) * width,width);
//			}
//		}
//	}
//}
//
////
//
//int main()
//{
//	/*struct stu arr[] = { {"zhangsan",22},{"lisi",18},{"wangwu",26} };
//	int sz = sizeof(arr) / sizeof(arr[0]);*/
//	//qsort(arr, sz, sizeof(arr[0]), cmp_by_struct);
//	int arr[] = { 2,4,5,3,7,1,9,0,6,8 };
//	my_qsort(arr, sz, sizeof(arr[0]), cmp_by_int);
//	printarr(arr,sz);
//	return 0;
//}

#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	return 1 + my_strlen(str + 1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = my_strlen(arr);
//	printf("%d", sz);
//	return 0;
//}
//#include <assert.h>
//
//char* my_strcpy(char* des, const char* str)
//
//{
//	assert(des && str);
//	char* ret = des;
//	while (*des++ = *str++);
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "xxxxxxxxx";
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}
//
//char* my_strcat(char* des, const char* str)
//{
//	assert(des && str);
//	char* ret = des;
//	while (*(++des));
//	while (*des++ = *str++);
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "ghijk";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdeg";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}
////
//char* my_strstr(const char* str1, const char* str2)
//{
//	if (*str2 == '\0')
//	{
//		return str1;
//	}
//	assert(str1 && str2);
//	char* p1 = NULL;
//	char* p2 = NULL;
//	char* temp = str1;
//	while (*temp)
//	{
//		p1 = temp;
//		p2 = str2;
//		while (*p1 && *p2 && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return temp;
//		}
//		if (*p1 == '\0')
//		{
//			break;
//		}
//		temp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char* p1 = "wo shi ikun 666";
//	char* p2 = "ikun";
//	char* ret =my_strstr(p1,p2);
//	printf("%s\n", ret);
//	return 0;
//}

//char* my_strncpy(char* des, const char* str,int sz)
//{
//	assert(des && str);
//	char* ret = des;
//	while ((*des++ = *str++) && --sz);
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "114514";
//	char arr2[] = "xxxxxxxxx";
//	printf("%s\n", my_strncpy(arr2, arr1, 0));
//	//printf("%s\n", my_strncpy(arr2, arr1, 2));
//	//printf("%s\n", my_strncpy(arr2, arr1, 3));
//	return 0;
//}
//
//char* my_strncat(char* des, const char* str, int sz)
//{
//	assert(des && str);
//	char* ret = des;
//	while (*(++des));
//	while ((*des++ = *str++) && --sz);
//	*des = '\0';
//	return ret;
//}
//
//int main()
//{
//	char arr[20] = { "114514 " };
//	char* str = "1919810";
//	printf("%s\n", my_strncat(arr, str, 1));
//	printf("%s\n", my_strncat(arr, str, 2));
//	printf("%s\n", my_strncat(arr, str, 3));
//	return 0;
////}
//void* my_memcpy(void* des,const void* str,int sz) 
//{
//	assert(des && str);
//	void* ret = des;
//	while (sz--)
//	{
//		*((char*)des) = *((char*)str);
//		(char*)des = (char*)des + 1;
//		(char*)str = (char*)str + 1;
//
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[] = { 9,8,7,6,5,4,3 };
//	int i = 0;
//	my_memcpy(arr1, arr2, 4 * sizeof(int));
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
////}
//
//void* my_memmove(void* des,const void* str,int sz) 
//{
//	assert(des && str);
//	void* ret = des;
//	if (des > str)
//	{
//		while (sz--)
//		{
//		*((char*)des + sz) = *((char*)str + sz);
//		}
//	}
//	else
//	{
//		while (sz--)
//		{
//			*((char*)des) = *((char*)str);
//			(char*)des = (char*)des + 1;
//			(char*)str = (char*)str + 1;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	my_memmove(arr1 + 3, arr1, 6 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
//	printf("\n");
//	my_memmove(arr2, arr2 + 3, 6 * sizeof(int));
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//int func_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return p;
//}
//
//int main()
//{
//	int a = 0x11223344;
//	if (func_sys)
//	{
//		printf("��С���ֽ���");
//	}
//	else
//	{
//		printf("�Ǵ���ֽ���");
//	}
//	return 0;
//}

//
//int my_atoi(const char* str)
//{
//	int sign = 1;
//	int sum = 0;
//	if (*str == '-')
//	{
//		sign = -1;
//		str++;
//	}
//	while (*str)
//	{
//		sum = (*str - 48) + sum * 10;
//		str++;
//	}
//	return sum * sign;
//}
//
//int main()
//{
//	char* str1 = "114514";
//	char* str2 = "-1919810";
//	printf("%d\n%d", my_atoi(str1), my_atoi(str2));
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int arr[50] = { 0 };
//    int i = 0;
//    int a = 0;
//    scanf("%d", &a);
//    int ret = a;
//    while (a--)
//    {
//        scanf("%d", &arr[i]);
//        i++;
//    }
//    scanf("%d", &a);
//    for (i = 0; i < ret; i++)
//    {
//        if (arr[i] == a)
////        {
////            continue;
////        }
////        printf("%d ", arr[i]);
////    }
////    return 0;
////}
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//
//int main()
//{
//	printf("%d", sizeof(struct A));
////}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int* nums = (int*)malloc(1000 * (sizeof(int)));
//    if (nums == NULL)
//    {
//        perror("malloc");
//        return 1;
//    }
//    int* ret = nums;
//    int n = 0;
//    int i = 0;
//    while ()
//    {
//        scanf("%d,", nums);
//        nums++;
//        n++;
//    }
//    while (i < (2 * n))
//    {
//        printf("%d ", *(ret + i));
//        i++;
//    }
//    free(ret);
//    ret = NULL;
//    nums = NULL;
//    return 0;
//}
//
//void func1(int* arr, int size)
//{
//    int lef = 0;
//    int rig = size - 1;
//    while (lef < rig)
//    {
//        int tmp = arr[rig];
//        arr[rig--] = arr[lef];
//        arr[lef++] = tmp;
//    }
//}
//
//
//
//void rotate(int* nums, int numsSize, int k)
//{
//    func1(nums, k + 1);
//    func1(nums + k + 1, numsSize - k - 1);
//    func1(nums, numsSize);
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7 };
//    rotate(arr, 7, 3);
//    for (int i = 0; i < 7; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
////}
//
//
//int removeElement(int* nums, int numsSize, int val)
//{
//    int j = 0;
//    int count = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        for (j = i; j < numsSize - i - 1; j++)
//        {
//            if (nums[j] == val)
//            {
//                int tmp = nums[j];
//                nums[j] = nums[j + 1];
//                nums[j + 1] = nums;
//            }
////            count++;
////        }
////    }
////    return count;
////}
//
//int removeElement(int* nums, int numsSize, int val)
//{
//    int src = 0;
//    int dst = 0;
//    while (src < numsSize)
//    {
//        if (nums[src] == val)
//        {
//            src++;
//            continue;
//        }
//        nums[dst++] = nums[src++];
//    }
//}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//typedef struct ListNode sl;
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    if (head == NULL)
//    {
//        return head;
//    }
//    sl* pnew = NULL;
//    sl* phead = pnew;
//    sl* pcur = head;
//    while (pcur)
//    {
//        if (pcur->val != val)
//        {
//            if (phead == NULL)
//            {
//                phead = pnew = pcur;
//            }
//            else
//            {
//                pnew->next = pcur;
//                pnew = pnew->next;
//            }
//        }

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//typedef struct ListNode sl;//�����������ض���
//
//struct ListNode* reverseList(struct ListNode* head)
//{
//    if (head == NULL)
//    {
//        return head;
//    }
//    sl* p1 = NULL;
//    sl* p2 = head;
//    sl* p3 = p2->next;
//
//    while (p2)
//    {
//        p2->next = p1;
//        p1 = p2;
//        p2 = p3;
//        if (p3)
//        {
//            p3 = p3->next;
//        }
//    }
//    return p1;
//}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
// */
//typedef struct ListNode sl;//�����������ض���
//
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    if (head == NULL)//�ж������Ƿ�Ϊ��
//    {
//        return head;//Ϊ���򷵻ظ�����
//    }
//    sl* ptail = NULL;//����һ�������� 
//    sl* phead = ptail;//phead���ڷ��� ptail����ƶ�ִ��β��
//    sl* pcur = head;//����һ��ָ��������� 
//    while (pcur)
//    {
//        if (pcur->val != val)//��ֵ������val�Ľڵ�β�嵽�������� 
//        {
//            if (phead == NULL)//�ж��������Ƿ�Ϊ��
//            {
//                phead = ptail = pcur;
//            }
//            else
//            {
//                ptail->next = pcur;//ִ��β�����
//                ptail = ptail->next;//ptail����ƶ�
//            }
//        }
//        pcur = pcur->next;//pcur������
//    }
//    if (ptail)//��ptail��Ϊ�� ���������β�ڵ���Ϊ��
//    {
//        ptail->next = NULL;
//    }
//    return phead;//�����������ͷ�ڵ�
//}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//typedef struct ListNode sl;//�����������ض���
//
//struct ListNode* reverseList(struct ListNode* head)
//{
//    if (head == NULL)//�ж������Ƿ�Ϊ�� 
//    {
//        return head;//Ϊ���򷵻�ԭ����
//    }
//    sl* p1 = NULL;//��������ָ�� 
//    sl* p2 = head;//p1 p2���ڸı�ָ��
//    sl* p3 = p2->next;//p3���ڼ�¼p2ԭ������һ���ڵ�
//
//    while (p2)
//    {
//        p2->next = p1;//��p2����һ���ڵ��Ϊָ��p1
//        p1 = p2;//p1 p2 p3 ������
//        p2 = p3;
//        if (p3)//��p3Ϊ����p2�ѵ���β�ڵ� p3����������
//        {
//            p3 = p3->next;
//        }
//    }
//    //����ѭ����p2Ϊ�� ��ʱp1Ϊ�������ͷ�ڵ�
//    return p1;//����p1
//}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//typedef struct ListNode sl;//���������ض���
//struct ListNode* middleNode(struct ListNode* head)
//{
//    if (head == NULL)//�ж������Ƿ�Ϊ��
//    {
//        return head;//Ϊ���򷵻�ԭ����
//    }
//    sl* slow = head;//��������ָ��
//    sl* fast = head;//ͬʱ������������
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;//��ָ��һ���ƶ�����
//        slow = slow->next;//��ָ��һ���ƶ�һ��
//    }
//    //����ѭ�����ָ���Ѿ�������������
//    return slow;
//}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//typedef struct ListNode sl; //���������ض���
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    if (list1 == NULL)//��list1Ϊ����ֱ�ӷ���list2
//    {
//        return list2;
//    }
//    if (list2 == NULL)//��list2Ϊ����ֱ�ӷ���list1
//    {
//        return list1;
//    }
//    sl* p1 = list1;//��������ָ��ֱ����list1��list2
//    sl* p2 = list2;
//    sl* phead = (sl*)malloc(sizeof(sl));//����һ������������һ���ڴ�
//    sl* ptail = phead;
//    while (p1 && p2)
//    {
//        if (p1->val < p2->val)//�жϽڵ�ֵ��С
//        {
//            ptail->next = p1;//p1ֵС��β�嵽������ĩ��
//            ptail = ptail->next;//ptail����ƶ�
//            p1 = p1->next;//p1������
//        }
//        else
//        {
//            ptail->next = p2;// p2ֵС��β�嵽������ĩ��
//            ptail = ptail->next; //ptail����ƶ�
//            p2 = p2->next;//p2������
//        }
//    }
//    //����ѭ����p1��p2��һ����������
//
//    if (p1)//p1��Ϊ����δ������
//    {
//        ptail->next = p1;//p1ʣ�ಿ��β�嵽������ĩ��
//    }
//    else//��֮��p2��δ������
//    {
//        ptail->next = p2;//p2ʣ�ಿ��β�嵽������ĩ��
//    }
//    sl* pcur = phead->next;//��¼phead����һ���ڵ�
//    free(phead);//�ͷ�phead������ڴ�
//    phead = NULL;//phead��Ϊ�� �������Ұָ��
//    return pcur;//���ؼ�¼������pcur
//}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//typedef struct ListNode sl;//���������ض���
//int kthToLast(struct ListNode* head, int k)
//{
//    if (head == NULL)//�ж�head�Ƿ�Ϊ��
//    {
//        return head;//Ϊ����ֱ�ӷ��ظ�������
//    }
//    sl* slow = head;//��������ָ��
//    sl* fast = head;//�ֱ������������
//    while (k--)//��ָ��������ƶ�k��
//    {
//        fast = fast->next;
//    }
//    while (fast)//����ָ��һ���ƶ�
//    {
//        fast = fast->next;
//        slow = slow->next;
//    }
//    //��ָ��������� ����ѭ��
//    return slow->val;//������ָ��val��ֵ
//}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//typedef struct ListNode sl;//���������ض���
//struct ListNode* partition(struct ListNode* head, int x)
//{
//    if (head == NULL)//�ж������Ƿ�Ϊ��
//    {
//        return head;//Ϊ���򷵻ظ�������
//    }
//    //����һ�����ڴ��С��x�Ľڵ������ ������һ���ڴ�
//    sl* small_head = (sl*)malloc(sizeof(sl));
//    sl* small_tail = small_head;
//    //����һ�����ڴ�Ŵ���x�Ľڵ������ ������һ���ڴ�
//    sl* big_head = (sl*)malloc(sizeof(sl));
//    sl* big_tail = big_head;
//    sl* pcur = head;//����һ��ָ�������������
//    while (pcur)
//    {
//        //pcurָ��ڵ��ֵС��x ��β�嵽[С]����ĩ��
//        if (pcur->val < x)
//        {
//            small_tail->next = pcur;
//            small_tail = small_tail->next;//small_tail����ƶ�
//            pcur = pcur->next;//pcur������
//        }
//        //pcurָ��ڵ��ֵ����x ��β�嵽[��]����ĩ��
//        else
//        {
//            big_tail->next = pcur;
//            big_tail = big_tail->next;//big_tail����ƶ�
//            pcur = pcur->next;//pcur������
//        }
//    }
//    //����ѭ�� pcur��������
//    big_tail->next = NULL;//��[��]����β�ڵ����һ���ڵ�ָ��Ϊ��
//    small_tail->next = big_head->next;//ƴ��[��][С]����
//    sl* p = small_head->next;//��¼[С]����ĵ�һ����Ч�ڵ�
//    free(small_head);//�ͷ�[��][С]�����ٵ��ڴ�
//    free(big_head);
//    small_head = big_head = NULL;//��[��][С]����ͷ�ڵ���Ϊ�� ����Ұָ��
//    return p;//���ؼ�¼�µ�ƴ�������ͷ�ڵ�
//}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//typedef struct ListNode sl;//���������ض���
//
//sl* find_mid_node(sl* head)//���������ҳ������м�ڵ�
//{
//    sl* slow, * fast;
//    slow = fast = head;
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    return slow;
//}
//sl* reverse_list(sl* head)//����������ת����
//{
//    sl* p1, * p2, * p3;
//    p1 = NULL;
//    p2 = head;
//    p3 = p2->next;
//    while (p2)
//    {
//        p2->next = p1;
//        p1 = p2;
//        p2 = p3;
//        if (p3)
//        {
//            p3 = p3->next;
//        }
//    }
//    return p1;
//}
//bool isPalindrome(struct ListNode* head)
//{
//    if (head == NULL)//�ж������Ƿ�Ϊ��
//    {
//        return true;//Ϊ���򷵻�true
//    }
//    sl* mid = find_mid_node(head);//�ҵ������м�ڵ�
//    sl* right = reverse_list(mid);//��ת�м�ڵ����������
//    sl* left = head;
//    while (right)//����ָ��ͬʱ�������� �ж�ֵ�Ƿ����
//    {
//        if (right->val != left->val)
//        {
//            return false;//ֵ������򷵻�false
//        }
//        right = right->next;//������������
//        left = left->next;
//    }
//    return true;//�ɹ��������� ��ض�Ϊ�������� ����true 
//}

//int main()
//{
//	int chicken = 0;
//	for (chicken = 0; chicken <= 30;chicken++)
//	{
//		int rabbit = 30 - chicken;
//		if ((chicken * 2 + rabbit * 4) == 90)
//		{
//			printf("����%dֻ,������%dֻ", chicken, rabbit);
//		}
//	}
//	return 0;
// }


 ///** Definition for singly-linked list.*/
// struct ListNode {
//     int val;
//      struct ListNode *next;
//  };
// 
//typedef struct ListNode sl;//���������ض���
//struct ListNode* getIntersectionNode(struct ListNode* headA, 
//    struct ListNode* headB)
//{
//    sl* p1 = headA;//��������ָ���������
//    sl* p2 = headB;
//    int n1 = 0;//ͳ�Ƴ�ÿ������ĳ���
//    int n2 = 0;
//    while (p1)
//    {
//        p1 = p1->next;
//        n1++;
//    }
//    while (p2)
//    {
//        p2 = p2->next;
//        n2++;
//    }
//    int i = abs(n1 - n2);//�������������ĳ��Ȳ�i
//    sl* plong = headA;//��������ָ���������
//    sl* pshort = headB;
//    if (n2 > n1)//�������ȸ�����ָ�붨��Ϊplong
//    {
//        plong = headB;
//        pshort = headA;
//    }
//    while (i--)//plong���ƶ�i��
//    {
//        plong = plong->next;
//    }
//    while (pshort && plong)//����ָ��ͬʱ����
//    {
//        if (pshort == plong)//�ж������ڵ��Ƿ����
//        {
//            return pshort;//�����Ϊ�ཻ����
//        }
//        pshort = pshort->next;
//        plong = plong->next;
//    }
//    //����һ��ָ��������� ��δ������ͬ�ڵ� ����ѭ�� 
//    return NULL;//��Ϊ�ཻ����
//}

//#include <stdbool.h>
// //Definition for singly-linked list.
//  struct ListNode {
//      int val;
//      struct ListNode *next;
//  };
// 
//typedef struct ListNode sl;//���������ض���
//bool hasCycle(struct ListNode* head)
//{
//    sl* fast = head;//�������ָ��
//    sl* slow = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;//��ָ��һ����һ��
//        fast = fast->next->next;//��ָ��һ�������� 
//            if (fast == slow)//����ָ������ ��ض��л�
//            {
//                return true;
//            }
//    }
//    //�������� ����ָ��δ���� ��ض�������
//    return false;

//// ������Ԫ�� (a, b, c) �ľ��� D
//int calculate_distance(int a, int b, int c) 
//{
//    return abs(a - b) + abs(b - c) + abs(c - a);
//}
//// ������С����
//int find_min_distance(int S1[], int n1, int S2[], int n2, int S3[], int n3)
//{
//    int p1 = 0, p2 = 0, p3 = 0; // ����ָ��ֱ�ָ��S1, S2, S3
//    int min_dist = calculate_distance(S1[0], S2[0], S3[0]); // ��ʼ����С����
//    // ����ֱ��ĳһ������ָ�볬���߽�
//    while (p1 < n1 && p2 < n2 && p3 < n3) 
//    {
//        int a = S1[p1];
//        int b = S2[p2];
//        int c = S3[p3];
//        int currentDist = calculate_distance(a, b, c);
//        // ������С����
//        if (currentDist < min_dist) 
//        {
//            min_dist = currentDist;
//        }
//        // �ƶ���Сֵ��Ӧ��ָ��
//        if (a <= b && a <= c)
//        {
//            p1++;
//        }
//        else if (b <= a && b <= c)
//        {
//            p2++;
//        }
//        else 
//        {
//            p3++;
//        }
//    }
//    return min_dist;
//}
//
//int main() {
//    int S1[] = { -1, 0, 9 };
//    int S2[] = { -25, -10, 10, 11 };
//    int S3[] = { 2, 9, 17, 30, 41 };
//    //����ÿ�����鳤��
//    int n1 = sizeof(S1) / sizeof(S1[0]);
//    int n2 = sizeof(S2) / sizeof(S2[0]);
//    int n3 = sizeof(S3) / sizeof(S3[0]);
//    //����С����
//    int min = find_min_distance(S1, n1, S2, n2, S3, n3);
//    printf("��С����Ϊ: %d\n", min);
//    return 0;
////}
//
////����Ħ��ͶƱ������
//int Moore_Voting(int* arr,int size)
//{
//	int candidate = -1;//��ѡ�˳�ʼΪ-1
//	int count = 0;//��¼��ѡ��Ʊ��
//	int* cur = arr;//����ָ���������
//	while (size--)
//	{
//		if (candidate == -1)
//		{
//			//�����ѡ��Ϊ-1 ��ָ��ָ��Ԫ�ض�Ϊ��ѡ��
//			candidate = *cur;
//			count++;
//		}
//		else
//		{
//			//����ѡ�˲�Ϊ0 �ж�ָ��Ԫ���Ƿ���ں�ѡ��
//			//������Ʊ������1 ����Ʊ������1
//			if (candidate == *cur)
//			{
//				count++;
//			}
//			else
//			{
//				count--;
//			}
//		}
//		//ͶƱ�����۲�Ʊ���Ƿ�Ϊ0 Ϊ0�����ú�ѡ��
//		if (count == 0)
//		{
//			candidate = -1;
//		}
//		//ָ������������
//		cur++;
//	}
//	//���غ�ѡ��
//	return candidate;
//}
//int main()
//{
//	//��������
//	int arr1[] = { 0,5,5,3,5,7,5,5 };
//	int arr2[] = { 0,5,5,3,5,1,5,7 };
//	//�������鳤��
//	int n1 = sizeof(arr1) / sizeof(arr1[0]);
//	int n2 = sizeof(arr2) / sizeof(arr2[0]);
//	//��ӡ��Ԫ�� û����Ԫ���򷵻�-1
//	printf("arr1����Ԫ����%d\n", Moore_Voting(arr1, n1));
//	printf("arr2����Ԫ����%d\n", Moore_Voting(arr2, n2));
//	return 0;
////}
//
//#include <stdlib.h>
//
//int* transpose(int(*arr1)[3], int size)
//{
//	int row = 0;
//	int col = 0;
//	int** arr2 = (int*)malloc(sizeof(int) * size * size);
//	for (row = 0; row < size; row++)
//	{
//		for (col = 0; col < size; col++)
//		{
//			arr2[col][row] = arr1[row][col];
//		}
//	}
//	return arr2;
//}
//
//int main()
//{
//	int arr[][3] = { {1,2,3},{4,5,6},{7,8,9} };//[[1,2,3],[4,5,6],[7,8,9]]
//	int size = 3;
//	int arr_tsp = transpose(arr, size);
//	return 0;
//}
int find_num(int* arr, int size)
{
	int i = 1;
	while (size--)
	{
		
		arr++;
	}
	return i;
}

int main()
{
	int arr1[] = { 1,2,3 };
	int arr2[] = { -5,3,2,3 };
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	printf("%d\n%d", find_num(arr1, n1), find_num(arr2, n2));
	return 0;
}