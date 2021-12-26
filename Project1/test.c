#define _CRT_SECURE_NO_WARNINGS 1//尝试简化代码，都查看大师的代码并举一反三。
#include <stdio.h>
#include <string.h>
#include<math.h>

//冒泡排序
int main()
{

	return 0;
}

//void my_ln(double x)//ln(1+x)
//{
//	double a, sum;
//	int i, j;//i系数j符号
//	sum = x;
//	a = x;
//	for (i = 2, j = 1; ; i ++)
//	{
//		j = -j;
//		a *= x ;	
//		sum += j * a/i;
//		if (a / i < 1e-6)
//			break;
//	}
//	printf("%.2f\n", log(1+x));//核实
//	printf("ln(1+%.0f)=%.2f", x, sum);
//}
//int main()//ln(1+x)
//{
//	double x;
//	printf("请输入x的值,其中x的区间为(-1,1]\n");
//	scanf("%lf", &x);
//	my_ln(x);
//	return 0;
//}



//void Cos(double x)
//{
//	double a, sum;
//	int i, j;//i系数j符号
//	sum = 1;
//	a = 1;
//	for (i = 2, j = 1; ; i += 2)
//	{
//		j = -j;
//		a *= x * x / (i * (i - 1));
//		sum += j * a;
//		if (a < 1e-6)//跳出循环的条件
//			break;
//	}
//	printf("%.2f\n", cos(x));//核实
//	printf("%.2f", sum);
//}
//int main()//cos(x)
//{
//	double x;
//	printf("请输入角度\n");
//	scanf("%lf", &x);//输入角度
//	Cos(x);
//	return 0;
//}

//void Sin(double x)
//{
//	double a, sum;
//	int i, j;//i系数j符号
//	sum = 1;
//	a = 1;
//	for (i = 3, j = 1; ; i += 2)
//	{
//		j = -j;
//		a *= x * x / (i * (i - 1));
//		sum += j * a;
//		if (a < 1e-6)//跳出循环的条件
//			break;
//	}
//	printf("%.2f\n", sin(x));//核实结果
//	printf("%.2f", x * sum);
//}
//int main()//sin(x)
//{
//	double x;
//	printf("请输入角度\n");
//	scanf("%lf", &x);//输入角度
//	Sin(x);
//	return 0;
//}


//int main()//e^x
//{
//	double x, sum1 = 1,sum3=1 ;
//	int	i;
//	scanf("%lf",&x);
//	for (i = 1; ; i++)
//	{
//		sum1 *= x / i;
//		sum3 += sum1;
//		if (sum1<1e-6)
//			break;
//	}
//	printf("%.2f\n", exp(x));
//	printf("e^%.2f=%.2f", x, sum3);
//	return 0;
//}


//用函数的形式模拟strcpy函数
// char * strcpy ( char * destination, const char * source );//将下面的自定义函数与库函数作比较
//void My_strcpy(char* dest, char* scr)//任有优化空间，如果dest为空指针
//{
//	while (*dest++ = *scr++)//后置++是先使用在++，将*scr中的字符赋给*dest。因为\0的ascii码值为假，跳出循环。
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[15] = "xxxxxxx"; 
//	char arr2[] = "hello";
//	My_strcpy(arr1, arr2);//模拟strcpy函数的自定义函数
//	printf("%s\n",arr1);
//	return 0;
//}

//删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。

//请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。

//一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同
//数组

//给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。

//利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

//int main()
//{
//    printf("请输入一个小写字母\n");
//    char ch;
//    scanf("%c", &ch);
//    //输入小写字母
//    printf("%c", ch- 32);//ascii码表的运用
//    //输出大写字母
//    return 0;
//}


//利用递归方法求5!
//int function(int n)//计算n!的函数
//{
//	int tmp = n;
//	if (n>1)
//	{
//		tmp = n * function(n - 1);
//	}
//	return tmp;
//}
//int main()
//{
//	printf("请输入一个非负整数\n");
//	int num = 0, tmp = 0;
//	scanf("%d", &num);
//	if (num < 0)
//	{
//		printf("输入错误，请重新输入\n");
//	}
//	else
//	{
//		tmp = function(num);
//		printf("%d!=%d\n", num, tmp);
//	}
//	return 0;
//}


//有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。	
//int main()
//{
//	int t = 0;
//	folat i = 2, j = 1,k=0;
//	folat n = 0,sum=0;
//	for (t = 0; t < 20; t++)
//	{
//		n = i / j;
//		k = i;
//		i = i + j;
//		j = k;
//		sum = sum + n;
//	}
//	printf("sum=%9.6f\n", sum);
//	return 0;
//}
//


