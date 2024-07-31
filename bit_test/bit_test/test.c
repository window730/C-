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
//		printf("是的捏");
//	}
//	else
//	{
//		printf("不是捏");
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
//			printf("Genius捏\n");
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
//	printf("有%d个", count);
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
//			printf("猜错啦\n再试试吧！！！\n");
//		}
//	}
//	printf("猜对啦！！");
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
//	printf("最大公约数时%d", b);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
//		{
//			printf("%d是闰年  ", i);
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
//	printf("最大值是%d", max(arr));
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
//		printf("是闰年");
//	}
//	else
//	{
//		printf("不是闰年");
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
//	printf("可买%d瓶饮料\n", count);
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
//		printf("是%d\n", fun(a, b));
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
//		printf("是%d\n", facl(a));
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
//			printf("找到了 是第%d号元素%d\n", mid, arr[mid]);
//			return;
//		}
//	}
//	printf("找不到\n");
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
//	printf("有%d个1", count);
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
//	printf("偶数位是");
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
//	printf("奇数位是");
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
//	printf("单身狗是%d", srch(arr, sz));
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
//	printf("左旋：");
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
//			printf("找到了是%d\n", arr[i][j]);
//			return;
//		}
//	}
//	printf("找不到！！\n");
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
//			printf("凶手是%c",k);
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
//	printf("请输入两个数:");
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
//	printf("***********计算器************\n");
//	printf("*****************************\n");
//	printf("*******1.加法	2.减法*******\n");
//	printf("*******3.乘法	4.除法*******\n");
//	printf("*******0.退出	*************\n");
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
//			printf("输入错误");
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
//			printf("落单是%d\n", *(p + i));
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
//		printf("是小端字节序");
//	}
//	else
//	{
//		printf("是大端字节序");
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
//            count++;
//        }
//    }
//    return count;
//}

int removeElement(int* nums, int numsSize, int val)
{
    int src = 0;
    int dst = 0;
    while (src < numsSize)
    {
        if (nums[src] == val)
        {
            src++;
            continue;
        }
        nums[dst++] = nums[src++];
    }
}