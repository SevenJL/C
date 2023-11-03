#include <stdio.h>

//int main()
//{
//	int n = 0;
//	float i = 0;
//	scanf_s("%d", &n);
//	i = (5 / 9.0) * (n - 32);
//
//	printf("%f", i);
//
//
//	return 0;
//
//}
/*��C���Լ�������Ϣ�������б���1000Ԫ�����һ�꣬�����ַ�����ѡ��
1 ���ڣ�������Ϊ0.0036��
2 һ���ڶ��ڣ�������Ϊ0.0225��
3 �����ΰ��궨�ڣ�������Ϊ0.0198��
��ֱ�����һ���3�ַ������õ��ı�Ϣ��
����˼·�����������㷨�ܼ򵥣��ؼ������ҵ���ʽ��������Ϊprincipal_0��Ҳ���Ǳ���
���ڴ��һ���ı�Ϣ��Ϊ��
principal_0 * (1 + interest_Rate1);
һ�궨�ڴ��󣬱�Ϣ��Ϊ��
principal_0* (1 + interest_Rate2);
���ΰ��궨�ڴ�һ���Ϣ�ͣ�
principal_0* (1 + interest_Rate3 / 2)* (1 + interest_Rate3 / 2);
*/

//int main()
//{
//	int input = 0;
//	float ret = 0;
//	int principal_0 = 1000;
//	printf("����1\nһ���ڶ���2\n����붨��3\n");
//	printf(">:");
//	scanf_s("%d", &input);
//	switch (input)
//		
//	{
//		case 1:
//		{
//			
//			ret = 1.0036 * principal_0;
//			break;
//		}
//
//		case 2:
//		{
//			
//			ret = 1.0225 * principal_0;
//			break;
//		}
//		
//		case 3:
//		{
//			
//			ret = 1.0198 * principal_0;
//			break;
//		}
//		default:
//			printf("ѡ�����");
//			
//	}
//	printf("%lf", ret);
//
//	return 0;
//}
//int main()
//{
//	char Big   = '0';
//	char Small = '0';
//	char ret = 0;
//	scanf_s("%c", &Big);
//	 ret = Big + 32;
//	printf("%c", ret);
//	return 0;
//}
//int main() //������
//{
//	char character_Small, character_Big;//�����ַ�����
//	character_Big = 'A'; //�ַ�������ʼ�������Ѹ�ֵ��ĸA��ֵ��character_Big
//	character_Small = character_Big + 32;//ASCII���ֵ+32
//	printf("��д��ĸ%c", character_Big);//�����д��ĸA
//	printf("��Сд��ĸ�ǣ�%c\n", character_Small);//���Сд��ĸa
//	return 0;//��������ֵΪ��
//}
//int main()
//{
//	char character1, character2, character3, character4;//�����ַ�����
//	character1 = 'L';//��ʼ�����������ַ�L��ֵ��character1
//	character2 = 'o';//��ʼ�����������ַ�o��ֵ��character2
//	character3 = 'v';//��ʼ�����������ַ�v��ֵ��character3
//	character4 = 'e';//��ʼ�����������ַ�e��ֵ��character3
//	putchar(character1);//����ַ�L
//	putchar(character2);//����ַ�o
//	putchar(character3);//����ַ�v
//	putchar(character4);//����ַ�e
//	putchar('\n');//����
//	return 0;//��������ֵΪ0
//}
//
//int main()
//{
//	char Big = '0';
//	char Small = '0';
//	printf("��������ĸ��");
//	scanf_s("%c",&Big);
//	Small = (Big <= 'Z' && Big >= 'A') ? Big + 32 : Big;
//	printf("%c", Small);
//	
//	return 0;
//}
//������ ͬʱͳ������  ����1wֹͣ �����������
//int main()
//{
//	float  sum = 0;
//	int people = 0;
//	float  money = 0;
//	float  avag = 0;
//	if (people <= 1000)
//	{
//		for (sum = 0; sum <= 100000; )
//		{
//			printf("������>:");
//			scanf_s("%f", &money);
//			sum = sum + money;
//			printf("%f\n", sum);
//			people++;
//		}
//	}
 // 