//两个乒乓球队进行比赛，各出三人。甲队为a, b, c三人，乙队为x, y, z三人。
//已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x, z比，
//请编程序找出三队赛手的名单。
// 枚举法
//int main()
//{
//	char i, j, k;//a,b,c三人的对手
//	for (i = 'x'; i <= 'z'; i++)
//	{
//		for (j = 'x'; j <= 'z'; j++)
//		{
//			for (k = 'x'; k <= 'z'; k++)
//			{
//				if (i != j && j != k && k != i)//对手不能是同一位
//				{
//					if (i != 'x' && k != 'x' && k != 'z')
//					{
//						printf("a--%c,b--%c;c--%c", i, j, k);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个,
//第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。
//到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
//int main()
//{
//	int x1=0, x2, day;
//	day = 9;
//	x2 = 1;
//	while (day > 0)
//	{
//		x1 = (1 + x2) * 2;
//		x2 = x1;
//		day--;
//	}
//	printf("%d\n", x1);
//	return 0;
//}

//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高
//#define N 100
//#define n 10
//s为第n次落地的总路程，h为第n次反弹的高度
//int main()
//{
//	int i;
//	float h, s;
//	h = s = N;
//	h = h / 2;
//	for (i = 1; i < n; i++)
//	{
//		s += (h * 2);
//		h /= 2;
//	}
//	printf("s=%f\nh=%f\n", s, h);
//	return 0;
//}

////一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数
//#define N 1000
//int main()
//{
//    int i, j, k, n, sum;
//    int a[256];
//    for (i = 2; i <= N; i++)
//    {   
//        //sum k 的初始化
//        sum = a[0] = 1;
//        k = 0;
//        //判断该数字是否为完数
//        for (j = 2; j <= (i / 2); j++)
//        {
//            if (i % j == 0)
//            {
//                sum += j;
//                a[++k] = j;
//            }
//
//        }
//        //打印完数
//        if (i == sum)
//        {
//            printf("%d=%d", i, a[0]);
//            for (n = 1; n <= k; n++)
//                printf("+%d", a[n]);
//            printf("\n");
//        }
//
//    }
//    return 0;
// 
//}
//int main()
//{
//	int num, i, n,sum;
//	for (num = 2; num <= 1000; num++)
//	{
//		sum = 0;
//		//判断其因子和是否为其本身
//		for (i = 1; i < num; i++)
//		{
//			if (num % i == 0)
//			{
//				n = i;
//				sum += n;
//			}
//		}
//		if (num == sum)
//		{
//			printf("%d ", num);
//		}
//	}
//	return 0;
//}

//求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制
//int main()
//{
//	int a, n, t;
//	scanf("%d %d", &a, &n);//1 1
//	int k = a;
//	int s = 1;
//	for (t = 1; t < n; t++);
//	{
//		a = a * 10 + k;
//		s = s + a;
//	}
//	printf("%d\n", s);
//	return 0;
//}


//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
//int main()
//{
//	char m;
//	int a = 0, b = 0, c = 0, d = 0;//abcd分别对应英文字母，空格，数字，其他
//	printf("请任意输入一些字符: \n");
//	while ((m = getchar()) != '\n')
//	{
//		if (m >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//		{
//			a++;
//		}
//		if (m == ' ')
//		{
//			b++;
//		}
//		if (m >= '0' && c <= '9')
//		{
//			c++;
//		}
//		else
//		{
//			d++;
//		}
//	}	
//	printf("英文字母有%d,空格有%d,数字有%d,其他字符有%d\n", a, b, c, d);
//	return 0;
//}


//输入两个正整数m和n，求其最大公约数和最小公倍数。
//最小公倍数=输入的两个数之积除于它们的最大公约数
//求最大公约数用辗转相除法（又名欧几里德算法）
//int main()
//{
//	int m, n, tmp, r, t;
//	scanf("%d %d", &m, &n);
//	if (m < n)
//	{
//		tmp = m;
//		m = n;
//		n = tmp;
//	}
//	r = m %	n;
//	t = m * n;
//	while (r != 0)
//	{
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	printf("最大公约数是%d,最小公倍数是%d\n", n,t/n);
//	return 0;
//}


