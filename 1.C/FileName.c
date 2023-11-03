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
//代码1
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
//代码2
//1.c
//static int add(int x, int y)//修饰这个函数
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
//#define定义标识符常量
//#define max 1000
//define定义宏
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
//	printf("%d\n",x++* 3);//先使用后加加，也就是先进行5*3=15，在进行x+1=6,
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
//};//在这个{}后面必须加上;才可以
//
//
//int main()
//{
//    打印结构体信息
//    struct stu s = { "dicker","class1", 99 };
//    s就是我们定义这个学生的全部信息
//    .为结构成员访问操作符
//  /*  printf("%s %s %d", s.name, s.class, s.age);*/
//    ->为操作符
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
//使用数组的下标来进行输出数值
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
//    在c语言中0为真，非0为假（-1，1等等都为真，所以在上面的for语句中使用才需要添加i=0)
//    这里的意思是当i=0时，这个条件语句为假，不会进行下列代码的操作。如果i小于10的话（但它不为0，就说明i为真，就可以继续进行以下的代码操作，i就一直加一，直到加到比7大为止才会停止。）
//    {
//        printf("%d", arr[i]);
//        这里的意思就是打印的数值是i所对应的数值，当i=0时数组的下标所对应的数值就是1，依次类推。
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
//                            printf("工作日");
//                            break;
//                            case 6;
//                                case 7;
//                                    printf("休息日");
//                                    break;//最好在最后一个case语句后面加上break，这样可以使我们在未来的修改代码或者想添加一些代码的时候更加方便，不会因为没有break而导致出现bug.
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
//            continue;//continue的作用是跳过continue后面的代码直接去返回到了while的语句上面了，继续判断是否i<10,
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
//	举一个例子
//	假设密码是一个字符串
//	
//
//
// int main ()
//{
//char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf_s ("%s", password);//123456
//	
//	getchar();//读取了\n
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(y/n):>");
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
//打印printf("hehe\n")
//int main()
//{
//    printf("printf(\"hehe\\n\")");
//        我们为了不让打印的句子中的"与我们的"相互纠缠一起，我们就需要\来转义他们，使他们变成仅仅是一个字符，而不是被用来与我们的“进行使用        
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
//			return mid;//找到了，返回下标
//	}
//		return -1;//找不到
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
//			return mid;//找到了，返回下标
//	}
//	return -1;//找不到
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
//            return mid; //找到了，返回下标
//        }
//    }
//    return -1; //找不到
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
//        printf("找到关键字 %d 在下标 %d 处\n", key, result);
//    }
//    else
//    {
//        printf("未找到关键字 %d\n", key);
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
//rand_max--rand函数能返回随机数的最大值
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