//		printf("�����\n");
//		avag = sum/people;
//		printf("������%d,ƽ�������>:%6.4f",people,avag);
//	return 0;															0 1 2 3 4 
//}
//C����ʵ�����4*5�ľ���
//c
//int main()
//{
//    int i, j;//�������
//    int k = 0;
// 
//    for(i=1;i<5;i++)
//    {
//        for (j = 1; j < 6; j++,k++)
//        {
//            if (k % 5 == 0)
//            {
//                printf("\n");
//            }
//            printf(" %d\t", i * j);
//        }
//    }
//
//    return 0;
//}
//��Fibonacci���е�ǰ40��������������������ص㣺
// ��1,2������Ϊ1,1,��
// �ӵ���������ʼ��
// ��������ǰ������֮�͡�
// ��쳲������������ã�


//  i j
//1 1 2 3 5 8 13 21 
//int  main()
//{
//	int i = 0;
//	int j = 1;
//	int sum = 0;
//	int n = 0;
//	int k = 0;
//	scanf_s("%d", &k);
//	for (n = 0; n < k; n++)
//	{
//		printf("%d %d\n", n + 1, j);
//		sum = i + j;
//		i = j;
//		j = sum;
//		
//	}
//}
//C����ʵ������һ������3������n���ж����Ƿ�Ϊ�������������� .//2~N-1 ��������
//���100~200֮���������
//int main()
//{
//	int n = 0;
//	int i = 2;
//	for (n = 0; n <= 200 && n >= 100; n++)
//	{
//		for (i = 2; i <= n - 1; i++)
//		{
//			if (n % i == 0)//���ȡ����Ϊ0
//				printf("%d", n);
//		}
//	}
//	return 0;
//}




//int main()//������
//{
//    int number, i;//�������
//    printf("���������һ������");//��ʾ���
//    scanf_s("%d", &number);//����������Ҫ�жϵ���
//    for (i = 2; i <= number - 1; i++)//ѭ����2��ʼ�������������ǰһ����Ϊֹ
//    {
//        if (number % i == 0)//���ȡ����Ϊ0
//            break;
//    }
//    if (i < number)
//    {
//        printf("%d��������", number);
//    }
//    else
//    {
//        printf("%d������", number);
//    }
//    return 0; //��������ֵΪ0
// }


//���100~200֮���������
//int main()
//{
//	int i = 0;
//	int n = 0;
//
//	
//	
//	for (i =100; i <= 100 && i >= 200; i++)
//	{
//		if (i % n  == 0)
//			printf("%d ", i);
//	}
//	return 0;
//
//}  

//int isPrime(int num)
//{
//    if (num <= 1) 
//    {
//        return 0;
//    }
//    for (int i = 2; i * i <= num; i++) 
//    {
//        if (num % i == 0) 
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    for (int i = 100; i <= 200; i++) 
//    {
//        if (isPrime(i)) 
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}
//�ں���isPrime�У�����i * i <= num�����Ż��������Ĺ��̡�

//������һ������1����Ȼ��������1�����������ⲻ����������������ˣ�Ϊ���ж�һ����num�Ƿ�Ϊ����������ֻ�����2��sqrt(num)�Ƿ����κ�����������num��������Ϊ���num
// ��һ��������[2, sqrt(num)]֮�䣬��ô����Ȼ��һ����Ӧ��С��������[sqrt(num), num]֮�䣬����ֻ����һ��ķ�Χ���ɡ�
//���ԣ�����i* i <= num��������ѭ���ķ�Χ������Դ���sqrt(num)�������в���Ҫ�ļ�顣ֻҪ�����ҵ���һ����������num�������Ϳ���ֹͣ��飬��Ϊ�����Ѿ�֪��num����������
//�ܵ���˵�����������Ϊ������㷨��Ч�ʡ�



