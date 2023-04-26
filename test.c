#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>


//int main() {
//	unsigned long ptr1[] = { 6,7,8,9,10 };
//	unsigned long* ptr2 = ptr1;
//	*(ptr2 + 3) += 3;   //指针＋3找到 9位置的地址，解引用得到9，然后+3 得到12，因此9的位置的地址变为12
//	printf("%d,%d\n", *ptr2, *(ptr2 + 3));  //6  12
//	
//	return 0;
//}

void re_str(const char* str) {
	assert(str);
	int len = strlen(str);
	char* left = str;
	char* right = str+len-1;
	while (left<right) {
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}

}


//int main() {
//	char s[256] = {0};
//	//scanf("%s", s);
//	gets(s);
//	re_str(s);
//	printf("%s\n", s);
//	return 0;
//}



//int main() {
//	int a = 0; int n = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int result = 0;
//	int sum = 0;
//	for (i = 0; i < n; i  ++) {
//		result = 10 * result + a;
//		 sum+=result;
//	}
//	printf("%d", sum);
//
//	return 0;
//}



//int main() {
//	int i = 0;
//	for (i = 0; i <= 100000;i++) {
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while(tmp /= 10) {
//			n++;
//		}
//        tmp = i;
//		while(tmp) {
//			sum +=(int) pow(tmp % 10,n);
//			tmp /= 10;
//		}
//		if (i==sum) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//打印菱形


int main() {
	printf("请输入");
	int n = 0;
	int i = 0;

	scanf("%d", &n);
	int j = 0;
	for (i = 0; i < n;i++) {
		
		for (j = 0; j < n - 1-i; j++) {
			printf(" ");
		}
		
		for (j = 0; j < 2*i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < n; i++) {

		for (j = 0; j < 1 + i; j++) {
			printf(" ");
		}

		for (j = 0; j < 2 * (n - 1 - i)-1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//int main() {
//
//	printf("请输入金额->:");
//	int count = 0;
//	scanf("%d", &count);
//	int empty = 0;
//	int total = 0;
//
//	if (count == 0) {
//		total = 0;
//	}
//	else {
//		total = 2 * count - 1;
//	}
//
//
//	//total = count;
//	//empty = count;
//	//while(empty >= 2) {
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//
//
//
//	printf("能喝%d瓶饮料", total);
//	return 0;
//
//}

void print(int arr[],int sz) {
	int i = 0;
	for (i = 0; i < sz;i++) {
		printf("%d ", arr[i]);
	}
}

void move(int arr[], int sz) {
	int left = 0;
	int right = sz - 1;
	while (left<right) {
		while ((left < right)&&(arr[left] % 2 == 1)) {
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0)) {
			right--;
		}
		if (left < right) {
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}

}


//输入一个数组，把数组的元素奇数位放前面，偶数位放后面
int main() {
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr[] = { 1,3,5,7,9 };

	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr,sz);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>



//int main() {
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	//00000000000000000000000011001000  -a
//	//00000000000000000000000001100100  -b
//	//00000000000000000000000100101100   a+b
//	//00101100 -c
//	//00000000000000000000000000101100
//	//
//	//00000000000000000000000011001000
//	//11001000  -a
//	//00000000000000000000000001100100
//	//01100100  -b
//	c = a + b;  //整形提升，因为200  100都是整形，所以先整型提升进行运算，然后根据输出类型取出8位
//	printf("%d,%d", a + b, c);  //300 44 
//
//
//	return 0;
//}


//int main() {
//
//	unsigned int a = 0x1234; 
//	unsigned char b = *(unsigned char*)&a;
//	//如果是大端存储 ，b=？
//	printf("%d\n", b);
//	return 0;
//}


//int main() {
//
//
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000;i++) {
//		a[i] = -1 - i;
//	}
//	printf("%d",strlen(a));// -1,-2,-3...-127,-128,127,126,125...3,2,1,0,-1,-2当遇到0时strlen结束，所以是255
//
//
//	return 0;
//
//}

//int main() {
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10;j++) {
//			
//			if (j==0) {
//				arr[i][j] = 1;
//			}
//			if (j==i) {
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1) {
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			
//		}
//	}
//
//
//	for (i = 0; i < 10;i++) {
//		for (j = 0; j <= i; j++) {
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return  0;
//}


//int main() {
//
//	int killer = 0;
//	for (killer = 'A'; killer < 'D'; killer++) {
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3) {
//			printf("凶手是:%c\n", killer);
//		}
//	}
//
//	return 0;
//}


//赛马问题
//有36匹马，6个跑道，没有计时器，请赛马确定，36匹马中的前三名，最少比赛几次

//烧香问题
//有一种香，材质不均匀，每一根但是燃烧完恰好是一个小时，
//给你两根香，确定一个15分钟的时间段



void left_move(char* arr, int k) {
	assert(arr!=NULL);
	int len = strlen(arr);
	int i = 0;
	for (i = 0; i < k;i++) {
		char temp = *arr;
		int j = 0;
		for (j = 0; j < len - 1; j++) {
			*(arr + j) = *(arr+j + 1);
		}
		*(arr+len - 1) = temp;
	}

}


void Reversal(char * arr,int s,int k) {
	assert(arr != NULL);
	assert(s<=k);
	int len = strlen(arr);
	int left = s;
	int right = k-1;
	int i = 0;
	while (left < right) {
		char temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

int is_left_move(char* s1,char* s2) {
	int i = 0;
	int len = strlen(s1);
	for (i = 0; i < len;i++) {
		left_move(s1, 1);
		int ret=strcmp(s1, s2);
		if (ret==0) {
			return 1;
		}
	
	}
	return 0;
}

int main() {

	char arr[] = "abcdefg";
	char s1[] = "AABCD";
	char s2[] = "AABCD";

	//暴力求解法
	//left_move(arr,2);
	
	//三步反转法
	/*int len = strlen(arr);
	Reversal(arr, 0, 2);
	Reversal(arr, 2, len);
	Reversal(arr, 0, len);*/

	int ret=is_left_move(s1,s2);
	if (ret==1) {
		printf("Yes!");
	}
	else {
		printf("No!");

	}

	//追加一个相同的串，判断另一个是不是子串
	//abcdefabcdef   



	/*int len1 = strlen(s1);
	int i = 0;
	int result = 0;
	for (i = 0; i < len1-1; ) {
		Reversal(s1, 0, i);
		Reversal(s1, i, len1);
		Reversal(s1, 0, len1);
		result++;
		if (s1==s2) {
			printf("%s是由s1经过旋转得到的。\n", s1); break;
		}
		
	}*/


	//printf("请输入要旋转几位字符：");
	//int k = 0;
	//scanf("%d", &k);
	//char* start = arr;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//char* end = (char *)(start + sz);
	//while (k) {
	//	*(end + 1) = '\0';
	//	char temp = arr[*(start)];
	//	arr[*(start)] = arr[*(end)];
	//	arr[*(end)] = temp;
	//	start++;
	//	end++;
	//	k--;
	/*}*/
	//printf("%s\n",arr);

	return 0;
}

int Estimate(char* str1,char* str2) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2) {
		return 0;
	}
	strncat(str1,str1,len1);   //strcat 和  strncat 的区别 6是追加的个数，前者不能自己追加自己，后者可以
	char* p=strstr(str1,str2);  //strstr是判断后者是不是前者的子集
	if (p==NULL) {
		return 0;
	}
	else {
		return 1;
	}
}

//
//int main() {
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret=Estimate(arr1,arr2);
//	if (ret==1)
//	{
//		printf("Yes\n");
//	}
//	else {
//		printf("No\n");
//	}
//	return 0;
//}

int findnum(int arr[3][3],int k,int* px,int* py) {
	int x = 0;
	int y = *py - 1;
	while ((x <= *px - 1) && (y >= 0)) {
		if (k > arr[x][y]) {
			x++;
		}
		else if (k < arr[x][y]) {
			y--;
		}
		else {
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main() {

	int arr[3][3] = { {1,2,3},{4,7,9},{9,10,14} };
	int k = 9;
	int row=3;
	int col=3;
	int ret = findnum(arr,k,&row,&col);// row col 返回型参数
	if (ret==1) {
		printf("找到了\n");
		printf("下标是%d %d\n",row,col);

	}
	else {
		printf("没找到");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//创建一个结构体类型
struct People {
	char name[20];
	int height;
};
int main() {
	//利用结构体类型创建一个该类型的结构体变量
	struct People p1 = {"陈宇杰",191};
	struct People* pb= &p1;
	//利用pb打印出身高
	printf("%d\n",(*pb).height );
	//利用pb打印出身高的简便写法
	printf("%d\n", pb->height);
	printf("书名: %s\n", p1.name);
	printf("身高：%d\n", p1.height);
	p1.height = 192;
	printf("修改后的身高为: %d\n", p1.height); 
	//修改人名，因为人名是个数组，所以需要用到一个函数即strcpy，string copy--字符串拷贝，它里面只有两个成员，一个是目的地（你需要拷贝到哪去），一个是变量（你需要拷贝什么东西）
	strcpy(p1.name, "孟琦");
	printf("修改后的人名: %s\n", p1.name);
	return 0;
}
