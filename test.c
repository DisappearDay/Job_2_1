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