//ʵ�־žų˷�������ʽҪ�󳤷��Ρ��������Ρ��������Ρ�
//1.��1*1 1*2 .....1*9
//�����ξžų˷���
//int main()
//{
//	int num1 = 1;
//	int num2 = 1;
//	int num3 = 0;
//
//	for (num1 = 1; num1 <= 9; num1++)
//	{
//		for (num2 = 1; num2 <= 9; num2++)
//		{
//			num3 = num1 * num2;
//			if(num2 <= num1)("%d*%d=%d\t ",num1,num2, num3);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()//���������
//{
//    printf("      ****        ****\n");//��ӡ��һ��
//    printf("    *********   *********\n");//��ӡ�ڶ���
//    printf(" ************* *************\n");//��ӡ������
//    int i, j;//�������
//    for (i = 0; i < 3; i++)//��ӡ4-6�У�һ��3�У����iС��3
//    {
//        for (j = 0; j < 29; j++)//����ÿ�����*�ĸ���
//        {
//            printf("*");//������ֻ��ӡ*�ţ��޿ո����
//        }
//        printf("\n");//��ӡ��һ����Ҫ���л���
//    }
//    for (i = 0; i < 7; i++) //��ӡ7-13�У�һ��7�У����iС��7
//    {
//        for (j = 0; j < 2 * (i + 1) - 1; j++)//���forѭ���������for�ǲ��е�
//        {
//            printf(" ");//��ӡ�ո�
//        }
//        for (j = 0; j < 27 - i * 4; j++)//���߿��Դ��뼸�����ҳ�����
//        {
//            printf("*");//��ӡ*
//        }
//        printf("\n");
//    }
//    for (i = 0; i < 14; i++)//��ӡ���һ�е�*
//    {
//        printf(" ");//��ӡ�ո�
//    }
//    printf("*\n");//��ӡ*
//    return 0;
//}

//������Ԫ�����θ�ֵ0��1��2��3��4��5��6��7��8��9��Ȼ�������������

//int put(int arr[], int x)
//{
//	if(x<9)
//	{
//		arr[x] = x;
//		put(arr, x+1);
//	}
//	printf("%d ", x);
//	return  x;
//
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int  arr[] = { 0,1,3,4,6,8,5,2,9,7 };
//	put(arr,i);
//	return 0;
//}

//int main()
//{
//	char a = 'H', b = 'i';
//	putchar(a);
//	putchar(b);
//	return 0;
//}

//int main()
//{
//	char character1, character2, character3, character4;//�����ַ�����
//	character1 = 'L';//��ʼ�����������ַ�L��ֵ��character1
//	character2 = 'o';//��ʼ�����������ַ�o��ֵ��character2
//	character3 = 'v';//��ʼ�����������ַ�v��ֵ��character3
//	character4 = 'e';//��ʼ�����������ַ�e��ֵ��character3
//	putchar(character1);//����ַ�L
//	putchar(character2);//����ַ�o
//	putchar(character3);//����ַ�v
//	putchar(character4);//����ַ�e
//	putchar('\n');//����
//	return 0;//��������ֵΪ0
//}
//int main()
//{
//	int a = 7 % 2;// �����1 ��Ϊ7��2����3��1�����1��������ģ
//	int b = 7 / 2;// �����3 ��ȡ������
//	printf("%d\n", a);//
//
//	printf("%d\n", b);
//
//	return 0;
//}
//int main()
//{
//		int a = 7;
//		int b = -7;
//	
//		printf("%d ", a << 1);
//		printf("%d ", a >> 1);
//
//		printf("%d ", b << 1);
//		printf("%d ", b >> 1);
//		
//		
//		return 0;
//
//}
//#include <string.h>
//int main()
//{
//	int arr[] = "hi,boy";
//	int len = strlen("ab,c");
//	printf("%s", arr[2]);
//	return 0;
//}
//void main()
//{
//	char b[] = "Hello,you";
//	b[5] = 0;
//	printf("%s \n", b);
////}
//main() {
//	int x = 2, y = -1, z = 8;
//	if (x < y)
//		if (y < 0)
//			z = 0;
//		else
//			z #include <stdio.h>