//利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
//int main()
//{
//	int score;
//	printf("请输入分数:");
//	scanf("%d", &score);
//	char grade;
//	if (score > 100)
//	{
//		printf("输入错误，请重新输入");
//	}
//	else
//	{
//		grade = (score >= 90 && score <= 100) ? 'A' : ((score >= 60) ? 'B' : 'C');
//		printf("你的等级为%c\n", grade);
//	}
//	return 0;
//}

	
//打印所有水仙数
//int main(void)
//{
//	int i, x, y, z;
//	for (i = 100; i < 1000; i++)
//	{
//		x = i % 10;
//		y = i / 10 % 10;
//		z = i / 100 % 10;
//		if (i == x * x * x + y * y * y + z * z * z)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


////判断1-100之间的素数
//int main(void)
//{
//	int num , i,count=0;
//	for (num =2 ; num < 100; num++)
//	{
//		for (i = 2; i <num; i++)
//		{
//			if (num%i == 0)
//			{
//				break;
//			}
//		}
//		if (i == num)
//		{
//			printf("%d ", num);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//兔子生崽问题【2】
//int main()
//{
//    int f1 = 1, f2 = 1, i;
//    for (i = 1; i <= 20; i++)
//    {
//        printf("%12d%12d", f1, f2);
//        if (i % 2 == 0) printf("\n");
//        f1 = f1 + f2;
//        f2 = f1 + f2;
//    }
//
//    return 0;
//}
//int main(void)
//{
//	int i = 0;
//	int num1 = 1;
//	int num2 = 1;
//	int sum = 0;
//	printf("%-2d\n%d\n", num1, num2);
//	for (i = 1; i <= 38; i++)
//	{
//		sum = num1 + num2;
//		num1 = num2;
//		num2 = sum;
//		printf("%-2d\n", sum);
//	}
//	return 0;
//}

//打印国际象棋
//int main(void)
//{
//        int i, j;
//        for (i = 0; i < 8; i++)
//        {
//            for (j = 0; j < 8; j++)
//                if ((i + j) % 2 == 0)
//                    printf("■");
//                else printf("  ");
//            printf("\n");
//        }
//        return 0;
//    
//}

//int main(void)
//{
//	int i = 0;
//	for (i = 2; i < 168 / 2 + 1; i += 2) 
//	{
//		if (168%i==0)
//		{
//			int j = 168 / i;
//			if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
//			{
//				int m = (i - j) / 2;
//				printf("%d\n", m * m - 100);
//
//			}
//		}
//	}
//	return 0;
//}


////打印九九乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)//列数
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)//每一行的乘法
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//计算1/1-1/2+1/3-1/4...
//int main(void)
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i < 100; i++)
//	{
//			sum += flag*1.0 / i;
//			flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int i, j, k;
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			for (k = 1; k < 5; k++)
//			{
//				if (i != j && j != k && k != i)
//				{
//					printf("%d,%d,%d\n", i, j, k);
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}





//enum Sex
//{
//	MALE,
//	FMALE,
//	SECRET,
//};
//int main () 
//{
//enum sex S = FMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//a b c \0
//	char arr2[] = { 'a','b','c' };//a b c 乱码   直到找到了\0
//	printf("%d\n", strlen(arr1));//strlen--string length
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//数组
//	//'abc'--'a','b','c','\0'   其中'\0'--字符串结束的标志
//	char arr2[] = { 'a','b','c',};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//转义字符 --转变原来的意思(\0是一个转义字符）
// \t-水平制表符   \n-换行
//int main()
//{
//	printf("abc\n");
//	return 0;
//}
//int main()
//{
//	//printf("%c\n",'\'');
//	printf("%s\n", "\"");
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//\ddd ddd表示1-3个八进制数字
//	//32作为八进制数字代表十进制数字，其十进制数字在ASCII表中对应的符号
//	//strlen  需要对应头文件#include<string.h>
//	//\xdd   dd表示2个十六进制数字
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	/*printf("进入学校"
//	"是否好好学习？（1/0)>:");*/
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}
// while 语序
//int main()
//{
//	int line = 0;
//	printf("步入公司\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码\n");
//		line++;
//	}
//	if(line>=20000)
//		printf("好offer\n");
//}
//Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	sum = Add(2, 3);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf(" %d\n", arr[i]);
//		i++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
// //011
// //101
// //001
//	printf("%d\n", c);
//	return 0;//&按位与|按位或^按位异或
// 
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	//数组的元素个数=数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//
//	//int a = 10;
//	////sizeof 计算的是变量、类型所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(a));
//	return 0;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是,%d\n", num1);
//	else
//		printf("较大值是，%d\n",num2);
//	return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//int b = a++;
//	//int b = ++a;
//	int b = a--;
//	printf("a = %d\n,b = %d\n", a, b);
//	return 0;
//}
//
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d\n", a + b);
//    return 0;
//}