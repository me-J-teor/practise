#define _CRT_SECURE_NO_WARNINGS 1//���Լ򻯴��룬���鿴��ʦ�Ĵ��벢��һ������
#include <stdio.h>
#include <string.h>
#include<math.h>

//ð������
int main()
{

	return 0;
}

//void my_ln(double x)//ln(1+x)
//{
//	double a, sum;
//	int i, j;//iϵ��j����
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
//	printf("%.2f\n", log(1+x));//��ʵ
//	printf("ln(1+%.0f)=%.2f", x, sum);
//}
//int main()//ln(1+x)
//{
//	double x;
//	printf("������x��ֵ,����x������Ϊ(-1,1]\n");
//	scanf("%lf", &x);
//	my_ln(x);
//	return 0;
//}



//void Cos(double x)
//{
//	double a, sum;
//	int i, j;//iϵ��j����
//	sum = 1;
//	a = 1;
//	for (i = 2, j = 1; ; i += 2)
//	{
//		j = -j;
//		a *= x * x / (i * (i - 1));
//		sum += j * a;
//		if (a < 1e-6)//����ѭ��������
//			break;
//	}
//	printf("%.2f\n", cos(x));//��ʵ
//	printf("%.2f", sum);
//}
//int main()//cos(x)
//{
//	double x;
//	printf("������Ƕ�\n");
//	scanf("%lf", &x);//����Ƕ�
//	Cos(x);
//	return 0;
//}

//void Sin(double x)
//{
//	double a, sum;
//	int i, j;//iϵ��j����
//	sum = 1;
//	a = 1;
//	for (i = 3, j = 1; ; i += 2)
//	{
//		j = -j;
//		a *= x * x / (i * (i - 1));
//		sum += j * a;
//		if (a < 1e-6)//����ѭ��������
//			break;
//	}
//	printf("%.2f\n", sin(x));//��ʵ���
//	printf("%.2f", x * sum);
//}
//int main()//sin(x)
//{
//	double x;
//	printf("������Ƕ�\n");
//	scanf("%lf", &x);//����Ƕ�
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


//�ú�������ʽģ��strcpy����
// char * strcpy ( char * destination, const char * source );//��������Զ��庯����⺯�����Ƚ�
//void My_strcpy(char* dest, char* scr)//�����Ż��ռ䣬���destΪ��ָ��
//{
//	while (*dest++ = *scr++)//����++����ʹ����++����*scr�е��ַ�����*dest����Ϊ\0��ascii��ֵΪ�٣�����ѭ����
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[15] = "xxxxxxx"; 
//	char arr2[] = "hello";
//	My_strcpy(arr1, arr2);//ģ��strcpy�������Զ��庯��
//	printf("%s\n",arr1);
//	return 0;
//}

//ɾ��һ���ַ����е�ָ����ĸ���磺�ַ��� "aca"��ɾ�����е� a ��ĸ��

//���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��

//һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ
//����

//��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�

//���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������

//int main()
//{
//    printf("������һ��Сд��ĸ\n");
//    char ch;
//    scanf("%c", &ch);
//    //����Сд��ĸ
//    printf("%c", ch- 32);//ascii��������
//    //�����д��ĸ
//    return 0;
//}


//���õݹ鷽����5!
//int function(int n)//����n!�ĺ���
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
//	printf("������һ���Ǹ�����\n");
//	int num = 0, tmp = 0;
//	scanf("%d", &num);
//	if (num < 0)
//	{
//		printf("�����������������\n");
//	}
//	else
//	{
//		tmp = function(num);
//		printf("%d!=%d\n", num, tmp);
//	}
//	return 0;
//}


//��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�	
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


//����ƹ����ӽ��б������������ˡ��׶�Ϊa, b, c���ˣ��Ҷ�Ϊx, y, z���ˡ�
//�ѳ�ǩ���������������������Ա����������������a˵������x�ȣ�c˵������x, z�ȣ�
//�������ҳ��������ֵ�������
// ö�ٷ�
//int main()
//{
//	char i, j, k;//a,b,c���˵Ķ���
//	for (i = 'x'; i <= 'z'; i++)
//	{
//		for (j = 'x'; j <= 'z'; j++)
//		{
//			for (k = 'x'; k <= 'z'; k++)
//			{
//				if (i != j && j != k && k != i)//���ֲ�����ͬһλ
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
//���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ��,
//�ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ����
//����10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�
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

//һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η������
//#define N 100
//#define n 10
//sΪ��n����ص���·�̣�hΪ��n�η����ĸ߶�
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

////һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6=1��2��3.����ҳ�1000���ڵ���������
//#define N 1000
//int main()
//{
//    int i, j, k, n, sum;
//    int a[256];
//    for (i = 2; i <= N; i++)
//    {   
//        //sum k �ĳ�ʼ��
//        sum = a[0] = 1;
//        k = 0;
//        //�жϸ������Ƿ�Ϊ����
//        for (j = 2; j <= (i / 2); j++)
//        {
//            if (i % j == 0)
//            {
//                sum += j;
//                a[++k] = j;
//            }
//
//        }
//        //��ӡ����
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
//		//�ж������Ӻ��Ƿ�Ϊ�䱾��
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

//��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������м��̿���
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


//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
//int main()
//{
//	char m;
//	int a = 0, b = 0, c = 0, d = 0;//abcd�ֱ��ӦӢ����ĸ���ո����֣�����
//	printf("����������һЩ�ַ�: \n");
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
//	printf("Ӣ����ĸ��%d,�ո���%d,������%d,�����ַ���%d\n", a, b, c, d);
//	return 0;
//}


//��������������m��n���������Լ������С��������
//��С������=�����������֮���������ǵ����Լ��
//�����Լ����շת�����������ŷ������㷨��
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
//	printf("���Լ����%d,��С��������%d\n", n,t/n);
//	return 0;
//}


//���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��
//int main()
//{
//	int score;
//	printf("���������:");
//	scanf("%d", &score);
//	char grade;
//	if (score > 100)
//	{
//		printf("�����������������");
//	}
//	else
//	{
//		grade = (score >= 90 && score <= 100) ? 'A' : ((score >= 60) ? 'B' : 'C');
//		printf("��ĵȼ�Ϊ%c\n", grade);
//	}
//	return 0;
//}

	
//��ӡ����ˮ����
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


////�ж�1-100֮�������
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

//�����������⡾2��
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

//��ӡ��������
//int main(void)
//{
//        int i, j;
//        for (i = 0; i < 8; i++)
//        {
//            for (j = 0; j < 8; j++)
//                if ((i + j) % 2 == 0)
//                    printf("��");
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


////��ӡ�žų˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)//����
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)//ÿһ�еĳ˷�
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����1/1-1/2+1/3-1/4...
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
//	char arr2[] = { 'a','b','c' };//a b c ����   ֱ���ҵ���\0
//	printf("%d\n", strlen(arr1));//strlen--string length
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//����
//	//'abc'--'a','b','c','\0'   ����'\0'--�ַ��������ı�־
//	char arr2[] = { 'a','b','c',};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//ת���ַ� --ת��ԭ������˼(\0��һ��ת���ַ���
// \t-ˮƽ�Ʊ��   \n-����
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
//	//\ddd ddd��ʾ1-3���˽�������
//	//32��Ϊ�˽������ִ���ʮ�������֣���ʮ����������ASCII���ж�Ӧ�ķ���
//	//strlen  ��Ҫ��Ӧͷ�ļ�#include<string.h>
//	//\xdd   dd��ʾ2��ʮ����������
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	/*printf("����ѧУ"
//	"�Ƿ�ú�ѧϰ����1/0)>:");*/
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}
// while ����
//int main()
//{
//	int line = 0;
//	printf("���빫˾\n");
//	while (line < 20000)
//	{
//		printf("��һ�д���\n");
//		line++;
//	}
//	if(line>=20000)
//		printf("��offer\n");
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
//	return 0;//&��λ��|��λ��^��λ���
// 
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	//�����Ԫ�ظ���=�����ܴ�С/ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//
//	//int a = 10;
//	////sizeof ������Ǳ�����������ռ�ռ�Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(a));
//	return 0;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("�ϴ�ֵ��,%d\n", num1);
//	else
//		printf("�ϴ�ֵ�ǣ�%d\n",num2);
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