//int main()
//{
//	int n = 0;
//	float i = 0;
//	scanf_s("%d", &n);
//	i = (5 / 9.0) * (n - 32);
//
//	printf("%f", i);
//
//
//	return 0;
//
//}
/*��C���Լ�������Ϣ�������б���1000Ԫ�����һ�꣬�����ַ�����ѡ��
1 ���ڣ�������Ϊ0.0036��
2 һ���ڶ��ڣ�������Ϊ0.0225��
3 �����ΰ��궨�ڣ�������Ϊ0.0198��
��ֱ�����һ���3�ַ������õ��ı�Ϣ��
����˼·�����������㷨�ܼ򵥣��ؼ������ҵ���ʽ��������Ϊprincipal_0��Ҳ���Ǳ���
���ڴ��һ���ı�Ϣ��Ϊ��
principal_0 * (1 + interest_Rate1);
һ�궨�ڴ��󣬱�Ϣ��Ϊ��
principal_0* (1 + interest_Rate2);
���ΰ��궨�ڴ�һ���Ϣ�ͣ�
principal_0* (1 + interest_Rate3 / 2)* (1 + interest_Rate3 / 2);
*/

//int main()
//{
//	int input = 0;
//	float ret = 0;
//	int principal_0 = 1000;
//	printf("����1\nһ���ڶ���2\n����붨��3\n");
//	printf(">:");
//	scanf_s("%d", &input);
//	switch (input)
//		
//	{
//		case 1:
//		{
//			
//			ret = 1.0036 * principal_0;
//			break;
//		}
//
//		case 2:
//		{
//			
//			ret = 1.0225 * principal_0;
//			break;
//		}
//		
//		case 3:
//		{
//			
//			ret = 1.0198 * principal_0;
//			break;
//		}
//		default:
//			printf("ѡ�����");
//			
//	}
//	printf("%lf", ret);
//
//	return 0;
//}
//int main()
//{
//	char Big   = '0';
//	char Small = '0';
//	char ret = 0;
//	scanf_s("%c", &Big);
//	 ret = Big + 32;
//	printf("%c", ret);
//	return 0;
//}
//int main() //������
//{
//	char character_Small, character_Big;//�����ַ�����
//	character_Big = 'A'; //�ַ�������ʼ�������Ѹ�ֵ��ĸA��ֵ��character_Big
//	character_Small = character_Big + 32;//ASCII���ֵ+32
//	printf("��д��ĸ%c", character_Big);//�����д��ĸA
//	printf("��Сд��ĸ�ǣ�%c\n", character_Small);//���Сд��ĸa
//	return 0;//��������ֵΪ��
//}
//int main()
//{
//	char character1, character2, character3, character4;//�����ַ�����
//	character1 = 'L';//��ʼ�����������ַ�L��ֵ��character1
//	character2 = 'o';//��ʼ�����������ַ�o��ֵ��character2
//	character3 = 'v';//��ʼ�����������ַ�v��ֵ��character3
//	character4 = 'e';//��ʼ�����������ַ�e��ֵ��character3
//	putchar(character1);//����ַ�L
//	putchar(character2);//����ַ�o
//	putchar(character3);//����ַ�v
//	putchar(character4);//����ַ�e
//	putchar('\n');//����
//	return 0;//��������ֵΪ0
//}
//
//int main()
//{
//	char Big = '0';
//	char Small = '0';
//	printf("��������ĸ��");
//	scanf_s("%c",&Big);
//	Small = (Big <= 'Z' && Big >= 'A') ? Big + 32 : Big;
//	printf("%c", Small);
//	
//	return 0;
//}
//������ ͬʱͳ������  ����1wֹͣ �����������
//int main()
//{
//	float  sum = 0;
//	int people = 0;
//	float  money = 0;
//	float  avag = 0;
//	if (people <= 1000)
//	{
//		for (sum = 0; sum <= 100000; )
//		{
//			printf("������>:");
//			scanf_s("%f", &money);
//			sum = sum + money;
//			printf("%f\n", sum);
//			people++;
//		}
//	}
 // 
//		printf("�����\n");
//		avag = sum/people;
//		printf("������%d,ƽ�������>:%6.4f",people,avag);
//	return 0;															0 1 2 3 4 
//}
//C����ʵ�����4*5�ľ���
//c
//int main()
//{
//    int i, j;//�������
//    int k = 0;
// 
//    for(i=1;i<5;i++)
//    {
//        for (j = 1; j < 6; j++,k++)
//        {
//            if (k % 5 == 0)
//            {
//                printf("\n");
//            }
//            printf(" %d\t", i * j);
//        }
//    }
//
//    return 0;
//}
//��Fibonacci���е�ǰ40��������������������ص㣺
// ��1,2������Ϊ1,1,��
// �ӵ���������ʼ��
// ��������ǰ������֮�͡�
// ��쳲������������ã�


