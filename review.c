
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

#if 0
int main()
{
	int day;
	scanf("%d", &day);

	switch (day)
	{
	case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
				printf("输入有误！\n");
			break;
	}

	return 0;
}
#endif

#if 0
int main()
{
	int i = 1;

	while (i <= 5)
	{
		printf("%d\n", i);
		++i;
	}

	return 0;
}
#endif


#if 0
int main()
{
	int i;

	int arr[] = { 1, 2, 3, 4, 5 };

	//求取数组大小
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
#endif

#if 0
int main()
{
	int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
	int i, j;

	for (i = 0; i < 2; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("%d\n", arr[i][j]);
		}
	}

	return 0;
}
#endif

#if 0
void Print_Array(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; ++i)
	{
		printf("%d\n", arr[i]);
	}
}

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print_Array(arr, sz);
	return 0;
}
#endif

#if 0
bool find(int n)
{
	int sum = 0;
	for (int i = 0; n > sum; i += 2)
	{
		sum += i;
	}
	return (n == sum);
}
int main()
{
	int n = 484;
	cout << find(484) << endl;
	return 0;
}
#endif

#if 0
int get_max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", get_max(a, b));
	return 0;
}
#endif

#if 0
int main()
{
	int i = 0;
	int j = 0;
	printf("%d\n", ++i);
	printf("%d\n", j++);
	return 0;
}
#endif

#if 0
struct Stu
{
	char name[20];
	char gender[3];
	int age;
	int id;
};

int main(){
	struct Stu stu;
	struct Stu* ps = &stu;

	//.访问
	stu.id = 18;
	
	//->访问
	ps->id = 19;
	strcpy(ps->name, "lisi");
	return 0;
}
#endif

#if 0
int foo(int x, int y)
{
	if (x <= 0 || y <= 0){
		return 1;
	}
	return 3 * foo(x - 6, y / 2);
}

int main()
{
	int a = 20, b = 13;
	printf("%d\n", foo(20, 13));
	return 0;
}
#endif

#if 0
struct Stu
{
	char name[20];
	char gender[6];
	char id[10];
	int age;
};

int main()
{
	struct Stu stu = { "zhangsan", "MALE", "123456",28 };
	struct Stu* ps = &stu;
	printf("%s\n", stu.name);
	printf("%s\n", stu.gender);
	printf("%s\n", ps->id);
	printf("%d\n", ps->age);

	return 0;
}
#endif

#if 0
struct Stu
{
	char name[20];
	char gender[6];
	char id[10];
	int age;
};

//打印结构体信息
void print(struct Stu* ps)
{
	printf("%s\n", ps->name);
	printf("%s\n", ps->gender);
	printf("%s\n", ps->id);
	printf("%d\n", ps->age);
}


int main()
{
	struct Stu stu = { "zhangsan", "MALE", "123456", 28 };
	print(&stu);
	return 0;
}
#endif

#if 0
int  check_sys()
{
	int i = 1;
	char* p= (char*)&i;
	return *p;
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端字节序\n");
	}
	else
	{
		printf("大端字节序\n");
	}
	return 0;
}
#endif

#if 0
int main()
{
	int a = 10;
	int b = 20;
	//const	int* p = &a;
	//p = &b;

	int* const p = &a;
	*p = 20;
	p = &b;
	
	return 0;

}
#endif

#if 0
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr;
	printf("%d\n", *p);
	printf("%d\n", *(p + 1));
	return 0;
}
#endif

#if 0
void Print_Arr1(int  arr[2][3],int row,int col)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%d ", arr[i][j]);
		}
	}
	printf("\n");
}

void Print_Arr2(int(*arr)[3], int row, int col)
{

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%d ", arr[i][j]);
		}
	}
	printf("\n");
}

int main()
{	
	int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
	Print_Arr1(arr, 2, 3);
	Print_Arr2(arr, 2, 3);

	return 0;
}
#endif

#if 0
void Print_Arr1(int arr[], int sz)
{
	for (int i = 0; i < sz; ++i)
	{
		printf("%d\n", arr[i]);
	}
}

void Print_Arr2(int* arr, int sz)
{
	for (int i = 0; i < sz; ++i)
	{
		printf("%d\n", arr[i]);
	}

}


int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print_Arr1(arr, sz);
	Print_Arr2(arr, sz);
	return 0;
}
#endif

#if 0
void Print_Arr(int* p, int sz)
{
	for (int i = 0; i < sz; ++i)
	{
		printf("%d\n", p[i]);
	}
}

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	Print_Arr(p,sz);
	return 0;
}
#endif

#if 0
void test(int** ptr)
{
	printf("%d\n", **ptr);
}


