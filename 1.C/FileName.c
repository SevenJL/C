//#include <stdio.h>
//
//int  g_val  = 203;
//
//	void test()
//
//	{
//		int i = 10;
//		i++;
//		printf("%d", i);
//
//	
//     }
//	int main()
//	{
//		int i = 0;
//
//		for (i = 0; i < 10; i++)
//		{
//			test();
//				
//		}
//
//		return 0;
//	}
//
//
//
//
//void test()
//
//{
//	static int i = 10;
//	i++;
//	printf("%d\n", i);
//
//
//}
//int main()
//{
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		test();
//
//	}
//
//	return 0;
//}
//int  g_val = 203;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//����1
//1.c
//int add(int x, int y)
//{
//    return x + y;
//}
//2.c
//int main()
//{
//    printf("%d\n", add(2, 3));
//    return 0;
//}
//����2
//1.c
//static int add(int x, int y)//�����������
//{
//    return x + y;
//}
//2.c
//
//
//static int add(int x, int y)
//{
//    return x + y;
//}
//test.c
//int main()
//{
//    printf("%d\n", add(2, 3));
//    return 0;
//}
//static int add(int x, int y)
//{
//    return x + y;
//}
//#define�����ʶ������
//#define max 1000
//define�����
//#define add(x,y) ((x)+(y))
//#include <stdio.h>
//int main()
//{
//    int sum = add(2, 3);
//    printf("sum = %d\n", sum);
//
//    sum = 10 * add(2, 3);
//    printf("sum = %d\n", sum);
//
//    return 0;
//}
//int main()
//{
//	int x = 5;
//	printf("%d\n",x++* 3);//��ʹ�ú�Ӽӣ�Ҳ�����Ƚ���5*3=15���ڽ���x+1=6,
//	printf("%d\n", x);
//
//	return 0;
//}
//int main()
//{
//	int a = 10
//		& a;
//	printf("%p\n", &a);
//	int* p = &a;
//
//    printf("%p\n", &p);
//	return 0;
//}
//int main()
//{
//    char ch = 's';
//    char* pc = &ch;
//    printf("%p\n", ch);
//    return 0;
//}
//int a = 100;
//struct stu
//{
//    char name[10];
//    char class[20];
//    int  age;
//};//�����{}����������;�ſ���
//
//
//int main()
//{
//    ��ӡ�ṹ����Ϣ
//    struct stu s = { "dicker","class1", 99 };
//    s�������Ƕ������ѧ����ȫ����Ϣ
//    .Ϊ�ṹ��Ա���ʲ�����
//  /*  printf("%s %s %d", s.name, s.class, s.age);*/
//    ->Ϊ������
//    struct stu* ps = &s;
//    printf("name = %s class = %s age = %d\n", ps->name, ps->class, ps->age);
//
//
//    return 0;
//}
//
//#include <stdio.h>
//
//struct stu {
//    char name[20];
//    char class[20];
//    int age;
//};
//
//int main() {
//    struct stu s = { "dicker", "class1", 99 };
//    printf("%s %s %d\n", s.name, s.class, s.age);
//    struct stu* ps = &s;
//    printf("name = %s class = %s age = %d\n", ps->name, ps->class, ps->age);
//    return 0;
//}
//ʹ��������±������������ֵ
//
//
//int main() {
//    int i = 0;
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//    for (; i < 7; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}}int main()
//{
//    int i = 0;
//    int arr[] = { 1, 2, 3 ,4, 5, 6, 7 };
//    for (; i < 7; i++);
//    ��c������0Ϊ�棬��0Ϊ�٣�-1��1�ȵȶ�Ϊ�棬�����������for�����ʹ�ò���Ҫ���i=0)
//    �������˼�ǵ�i=0ʱ������������Ϊ�٣�����������д���Ĳ��������iС��10�Ļ���������Ϊ0����˵��iΪ�棬�Ϳ��Լ����������µĴ��������i��һֱ��һ��ֱ���ӵ���7��Ϊֹ�Ż�ֹͣ����
//    {
//        printf("%d", arr[i]);
//        �������˼���Ǵ�ӡ����ֵ��i����Ӧ����ֵ����i=0ʱ������±�����Ӧ����ֵ����1���������ơ�
//    }
//    printf("\n");
//
//    return 0;
//#include <stdio.h>
//
//int main()
//{
//    int age = 0;
//    scanf_s  ("%d", &age);
//    if (age < 18)
//    {
//        printf("good boy\n");
//    }
//    else if (age >= 18 && age <= 25)
//    {
//        printf("you are a adult\n");
//    }
//    else if (age > 25 && age < 50)
//    {
//        printf("you are a successful boy\n");
//    }
//
//    return 0;
//}
//int main()
//{
//    int sex = 0;
//    switch (sex)
//    {
//    case 1:
//        {
//            printf("you are boy\n");
//            break;
//        }
//    case 2:
//        {
//            printf("you are girl\n");
//            break;
//        }
//    default:
//            break;
//    }
//
//
//
//
//	return 0;
// }
//int main()
//{
//    int day = 1;
//    switch (day)
//    {
//        case 1;
//            case 2;
//                case 3;
//                    case 4;
//                        case 5;
//                            printf("������");
//                            break;
//                            case 6;
//                                case 7;
//                                    printf("��Ϣ��");
//                                    break;//��������һ��case���������break����������ʹ������δ�����޸Ĵ�����������һЩ�����ʱ����ӷ��㣬������Ϊû��break�����³���bug.
//    }
//
//
//	return 0;
//int main ()
//{
//    int i = 0;
//    while (i <= 9)
//    {
//        i++;
//        printf("%d\n", i);
//
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    while (i < 10)
//    {
//        if (i == 5)
//            continue;//continue������������continue����Ĵ���ֱ��ȥ���ص���while����������ˣ������ж��Ƿ�i<10,
//        printf("%d", i);
//        i++;
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    while (i < 10)
//    {
//        i++;
//        if (i == 5)
//            continue;
//        printf("%d", i);
//    }
//    return 0;
//
//int main()
//{
//    char password[10] = { 0 };
//        printf("put your words");
//        scanf_s ("%s", password);
//    int ch = 0;
//    while ((ch = getchar()) != '\n')
//    {
//        ;
//    }
//         printf("sure?(y\n)");
//    int ret = getchar;
//    if ('y' == ret)
//    {
//        printf("yes!\n");
//    }
//    else
//
//        printf("no!\n");
//
//        return 0;
//}
//	��һ������
//	����������һ���ַ���
//	
//
//
// int main ()
//{
//char password[20] = { 0 };
//	printf("����������:>");
//	scanf_s ("%s", password);//123456
//	
//	getchar();//��ȡ��\n
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ������(y/n):>");
//	int ret = getchar();
//	if ('y' == ret)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//int main()
//{
//    char arr[] = { 73,32,99,97,110,32,100 };
//    int a = 0;
//    int sz = sizeof(arr) / sizeof(0);
//    while (a < sz)
//    {
//        printf("%s", arr[a]);
//        a++;
//
//    }
//    return 0;
//}
//int main()
//{
//    int a = printf("hehe");
//    printf("\n%d\n", a);
//    return 0;
//}
//��ӡprintf("hehe\n")
//int main()
//{
//    printf("printf(\"hehe\\n\")");
//        ����Ϊ�˲��ô�ӡ�ľ����е�"�����ǵ�"�໥����һ�����Ǿ���Ҫ\��ת�����ǣ�ʹ���Ǳ�ɽ�����һ���ַ��������Ǳ����������ǵġ�����ʹ��        
//        return 0;
//}
//int main()
//{
//    int arr[4] = { 0 };
//    int i = 1;
//    while (i < 4)
//    {
//        scanf_s5("%d", &arr[i]);
//        i++;
//    }
//    int max = arr[0];
//    i = 1;
//    while (i < 4)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//        i++;
//    }
//    printf("%d\n", max);
//
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)//
//    {
//        printf("%d", i);
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 8)
//        {
//            break;
//        }
//        printf("%d", i);
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 8)
//        {
//            continue;
//        }
//        printf("%d", i);
//    }
//    return 0;
//int main()
//{
//    int i = 0;
//    int l = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (l = 0; l < 3; l++)
//        {
//            printf("hi!\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int l = 0;
//    for (; i < 3; i++)
//    {
//        for (; l < 3; l++)
//        {
//            printf("hi\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    for (;;)
//    {
//        printf("hi\n");
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    do
//    {
//        i++;
//        printf("%d\n", i);
//        if (i == 11)
//        {
//            break;
//        }
//    } while (i < 10);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    scanf_s ("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//    }
//    printf("%d", ret);
//
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//
//        for (i = 1; i <= 3; i++)
//        {
//            ret = ret * i;
//            sum = sum + ret;
//        }
//          printf("%d", sum);
//
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    scanf_s("%d", &n); 
//        for (i = 1; i <= n; i++)
//        {
//            ret = ret * i;
//            sum = sum + ret;
//        }
//    printf("%d", sum);
//
//    return 0;
//
// }
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 9;
//	int sz = sizeof (arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	int mid = 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = left + 1;
//
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (left <= right)
//		{
//			break;
//		}
//	}
//		if (left > right)
//		{
//			printf("yes it is %d", mid);
//		}
//		else
//		{
//			printf("no\n");
//		}
//	
//	 
//	return 0;
//}
//int bin_search(int arr[], int left, int right, int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) >> 1;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;//�ҵ��ˣ������±�
//	}
//		return -1;//�Ҳ���
//}
//int bin_search(int arr[], int left, int right, int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) >> 1;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;//�ҵ��ˣ������±�
//	}
//	return -1;//�Ҳ���
//}
//int arr[] = { 1,2,3 };
//int left = 0;
//int right = 0;
//int key = 2;
//char  sum = bin_search(1,2, 3,2);
//
//
//int bin_search(int arr[], int left, int right, int key) 
//{
//    int mid = 0;
//    while (left <= right) {
//        mid = (left + right) >> 1;
//        if (arr[mid] > key) {
//            right = mid - 1;
//        }
//        else if (arr[mid] < key) {
//            left = mid + 1;
//        }
//        else {
//            return mid; //�ҵ��ˣ������±�
//        }
//    }
//    return -1; //�Ҳ���
//}
//
//int main()
//{
//    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
//    int key = 11;
//    int left = 0;
//    int right = sizeof(arr) / sizeof(arr[0]) - 1;
//
//    int result = bin_search(arr, left, right, key);
//    if (result != -1) 
//    {
//        printf("�ҵ��ؼ��� %d ���±� %d ��\n", key, result);
//    }
//    else
//    {
//        printf("δ�ҵ��ؼ��� %d\n", key);
//    }
//
//    return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 9;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = left + 1;
//
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (left <= right)
//		{
//			printf("it is %d", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("no");
//
//
//	}
//}
//#include <windows.h>
//int main()
//{
//	char arr1[] = { "hi!boy!"};
//	char arr2[] = { "#######"};
//
//	int left = 0;
//	int right = strlen(arr2) - 1;
//
//	while (left <= right)
//	{
//		arr2[right] = arr1[right];
//		arr2[left]  = arr1[left];
//		printf("%s\n", arr2);
//		sleep(200);
//		system("cls");
//		left++;
//		right--;
//
//	}
//		printf("%s\n", arr2);
//
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[10] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("mima=");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("sure\n");
//			break;
//		}
//		else
//		{
//			printf("error\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("quit!!!");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//    printf("1.start\n");
//    printf("0.quit\n");
//}
//rand_max--rand�����ܷ�������������ֵ
//void game()
//{
//    int random_num = rand() % 100 + 1;
//    int input = 0;
//    while (1)
//    {
//        printf("shu zi>:");
//        scanf_s("%d", input);1
//        if (input > random_num)
//        {
//            printf("big!\n");
//        }
//        else if (input < random_num)
//        {
//            printf("small!\n");
//        }
//        else
//        {
//            printf("good!\n");
//            break;
//        }
//    }
//}
//int main()
//{
//    int input = 0;
//    srand((unsigned )time(null));
//    do
//    {
//        menu();
//        printf("choose>:");
//        scanf_s("%d", &input);
//        switch (input)
//        {
//        case 1:
//            game();
//            break;
//        case 0:
//            break;
//        default:
//            printf("again choose!\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}