//  i j
//1 1 2 3 5 8 13 21 
//int  main()
//{
//	int i = 0;
//	int j = 1;
//	int sum = 0;
//	int n = 0;
//	int k = 0;
//	scanf_s("%d", &k);
//	for (n = 0; n < k; n++)
//	{
//		printf("%d %d\n", n + 1, j);
//		sum = i + j;
//		i = j;
//		j = sum;
//		
//	}
//}
//C����ʵ������һ������3������n���ж����Ƿ�Ϊ�������������� .//2~N-1 ��������
//���100~200֮���������
//int main()
//{
//	int n = 0;
//	int i = 2;
//	for (n = 0; n <= 200 && n >= 100; n++)
//	{
//		for (i = 2; i <= n - 1; i++)
//		{
//			if (n % i == 0)//���ȡ����Ϊ0
//				printf("%d", n);
//		}
//	}
//	return 0;
//}




//int main()//������
//{
//    int number, i;//�������
//    printf("���������һ������");//��ʾ���
//    scanf_s("%d", &number);//����������Ҫ�жϵ���
//    for (i = 2; i <= number - 1; i++)//ѭ����2��ʼ�������������ǰһ����Ϊֹ
//    {
//        if (number % i == 0)//���ȡ����Ϊ0
//            break;
//    }
//    if (i < number)
//    {
//        printf("%d��������", number);
//    }
//    else
//    {
//        printf("%d������", number);
//    }
//    return 0; //��������ֵΪ0
// }


//���100~200֮���������
//int main()
//{
//	int i = 0;
//	int n = 0;
//
//	
//	
//	for (i =100; i <= 100 && i >= 200; i++)
//	{
//		if (i % n  == 0)
//			printf("%d ", i);
//	}
//	return 0;
//
//}  

//int isPrime(int num)
//{
//    if (num <= 1) 
//    {
//        return 0;
//    }
//    for (int i = 2; i * i <= num; i++) 
//    {
//        if (num % i == 0) 
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    for (int i = 100; i <= 200; i++) 
//    {
//        if (isPrime(i)) 
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}
//�ں���isPrime�У�����i * i <= num�����Ż��������Ĺ��̡�

//������һ������1����Ȼ��������1�����������ⲻ����������������ˣ�Ϊ���ж�һ����num�Ƿ�Ϊ����������ֻ�����2��sqrt(num)�Ƿ����κ�����������num��������Ϊ���num
// ��һ��������[2, sqrt(num)]֮�䣬��ô����Ȼ��һ����Ӧ��С��������[sqrt(num), num]֮�䣬����ֻ����һ��ķ�Χ���ɡ�
//���ԣ�����i* i <= num��������ѭ���ķ�Χ������Դ���sqrt(num)�������в���Ҫ�ļ�顣ֻҪ�����ҵ���һ����������num�������Ϳ���ֹͣ��飬��Ϊ�����Ѿ�֪��num����������
//�ܵ���˵�����������Ϊ������㷨��Ч�ʡ�



//ʵ�־žų˷�������ʽҪ�󳤷��Ρ��������Ρ��������Ρ�
//1.��1*1 1*2 .....1*9
//�����ξžų˷���
//int main()
//{
//	int num1 = 1;
//	int num2 = 1;
//	int num3 = 0;
//
//	for (num1 = 1; num1 <= 9; num1++)
//	{
//		for (num2 = 1; num2 <= 9; num2++)
//		{
//			num3 = num1 * num2;
//			if(num2 <= num1)("%d*%d=%d\t ",num1,num2, num3);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()//���������
//{
//    printf("      ****        ****\n");//��ӡ��һ��
//    printf("    *********   *********\n");//��ӡ�ڶ���
//    printf(" ************* *************\n");//��ӡ������
//    int i, j;//�������
//    for (i = 0; i < 3; i++)//��ӡ4-6�У�һ��3�У����iС��3
//    {
//        for (j = 0; j < 29; j++)//����ÿ�����*�ĸ���
//        {
//            printf("*");//������ֻ��ӡ*�ţ��޿ո����
//        }
//        printf("\n");//��ӡ��һ����Ҫ���л���
//    }
//    for (i = 0; i < 7; i++) //��ӡ7-13�У�һ��7�У����iС��7
//    {
//        for (j = 0; j < 2 * (i + 1) - 1; j++)//���forѭ���������for�ǲ��е�
//        {
//            printf(" ");//��ӡ�ո�
//        }
//        for (j = 0; j < 27 - i * 4; j++)//���߿��Դ��뼸�����ҳ�����
//        {
//            printf("*");//��ӡ*
//        }
//        printf("\n");
//    }
//    for (i = 0; i < 14; i++)//��ӡ���һ�е�*
//    {
//        printf(" ");//��ӡ�ո�
//    }
//    printf("*\n");//��ӡ*
//    return 0;
//}