int main()
{
	int a = 10;
	int* p = &a;
	int**pp = &p;
	test(pp);
	test(&p);
	return 0;
}
#endif

#if 0
int main()
{
	char str[] = "hehe";
	int lenth = strlen(str);
	printf("%d\n", lenth);
	return 0;
}
#endif

#if 0
int My_Strlen(const char* str)
{
	int count = 0;
	while (*str)
	{
		++count;
		++str;
	}
		return count;

}

int main()
{
	char* str = "hehe";
	printf("%d\n", My_Strlen(str));
	return 0;
}
#endif

#if 0
int main()
{	
	char str1[] = "hehe";
	char str2[20];
	strcpy(str2, str1);
	printf("%s\n", str2);
	return 0;
}
#endif

#if 0
char* My_Strcpy(char* destnation, const char* source)
{
	assert(destnation != NULL);
	assert(source != NULL);
	char* ret = destnation;
	while (*destnation++=*source++)
	{
		;
	}
	return ret;
}

int main()
{
	char str1[] = "hehe";
	char str2[20];
	printf("%s\n", My_Strcpy(str2, str1));

	return 0;
}
#endif

#if 0
int main()
{
	char str1[20] = "hehe";
	char str2[] = "haha";
	printf("%s\n", strcat(str1, str2));
	return 0;
}
#endif

#if 0
char* My_Strcat(char* destnation, const char* source)
{
	assert(destnation != NULL);
	assert(source != NULL);
	char* ret = destnation;
	while (*destnation)
	{
		++destnation;
	}
	while (*destnation++ = *source++)
	{
		;
	}
	return ret;
}

int main()
{
	
	char str1[20] = "hehe";
	char str2[] = "haha";
	printf("%s\n", My_Strcat(str1, str2));
	return 0;
}
#endif

#if 0
int main()
{

	char str1[20] = "hehe";
	char str2[] = "haha";
	printf("%d\n", strcmp(str1, str2));
	return 0;
}
#endif

#if 0
int My_Strcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	int ret = 0;
	//先将2个字符串中字符转为无符号
	//str1-str2每个字符依次相减如果相等，结果为0，
	//则对结果取反，让条件为真，继续下一个字符的比较
	//直到将str1字符全部比较完
	while (!(ret=*(unsigned char*)str1-*(unsigned char*)str2)&&*str1)
	{
		++str1;
		++str2;
	}
	if (ret > 0)
	{
		ret = 1;
	}
	else if (ret < 0)
	{
		ret = -1;
	}
	return ret;
}

int main()
{
	char str1[20] = "hehe";
	char str2[] = "haha";
	printf("%d\n", My_Strcmp(str1, str2));
	return 0;
}
#endif

#if 0
int main()
{
	int *p = (int*)calloc(10,sizeof(int));
	if (p == NULL)
	{
		assert(0);
		return NULL;
	}
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", p[i]);
	}
	free(p);
	return 0;
}
#endif

#if 0
int main()
{
	int *p = (int*)calloc(10,sizeof(int));
	if (p == NULL)
	{
		assert(0);
		return NULL;
	}
	int* ptr = NULL;
	 ptr = (int*)realloc(p, 20);
	if (p != NULL)
	{
		p = ptr;
	}
	for (int i = 0; i < 20; ++i)
	{
		printf("%d ", p[i]);
	}

	free(ptr);
	return 0;

}
#endif

#if 0
#include <iostream>
using namespace std;

const double PI = 3.14;
int Into_the_bowl(int lenth, int r)
{
	double L = 2 * PI*r;
	if (lenth > ((int)L))
	{
		return 0;
	}
	else
	{
		return 1;
	}

}

int main()
{
	int lenth, r;
	cin >> lenth >> r;
	int ret = Into_the_bowl(lenth, r);
	if (ret == 0)
	{
		cout << "No" << endl;
	}
	else
	{
		cout << "Yes" << endl;
	}
	return 0;
}
#endif

#if 0
int main()
{
	FILE* pfile;
	pfile = fopen("C:/Users/Administrator/Desktop/test.txt", "w");
	if (pfile != NULL)
	{
		fputs("不知道写什么", pfile);
		fclose(pfile);
	}
	
	return 0;
}
#endif

#if 0
int main()
{
	printf("%s\n", __FILE__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	return 0;
}
#endif

#if 0
int main()
{
#if 0
	printf("hehe\n");
#else
	printf("haha\n");
#endif
	return 0;
}
#endif

#if 0
int main()
{
	int a=1;
	char* p=(char*)&a;
	if(*p==1)
	{
		printf("The system is Little_Endian!\n");
	}
	else
	{
		printf("The system is Big_Endian!\n");
	}
	return 0;
}
#endif

int main()
{
	
	return 0;
}


