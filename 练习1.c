#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void Swap1(int* pa, int* pb)
//{
//	int c = 0;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//}
//int main()
//{
//	int a, b;
//	a = 10;
//	b = 20;
//	printf("%d  %d\n", a, b);
//	Swap1(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//int sushu(int b)
//{
//	int x;
//	for (x = 2; x < b; x++)
//		if (b % x == 0)
//			return 0;
//			return 1;
//}
//int main()
//{
//	int a;
//	for (a = 1; a < 100; a++)
//	{
//		if (sushu(a) == 1)
//			printf("%d  ",a);
//	 }
//	return 0;
//}
//int  panduan(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//}
//int main()
//{
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (panduan(year) == 1)
//			printf("%d  ", year);
//	}
//	return 0;
//}
//int zhaoshu(int arr[], int y, int h)
//{
//	int left = 0;
//	int right = h - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < y)
//			left = mid + 1;
//		else
//			if (arr[mid] > y)
//				right = mid - 1;
//			else
//					return mid;
//	}
//	return -1;
//}
//int main() 
//{	
//	int ret;
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ret=zhaoshu(arr, k, sz);
//	if (ret == -1)
//		printf("没有找到....");
//	else
//		printf("找到了，下标是:%d", ret);
//	return 0;
//}
//
//	
//void add(int* pa)
//{
//	(*pa)++;
//}
//int main()
//{
//	int num=0;
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}
//#include<stdio.h>
//void print(int m)
//{
//	if (m < 9)
//	{
//		print(m / 10);
//	}
//	printf("%d ", m);
//
//}
//
//
//int main()
//{
//	int a = 123;
//	print(a);
//
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	int aa = my_strlen(arr);
//	printf("%d", aa);
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	 int sum = 1;
//	int line = 0;
//	while (line < 100)
//	{
//		sum = sum * 10;
//		printf("%d\n", sum);
//		line++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int jiechen(int j)
//{
//	/*int l,sum=1;
//	for (l = 1; l <= j; l++)
//	{
//		sum *= l;
//	}
//	return sum;*/
//	if (j <= 1)
//		return 1;
//	else
//		return j * jiechen(j - 1);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = jiechen(n);
//	printf("%d", ret);
//
//	return 0;
//}
//#include<stdio.h>
//int fei(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int aaa=fei(n);
//	printf("%d", aaa);
//	return 0;
//}
//#include<stdio.h>
//void maopao(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz-1; i++)
//	{
//		int ruguo = 1;
//		int j;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int b = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = b;
//				ruguo = 0;
//			}
//		}
//		if (ruguo == 1)
//			break;
//	}
//}
//int main()
//{
//	int i;
//	int arr[] = { 10,1,2,3,4,20,30,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}
//int IsWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//			return board[i][1];
//	}
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//			return board[1][i];
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//		return board[1][1];
//	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
//		return board[1][1];
//	if (1 == IsFull(board, ROW, COL))
//	{
//		return 'Q';
//	}
//	else
//		return 'C';
//}

//输入一个数，计算它的二进制中有几个1。
//#include<stdio.h>
//int main()
//{
//	int i;
//	int count=0;
//	int num = 0; 
//	scanf("%d", &num);
//	for (i = 1; i <= 32; i++)
//	{
//		if (((num>>1) & i) == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	printf("%p\n", a);
//	return 0;
//}
//


//计算一个数的阶乘
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0, sum = 1;
//	printf("请输入一个数\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("这个数的阶乘等于:%d\n", sum);
//	return 0;
//
//}



//计算1-10的阶乘相加
//#include<stdio.h>
//int main()
//{
//	int i,  sum=1, add=0;
//		for (i = 1; i <= 10; i++)
//		{
//            sum = sum * i;
//		   add = add + sum;
//		}
//		
//	printf("%d", add);
//	return 0;
//}



//在一个有序数组中查找一个数，并打出它在数组中的下标
//#include<stdio.h>
//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	printf("请输入需要查找的数字:>\n");
//	scanf("%d", &n);
//	for (; i < sz; i++)
//	{
//		if (arr[i] == n)
//			printf("已经找到，它的下标为:>%d\n", i);
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char arr[] = "Hello World !";
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "**************";
//	char arr2[] = "Hello World !";
//	int right = (sizeof(arr1) / sizeof(arr2[0])) - 1;
//	int left = 0;
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("						    %s\n", arr1);
//		Sleep(500);
//		system("cls");
//
//		left++;
//		right--;
//	}
//	printf("					    	    %s\n", arr1);
//	return 0;
//}




//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "zhimakaimen";
//	char arr2[] = "0";
//	int i;
//	printf("密码验证:\n(只有三次机会，三次输入错误账户将锁定，请谨慎操作！！！)\n请输入密码:>");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", arr2);
//		if (strcmp(arr2, "zhimakaimen") == 0)
//		{
//			printf("密码正确，登录成功！！！\n");
//			return 0;
//		}
//		else
//			printf("密码错误，请重新输入:>");
//	}
//	printf("三次机会已经用完，账户已锁定.......");
//	return 0;
//}








