//������Ԫ�����θ�ֵ0��1��2��3��4��5��6��7��8��9��Ȼ�������������

//int put(int arr[], int x)
//{
//	if(x<9)
//	{
//		arr[x] = x;
//		put(arr, x+1);
//	}
//	printf("%d ", x);
//	return  x;
//
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int  arr[] = { 0,1,3,4,6,8,5,2,9,7 };
//	put(arr,i);
//	return 0;
//}

//int main()
//{
//	char a = 'H', b = 'i';
//	putchar(a);
//	putchar(b);
//	return 0;
//}

//int main()
//{
//	char character1, character2, character3, character4;//�����ַ�����
//	character1 = 'L';//��ʼ�����������ַ�L��ֵ��character1
//	character2 = 'o';//��ʼ�����������ַ�o��ֵ��character2
//	character3 = 'v';//��ʼ�����������ַ�v��ֵ��character3
//	character4 = 'e';//��ʼ�����������ַ�e��ֵ��character3
//	putchar(character1);//����ַ�L
//	putchar(character2);//����ַ�o
//	putchar(character3);//����ַ�v
//	putchar(character4);//����ַ�e
//	putchar('\n');//����
//	return 0;//��������ֵΪ0
//}
//int main()
//{
//	int a = 7 % 2;// �����1 ��Ϊ7��2����3��1�����1��������ģ
//	int b = 7 / 2;// �����3 ��ȡ������
//	printf("%d\n", a);//
//
//	printf("%d\n", b);
//
//	return 0;
//}
//int main()
//{
//		int a = 7;
//		int b = -7;
//	
//		printf("%d ", a << 1);
//		printf("%d ", a >> 1);
//
//		printf("%d ", b << 1);
//		printf("%d ", b >> 1);
//		
//		
//		return 0;
//
//}
//#include <string.h>
//int main()
//{
//	int arr[] = "hi,boy";
//	int len = strlen("ab,c");
//	printf("%s", arr[2]);
//	return 0;
//}
//void main()
//{
//	char b[] = "Hello,you";
//	b[5] = 0;
//	printf("%s \n", b);
//}
//int main()
//{
//	int x = 2, y = -1, z = 8;
//	if (x < y)
//		if (y < 0)
//			z = 0;
//		else
//			z = z + 1; 
//	printf(" % d\n", z);
//}
//int main()
//{ 
//	int i = 0;
//	int sum = 3;
//	int a[] = {7,8,9,6,5,9,6,8};
//	for (i = 1; i < 7; i *= 2);
//		sum = sum + a[i];
//		printf(" %d\n",sum);
//}
//int f(int x, int y)
//{
//	return(y - x) * x;
//}
//int main() {
//	int a = 3, b = 4, c = 5, d;
//	d = f(f(a, c), f(a, b) + f(c, b));
//	//6, -2
//	printf("%d\n", d);
//	return 0;
//}
//int main() 
//{ 
//	int a[3][3], * p, i;
//	p = &a[0][0];
//	for (i = 0; i < 9; i++) 
//	p[i] = i;
//	for (i = 0; i < 3; i++)
//	printf("%d ", a[1][i]); 
//}
//2int main()
//{
//    char name1[20] = "xxxxxxxxxxx";
//    char name2[20] = "xxxxxxxxxxx";
//    strcpy_s(name1, "dicker");
//    strcpy_s(name2, "dic\0er");
//    printf("%s\n", name1);
//    printf("%s\n", name2);
//
//    return 0;
//}
