# 一.**C语言**

---

## 1.解释C语言中必须要有

标准的主函数写法

```c
#include <stdio.h>
int main()
{
 	
    printf("hi");

	return 0;
}
```

printf是一个库函数，专门用来打印数据的。//是注释用的

std-标准                 main函数是程序的入口

i-input                    一个代码的文件中有且只有一个main函数

0-output

（int main可以写成void main，但不推荐，比较古老，使用int main 就可以）

**在一个工程文件中只能有一个main函数，可以有多个.C文件，只能在test1或者test2中含有一个main函数，否则会报错**



<a href="https://smms.app/image/gVY4Aqzbn1SFNKD" target="_blank"><img src="https://s2.loli.net/2023/10/16/gVY4Aqzbn1SFNKD.png" ></a>

---



## 2.计算机中的储存单位及进制

bit-比特位        1bit=8byte                      **int 占四个字节**

byte-字节         1024byte=1kb

kb                      1024kb=1mb

mb                     1024mb=1tb 

tb                        1024tb=1pb

pb

---



## 3.变量的概念及应用（变量周期）

### 3.1.变量的概念

变量分为局部变量和全局变量俩种。

局部变量是{}内的变量，而全局变量是{}外的变量。

例如：

```c
int a=1;//这个a函数就是全局变量
    int main()
{
   int b=2;//这个b函数就是局部变量
   printf("%d",&b);  
}
```

当全局变量和局部变量名字相同情况下时，局部优先使用变量，其次是全局变量。（强烈不建议全局和局部变量写成一样的）

### 3.2.**变量的生命周期**

局部变量的生命周期是在{}内的，{}内的代码完成后，局部变量的生命周期也就结束了。而全局变量的生命周期是与代码文件的生命周期是一样的，这个文件什么时候结束，这个全局变量的生命周期就什么时候结束。

如果要使用外部的符号时应该用**extern int a**这样去表示才可以使用外部的符号（如果外部有俩个以上的符号都同时表示了这个a，那么将无法表示出a的值）





## 4.函数的使用

scanf是一个输入函数，而我们开始写的printf是输出函数。%d是让我输入一个值，\n是换行

```c
int main()
{
    int num1=0;
    int num2=0;//这是给num初始一个值
        //输入2个整数
        scanf("%d %d",&num1,&num2);
    //求和
    int sum =num1+num2;
    //输出
    printf("%d\n",sum);
        return 0;
}
```

---



## 5.在VS中scan的使用及报错修改

如果直接使用scanf函数，在vs中则会报错，因为vs会认为scanf函数这个不安全，会让你使用scanf_s这个函数，这个是VS自己编译的，在其他编译器中不会识别出来，如果你想直接使用scanf函数，则需要在第一行中写以下代码**第一行！！！**

```c
#define _CRT_SECURE_NO_WARNINGS
```

**scanf_s这个函数的使用是非常不建议，所以最好不使用，否则会遇到许多问题。**



**scanf的返回值就是里面输入几个值就返回几个值 ，假如scanf里面输入了1  2 ，那么就返回2个值**

## 6.常量

### 6.1.字面常量

例如：3213,4.342，等等

### 6.2.const修饰的常变量

```c
const num=1
      num=2
```

这里的num是修改过后的常量，不可以更改，**它的本质是变量，但有常量的属性**

### 6.3.define定义的标识符常量

```c
#define MAX 100 
printf("max=%d\n",MAX);
```

### 6.4.枚举常量

例如：

**RED,                      MALE,**

**GREEN,                 FEMALE,**

**BLUE,**

这些不可更改并且可以一一列举出来的常量都叫做枚举常量，这些常量不可更改

（枚举常量是从0开始的，依次向下递增1的）

### 6.5.定义变量的方法



```c
int    num=1;
float  high=1.8;
char   ac=100;
```

**全局变量，静态变量都是放在静态区**

**全局变量，静态变量不初始化的时候，默认会被初始化为0**

**局部变量，不初始化，默认值是随机值**

## 7.字符串

由双引号引起来的字符被称为字符串面值简称字符串

**字符串结尾标志是一个\0的转义字符。他在计算字符串的长度的时候是结束标志，不算做字符串内容,默认自带一个\0**

```c
//'A';
//char ch='w';
//c语言中没有字串符类型;
//"ABCDEF";
 char arr1[]="abcdef";//6个
 char arr2[]={'a','b','c','\0'}3
```

如果使用单引号结尾必须带上\0，否则将无法结束，直到遇到下一个\0时才会结束。

**求字符串的一个函数是，string length，简称用 string.h，与stdio.h一样**

```c
int len=strlen("abc");
printf("%d\n",len);
printf("%s",arr1);
printf("%s",arr2);
```

**sizeof是一个操作符，是用来计算所占内存的空间大小，不关注内存中存放的内容，而strlen是一个库函数，是专门用来求字符串长度的，只针对字符串，它是从参数给定的地址后，从那个地址开始一直往后面找\0,统计的是\0之前出现的字符个数**





**strlen计算时不包括\0，size of 算内存时包括。**





## 8.转义字符



### 8.1.转义字符的所有含义

> **\?         在书写连续多个问号的同时使用，防止他们被解析成三个字母词（??)以前会被解析成])**
>
> **\\'          用于表示字符常量‘**  
>
> **\“         用于表示一个字符内部的双引号**
>
> **\\\         用于表示一个反斜杠，防止它被解释为一个转义序列符**
>
> **\a        警告字符，会发出蜂鸣**
>
> **\b        退格符号**
>
> **\f         进制符号**
>
> **\n        换行**
>
> **\r         回车**
>
> **\t         水平制表符**
>
> **\v        垂直制表符**
>
> **\ddd   ddd表示1~3个八进制的数字。如：\130 ~X**
>
> **\xdd   dd表示2个十六进制的数字。    如：\x30~0**
>



---

如果我们要在代码中打印一个目录的话：c:\code\test.c

我们需要这样打

`printf("c:\\code\\test.c")`

错误的打法是这样

`printf("c:\code\test.c")`

### 8.2.ASCII码表（仅查阅）

<a href="https://sm.ms/image/aSJshYFQgU9fuk8" target="_blank"><img src="https://s2.loli.net/2023/10/16/aSJshYFQgU9fuk8.png" ></a>

`character_Small=character_Big+32;`

小写字母=大写字母+32



## 9.注释

注释在学习编程的过程中比较重要，一般写好代码之后都要注释好每个代码的含义，对于自己在以后修复和完善代码的更好的理解，有些代码如果不想要了或者是不想它们继续执行下去，可以选择注释掉，也可以选择删掉，并且如果有些代码比较晦涩难懂，我们需要进行注释，这样能更好方便我们对于自己写的代码的理解。

**注释有俩种风格：**

***1.***/**/这种是C语言的注释风格

缺点是不能够进行嵌套式注释

**2.**//这种是C++的注释风格

可以注释一行也可以注释多行

**（注释最好使用C++的注释风格）**





## 10.数据类型

```c
char         //字符数据类型       %c
short        //短整型            
int  		 //整型             %d 
long		 //长整型        
long long	 //更长的整型
float   	 //单精度浮点         %f
double  	 //双精度浮点         %f
```

## 11.选择语句

```c
int main()
{
    int code=0;
    
    printf("会敲代码吗？");
    scanf("%d",&code);
    if(code=1)
    //if是如果也就是选择语句
    
    {
     print("good!\n");
      }
    else
    //else是否则也就是如果不是上面代码中输入的就会执行以下代码
    {
        printf("you are bad\n");
    }
    return 0;
}
```

## 12.循环语句

```c
int main()
{
    printf("come\n");
    int line = 0;
    while(line<=20000);//while是循环语句的开始标志，
    {
        line++;//line++等于line=line+1
        printf("again");
    }
    if(line>20000);
    printf("good!\n");
    
    return 0;
}   
```

## 13.函数

```c
int main()
{
//最简单的加减函数
    int sum1=0;
        int sum2=0;
        int sum3=0;
        print("数字\n");
        scanf("%d %d %d", &sum1 ,&sum2 ,&sum3);//&是取地址的意思
    int sum=sum1+sum2+sum3;   
    printf("sum=%d",sum);
    return 0;
}   
```

```c
//如果写成函数的形式变成以下形式
int Add（int x, int y);
{
    int z=x+y;
    return z;//还可以写成return(x+y);这种形式。
}
int main()
{
    
    int a=0;
    int b=0;
    int sum=0;
    printf("俩个数字\n");
    scanf("%d %d",&a,&b);
    sum =Add(a,b); //这里使用的是上面的函数，它的优点是能够简化代码并且重复使用！
    printf("sum=%d\n",sum);
    return 0;
}
```

```c
c
```



**优点是简化代码能够重复使用**

## 14.数组

### 14.1.定义

```c
int arr[10] ={0,1,2,3,4,5,6，7,8,9，};
//这里的[]可以填也可以不填，如果填的是10，那么这个数组只能存放10个数字
```

### 14.2.数组的下标

在c语言中是对数组的每个元素都标识的，都是从0开始依次增加1，数组可以通过下标来访问。

例如：

```c
int arr[100] ={88}
//如果数组有100个元素，那么下标的范围是0-99
```

**数组长度跟字符串长度是不一样的，数组长度是这个数组中有多少个元素，而字符串长度是从元素的首地址那个元素开始，一直到\0之前，有多少个**

### 14.3.数组的使用

```c
//使用数组的下标来进行输出数值
int main()
{
    int i = 0;
    int arr[] ={1,2,3,4,5,6,7};
    for(i=0;i<7;i++)//条件语句后面不能加;否则会无法使用，导致输出异常
    //在C语言中0为真，非0为假（-1，1等等都为真，所以在上面的for语句中使用才需要添加i=0)
    //这里的意思是当i=0时，这个条件语句为假，不会进行下列代码的操作。如果i小于10的话（但它不为0，就说明i为真，就可以继续进行以下的代码操作，i就一直加一，直到加到比7大为止才会停止。）i= 0 也可不写
    {
        printf("%d",arr[i]);
        //这里的意思就是打印的数值是i所对应的数值，当i=0时数组的下标所对应的数值就是1，依次类推。
    }
    printf("\n");
    
    return 0;
}
```



## 15.操作符

### 15.1算术操作符

\+    -     \*       \        %

### 15.2位移操作符

\>>  \<<

### 15.3赋值操作符

=       +=         -=        \*=         /=          ^=         |=        \>>=      \<<= 

### 15.4单目操作符

！逻辑反操作     例如:0是假，而!0就为真

\-   		  负值

\+  		  正值

&    	   取地址

sizeof   操作数的类型长度（以字节为单位）

~            对一个数的二进制按位取反

\- -      	前置，后置- -

++         前置，后置++

\*     	  间接访问操作符（引用操作符）

(类型)   强制类型转换



```C
    int a = 1
    int b = a++ //后置++，先使用，再++，也就是先让 b = a，然后再让 a+1
    int b = ++a //同理可得，先++，后使用。
    int b = a-- //后置--，先使用，后--
    int b = --a //同理可得。    
```

```c
int main()
{
	int x = 5;
	printf("%d\n",x++* 3);//先使用后加加，也就是先进行5*3=15，在进行x+1=6,
	printf("%d\n", x);
	return 0;
}
//输出结果一个是15一个是6,
```

### 15.5逻辑操作符

&&    逻辑与  （并且）  例如：a&&b  如果a和b中有一个是假的，那么全为假，如果俩个都是真的，那么全为真。

||     逻辑或  （或者）  例如：a||b   如果a和b中有一个是真的，那么全为真。

### 15.6条件操作符

exp1？exp2：exp3**（也叫三目操作符）**

例如：

```c
int a=1
    int b=2
    a>b?a:b
  //a小于b，所以这个三目操作符只会输出b，如果a>b，那么输出结果为a。      
```

### 15.7逗号表达式

exp1,exp2,exp3,exp4,…expN

```c
int main()
{
    int a=10;
        int b= 20;
    int c = 0;
    //       c=8   28    5
    int d =(c=a-2,a=b+c,c-3);
    printf("%d",d);
    //输出结果只有5
    //逗号表达式的特点是：从左往右依次计算，整个表达式的结果是最后一个表达式的结果。
    
    学校的人                                    
    return 0;,       
}
```

<a href="https://sm.ms/image/dF5Ex7thPrk62w3" target="_blank"><img src="https://s2.loli.net/2023/10/19/dF5Ex7thPrk62w3.png" ></a>



### 15.8下标应用和函数调用操作符

[]是下标引用操作符，arr和3就是[]的操作数

`
arr[3]=20;//arr和3就是[]的操作数
`

`int sum = Add(2.3);//()`

就是函数调用操作符，Add，2，3都是操作数



## 16.常见关键字

```c
auto break case char const continue default do double else enum extern float for goto
if int long register return short signed sizeof static struct switch typedef union 
unsigned void volatile while    
```

**变量的命名：**

1.有意义

2.名字必须是字母，数字，下划线组成的，不能含有特殊字符，同时不能以数字开头

3.变量名不能是关键字

例如:`int for `这就是错误的示范

### 16.1关键字typedef

**typedef是定义的意思，也就是重命名。**

```c
typedef unsigned int unit_32
//上述代码的意思是将unsigned int 重新命名为unit_32，意思就是unsigned int = unit_32
//例如以下代码
   int main() 
{
    unsigned int sum1 = 10;
    unit_32      sum2 = 10;
//这俩行代码是一个意思，所执行的程序都是一模一样的，只是它们的打法不一样。
 
     return 0;  
}
```

### 16.2关键字static

在C语言中：static是用来修饰变量和函数的

  1.修饰局部变量被称为静态局部变量

  2.修饰全局变量被称为静态全局变量

  3.修饰函数被称为静态函数

  4.修饰的变量可以改变 

####  16.2.1修饰局部变量

```c
#include <stdio.h>

	void test()//void是不返数值的关键字类型

	{
		int i = 10;
		i++;
		printf("%d", i); 
        //这个函数执行的顺序是先令i为10然后再进行i++然后打印出来，打印出来之后的数值不会保留而是被销毁，也就跟这个函数的生命周期是一样的，执行完之后就销毁了。
     }
	int main()
	{
		int i = 0;

		for (i = 0; i < 10; i++)
		{
			test();//这里调用了上面的test函数
		}

		return 0;
	}
//这里执行代码之后就会显示10个11
```

 ```c
 #include <stdio.h>
     void test()
 
 {
 	static int i = 10;//这里static的作用是把i的生命周期改变了，也就是说当这个函数执行完之后，这个i所被输出的值不会被销毁，比如这个代码是令i=10，执行完之后，这个i就变成了11，但是这个11不会被销毁，它的作用域改变了，也就是说它依旧存在，直到这个全部的程序执行完之后他才会销毁，而不是执行完这个函数就销毁了。（它的储存位置从栈区改成了静态区。）
 	i++;
 	printf("%d\n", i);
 }
 int main()
 {
 	int i = 0;
 	for (i = 0; i < 10; i++)
 	{
 		test();
 	}
 
 	return 0;
 }
 
 ```

#### 16.2.2修饰全局变量

```c
//下面代码在编译时是正常的
//1.c
int  g_val = 203;
//2.c
int main()
{
	printf("%d\n", g_val);
	return 0;
}
//下面的代码在编译是就不能正常运行了
//1.c
static int num1 = 10;//一个全局变量一旦被修饰就不能在全部文件中使用只能在本源文件中使用，意思也就是只能在1.c中使用而不能在2.c中使用这个全局变量
//2.c
int main()
{
    printf("%d",num1);
    return 0;
}

```

#### 16.2.3修饰函数

```c
//代码1
//1.c
int Add(int x,int y)//创建一个Add函数
{
   return x+y;
}    
//2.c
int main()
{
    printf("%d\n",Add(2,3));
    return 0;
}    


//代码2
//1.c
    static int Add(int x,int y)
//修饰这个函数，从而使得它无法调用到2.c中(这个全局变量的外部链接属性就变成了内部链接属性，其他的源文件也就不能再使用这个全局变量了)
    {
        return x+y;
    }
//2.c
    int main()
    {
        printf("%d\n",Add(2,3));
        return 0;
    }    
```



### 16.3关键字register

```c
int main ()
{
//寄存变量器
  register int num = 3;//建议:3存放在寄存器中（寄存器的运算速度最快）  
  return 0;
    
}    
```

### 16.4#define定义常量和宏

```C
//#define定义标识符常量
#define MAX 1000

//define定义宏
//ADD叫做宏名，(X,Y)J叫做宏的参数，参数是无类型的。
#define ADD(X,Y) ((X)+(y))
//((X)+(y))是宏体

#include <stdio.h>
 int main ()
 {
     int sum = ADD(2,3);
     printf("sum = %d\n",sum);
     
     sum = 10*ADD(2,3);
     printf("sum = %d\n",sum);
      
     return 0;
 }    
```

## 17.指针

为了使内存更加有效，会把内存分为一个一个小的内存单元，每个内存单元都是1个字节，又为了能够有效的进行对内存单位的访问，又对每个内存单元进行编号，这些编号被称为该内存单元的地址。

**变量是储存在内存中的，所以每个变量都有对应的地址**

取地址的方法：

```c
int main()
{
    int num = 7;
    &num;//取出num的地址
    //由于num是4个字节，每个字节都有地址，取出的地址都是第一个字节的地址（较小的地址）
    printf("%p\n",&num);//打印地址，%p是打印地址的形式
    return 0;
}    
```

地址如何储存的方法：

```c
int num = 10;
int * p;//p为一个指针变量，num叫做指针也就是地址，而p叫做指针变量也就是存放指针(地址)的变量。
p = &num;
```

指针的实际应用：

```c
 int main()
 {
     int num = 10;
     int *p=&num;
     *P = 20;//意思就是找到num的值也就是10，并且变为20
 // *P就差不多等于num了
 // *的实际意义是解应用操作符，意思是通过p中存放的地址，找到p指向的对象。*p意思就是p所指向的对象     
     return 0;
 }    
```

```c
int* p1,p2,p3;
//这里的意思是p1是指针变量，p2和p3是整型。
int *p1,*p2,*P3;
//这里的意思是p1,p2,p3都是指针变量，要区分清楚。
```

<a href="https://smms.app/image/zVq2IPETOmjBAt5" target="_blank"><img src="https://s2.loli.net/2023/10/16/zVq2IPETOmjBAt5.png" ></a>

```c
int main ()
{
    char ch = 's';
    char *pc =&ch;
    printf("%p\n",ch);
    return 0;
}
```

**这里的int和char都是类型，这个ch等等什么的是什么类型的东西，下面的\*前面就要和它一样的类型**

指针变量的大小取决于地址的大小

32位电脑的地址是32bit，**既4个字节**

64位电脑的地址是64bit，**既8个字节**

## 18.结构体

结构体的意思就是当我们需要描述一些特别复杂的人或事物时，类型已经无法让我描述的清楚和清晰了，这时候我们就要去定义一个类型也就叫做结构体。它的关键字是**struct**

例如：当我们要描述一个学生的姓名，班级，年龄等等时，我们就需要使用结构体去来定义它了。

例如：

```c
struct stu
{
    char name[];
    char class[];
    int  age;
};//在这个{}后面必须加上;才可以
```

```c
//打印结构体信息
struct stu s = {"Dicker","class1", 99};
//s就是我们定义这个学生的全部信息
//.为结构成员访问操作符，（变量.名称）
printf("name =%s class =%s age =%d", s.name, s.class, s.age);
//->为操作符,（指针变量—>名称）
struct stu *ps =&s ;
printf("name = %s class = %s age =%d",ps->name,ps->class,ps->age);

```

在这里第一块代码中，定义这个类型是它是不占用内存的，而第二块代码在中，给了s一个变量也就占用内存了，相当于是第一块代码是盖房子时的图纸，而第二块代码就是盖的房子，图纸不占位置，而房子已经开始占位置了。

# 二.初阶

## 1.分支和循坏语句

### 1.1分支语句

#### 1.1.1if语句

```c
//分支语句
if (表达式)//例如：a>10，不能加;否则会出错
    语句1；
else
    语句2；
else
    语句3;
```

```c
int main()
{
    int age = 0; //初始化
    sacnf ("%d",&age);
    if(age > 18)
    {
        printf("adult");
    }
    else
    {
        printf("child");
    }
    
    return 0;
}
```

```C
int main()
{
    int age = 0;
    scanf("%d", &age);
    if(age < 18)
    {
        printf("good boy\n");
    }
    else if(age >= 18 && age <=25)
    {
        printf ("you are a adult\n");
    }
    else if (age >25 && age < 50)
    {
        printf ("you are a successful boy\n");
    }
    
    return 0;
}
```

**在C语言中如果表达式为真则语句继续执行，0是假，非零是真**

**在使用if语句时最好使用代码块{},不管几句话都要使用，这样可以避免许多问题和bug**

**else的匹配是跟它最近的一个去匹配，而不是规定匹配就匹配哪个**

例如;

```C
int main ()
{
    
 if (age > 18)
{
    if (age >25 && age < 30)
   {
       printf("you are a good boy");
       
   }
}
    else//这里的else是跟离他最近的一个if匹配的
{
    printf(" you are a small boy");
    
}
   return 0;
}
```

#### 1.1.2switch语句

当我们需要分支多种条件时候，这时候使用if语句就似乎有点麻烦了，这时我们就可以使用我们的swiitch语句，这个语句可以很好的帮助我们去解决这个麻烦

```c
switch (整型表达式)//字符实际上也是整型
{
        语句项;
}
//语句项就是以下代码
case 整型常量表达式（1，2,3...)
    语句;
```

```c
int day = 1;
 switch (day)
 {
     case 1:
              printf("第一天");
         break;
//如果我们没有在printf后面加上break的话 那么case2，case3都会继续执行下去
     case 2:
         break;    
              printf("第二天");
     case 3:
         break;    
              printf("第三天");
 }

```

```c
//如果我们想写1-5天是工作日，6-7天是休息日，如果我们还按照以上的写法的话，就未必有点麻烦，所以我们可以写如下代码用来表示
int day = 1;
 switch (day)
 {
     case 1 :
     case 2 :
     case 3 :
     case 4 :
     case 5 :
         printf("工作日");
         break;
     case 6 :
     case 7 :
         printf("休息日");
         break;//最好在最后一个case语句后面加上break，这样可以使我们在未来的修改代码或者想添加一些代码的时候更加方便，不会因为没有break而导致出现bug.
 }
```



**case和default的位置可以随意摆放，无论放在哪里都可以**

**case语句要结束必须要用break，否则会一直执行下去，直到执行default语句才会结束**

**switch语句后面的（）里面是整型的表达式**

#### 1.1.3default语句

当我们在使用Switch语句的时候，我们可能会输入一个与Switch语句差异较大的值，例如，上面的例子，我们不小心输入个9，那么这就无法输出任何语句，我们就需要一个default语句来报错，否则可能会导致许多问题出现。

```c
int sex = 0;
switch (sex)
{
        case 1;
        {
            printf ("you are boy\n");
        break;
        }
        case 2;
        {
            printf("you are girl\n");
        break;
        }
        default;
        break;
}
```

**每个switch语句只能有一个default语句**

### 1.2循环语句

#### 1.2.1while语句

```c
//while语句结构
while (表达式)
    循环语句;
```

```C
int main()
{
    int i = 1 ;
    while (i >10)
    {
        printf ("%d", i);
        i++;
    }
    return 0;
}
```

上面是我们正常写的打印1-10的数字的代码

那么如果我们想在遇到一个数字时去停止或者跳过这个数字该怎么办呢？

```c
int main ()
{
    int i = 1;
    while (i >= 10)
    {
        if (i == 5)//break是用来终止永久循环的
            break;//这里的break语句是从while语句中跳出的，而不是从if语句中跳出的
        printf ("%d",i);
        i++;
        //但这里的会一直陷入循环，因为当i=5时，会跳出while语句，继续回到上面的代码来判定是否进入while语句，又因为i=5，所以会一直陷入循环
    }
    return 0;
}
```

```c
//改进上面的代码，不能让他们进入循环应写以下代码
int main ()
{
    int i = 0;
    while (i <= 9)
    {
        i++;
        printf("%d\n", i);
        
    }
    return 0;
}
//这里的代码输入就是1-10
```

**continue作用**

```c
int main ()
{
    int i = 1;
    while (i  < 10)
    {
        if (i == 5)
            continue;//continue的作用是跳过continue后面的代码直接去返回到了while的语句上面了，继续判断是否i<10,但是由于一直i=5，所以这个语句会陷入死循环，导致程序一直进行下去
        printf ("%d",i);
        i++;
    }
    return 0 ;
}
```

```C
int main ()
{
    int i = 1 ;
    while( i < 10)
    {
        i++;
        if (i == 5)
            continue;
    }
    return 0 ;
}
//它的输出结果是234678910
//这个结果没有5是因为当i=5时。这个程序没有打印直接就回到循环语句上面的判断上了，也就是i<10
```

**continue是用于终止本次循环的，也就是本次循环中的continue后边的代码不会再执行，而是直接跳转到while语句的判读部分，进行下次一循环的入口判断。**

​	**得到字符的代码如下**

```c
int main ()
{
    int ch = 0;
    while ((ch = getchar ())!= EOF)//EOF的意思是我们取到EOF这个东西才会停止
        purchar(ch);
    return 0;
}
//这个代码可以用来清理缓冲区的
```

```c
int main ()
{
    char ch = '0';
    while ((ch = getchar ())!= EOF)
    {
        if (ch < '0'|| ch >'9')
            continue;
        putchar (ch);
    }
    return 0;
}
//这个代码的作用是只打印数字符，跳过其他字符的。
```

```c 
//密码是一个字符串
	int main ()
{
	char password [10] = {0};
    	printf ("put your words");
   	 	scanf("%s",password);
 	int ch = 0;
    while ((ch = getchar())!= '\n')
//如果我们输入asdf空格asdasd，那么这个空格asdasd也不会变成密码，只有asdf才是密码，并且后面的也不会障碍输入Y\N的状态，因为getchar把缓存区的东西全部拿走了
       {
           ;
       }
    	printf ("sure?Y\N");
   		int ret = getchar();
    if ('Y'==ret)
    {
        printf("Yes!\n");
    }
    else
    {
        printf("NO!\n");
    }
    return 0;
}
```

#### 1.2.2for循环

```c
for(表达式1;表达式2;表达式3)
    循环语句；
```

表达式1：为初始化部分，例如：i=0

表达式2：为条件判断部分,例如:i >10(如果我们直接赋值的话，要判断是否为真还是假)

表达式3：为调整部分，例如：i++

```c
//打印1-10
int main()			
{
int i = 0;
 for (i= 1;i <= 10;i++)
 {
     printf("%d",i);   
 }
    return 0;
}
```

```c
int main()
{
    int i = 0;
    for(i = 1;i <= 10;i++)
    {
        if(i ==8)
        {
            break;//在i=8时这个程序就跳出了这个for语句，也就永久终止了，并不会死循环
        }
        printf("%d",i);
    }
    return 0;
}
//输出结果为1234567就停止了
```

```c
int main()
{
    int i = 0;
    for(i = 1; i <= 10; i++)
    {
        if( i == 8)
        {
            continue;
        }
        printf("%d",i);//输出结果是1234567910，没有8
    }
	return 0 ;
}
```

**for语句中嵌套for语句**

```c
int main()
{ 
    int i = 0;
	int l = 0;
	for(i = 0; i < 3;i++)//当i=0时进入到这个for语句时候，会执行下面的for语句，而下面这个for语句要执行3次才能从下面这个for语句中出来，当它出来的时候，会继续执行第一个for语句，而第一个for语句也就要再继续来到第二个for语句当中，所以这个hi要打印3*3次也就是9次才会结束完整个for语句.
    {
        for(l = 0; l < 3;l++)
        {
            printf("hi!\n");
        }
    }
     return 0 ;
}
//所以当我们好几个for语句相互嵌套的时候，我们需要计算他们每一个次数来进行相乘，才是最终我们得到的结果
```

**如果我们for中（）的初始化都省略了会发生什么**

```c
int main ()
{
    int i = 0;
    int l = 0;
    for (;i < 3;i++)
    {
        for(;l < 3;l++)//l没有初始化，导致l的值为3，使得下面的for语句不能再执行了
        {
            printf("hi\n");
        }
    }
    return 0;
}
//这个代码就会只打印3次hi，因为当我们执行完第二个for的语句的时候，我们又回到了第一个for语句，由于我们的l没有初始化，他的值还是上次结束时的值，也就是3，当l=3时，第二个for语句就不会执行，他也就不会打印hi了，原因就是没有重新初始化，所以一定不能省略初始化这个步骤
```

```c
for (int a = 0; a > 0; a++)
    //这里的int a = 0是C99语法，在许多编译器中可以用，但有些编译器不能用所以最好的写法还是 直接在for语句前先初始化再在for语句中写a=0进行初始化。
```

**for语句中如果省略了循环部分，那么就会判定这个是恒成立的**

```c
int main ()
{
    int a = 0;
    for(;;)
    {
        printf("hi\n");
    }
    return 0;
}
//这个程序就陷入了死循环，一直打印hi
```

**建议：**

**不要在for循环体内修改循环变量，防止for循环失去控制**

**建议for语句的循环控制变量的取值采用前闭后开的写法**

```c
int i =0 ;
//前闭后开的写法
for(i = 0;i < 10; i++)
{}
//俩边都是闭区间
for(i = 0;i <=9 ; i++)
{}
```

```C
//我们可以使用多个变量来控制一个循环
int x , y;
for(x = 0, y = 0;x < 2 && y < 5;++x, y++)
{
    printf ("hi\n");
}
```

#### 1.2.3do…..while语句

**循环至少执行一次，使用的场景有限，所以不是经常使用。**

```c
//do...while写法
do 
    循环语句;
while(表达式)；
```

```c
int main()
{
    int i = 0;
    do
    {
        i++;
        printf ("%d\n",i);
        if(i == 11)
        {
            break;
        }
    }
    while(i < 10);
    return 0;
}
//打印1-10
```

#### 1.2.4goto语句

**goto语句是直接跳转到标记的地方，适用于多个嵌套的循环或条件语句从中跳出**

```c
for (...)
    for(...)
    {
        for(...)
        {
            if(...)
                goto error;
        }
    }
	...
 error://goto直接跳到这里
	if(...)
```



## 2.函数

### 2.1库函数

库函数就是我们使用的printf，scanf等等

它的作用是帮助我们在进行软件开发时更加方便的使用

strcpy就是一个库函数，他的作用是把俩个字符进行互换

**每个函数都有对应的头文件**

```c
#include <string.h>
int main()
{
    char arr1[10] = { 0 };
    char arr2[] = "hi boy!";

    strcpy(arr1, arr2);//这个函数是把arr2的字符串拷贝到了arr1中
    printf("%s",arr1);//%s是用来输出一个字符串的
    return 0;
}
```

memest是用可以从字符串的第一个字符开始进行替换

```c
int main()
{
	char arr1[] = "hi boy!";//它都是从第一个字符开始替换
	memset(arr1, 'x', 3);//memset可以用来替换字符串中的字符
	printf("%s", arr1);

	return 0;
}
//xxxboy!这是输出结果
```

```c
int main()
{
	char arr1[] = "hi boy!";
	memset(arr1+3, 'x', 3);//arr+3意思是从第三个字符开始进行替换
	printf("%s", arr1);

	return 0;
}
//hi xxx!这是输出的结果
```

### 2.2自定义函数

```c
ret_type fun_name(para1,*)
{
    statement;//语句项
}
ret_type 返回类型
fun_name 函数名
para1函数参数
```

这是函数的基本参数意思

```c
//我们可以用函数写一个求俩个数的最大值
#include<stdio.h>
int get_max(int x, int y);
{
    return (x > y)?(x):(y)//这是三目操作符，也就是如果x>y为真，那么就输出x，如果为假就输出y。
}
int main ()
{
    int num1 = 100;
    int num2 = 200;
    int max = get_max(num1,num2);//只能用num1，num2类型来表示不能直接用100,200来套进里面
    printf("max = %d",max);
    
    return 0;
}
```

```c
//我们可以写一个俩个整型相互交换的内容
//错误写法.C
void Swap1(int x, int y)
{
    int  z = 0; //先给一个数来与他们俩个的其中一个先交换
    	 z = x；
         x = y;
         y = z;
}
int main ()
{
    int num1 =1;
    int num2 =2;
    printf("交换前=%d:%d",num1,num2);
    Swap1(num1,num2);
    printf("交换后=%d:%d",num1,num2);
    
    return 0;
    
}
//交换前=1:2
//交换后=1:2,这是输出的结果，但是跟我们的预期不一样。
//正确写法.c
void Swap2(int *px , int *py)
{
    //这里的num1，num2叫做形参
   	 int z = *px;	//z = num1
        *px = *py;	//x = y
    	*py =z;		//b = a
}
int main ()
{
    int num1 =1;//真是传递给swap的参数叫做实参
    int num2 =2;//num1和num2叫做实参
    printf("交换前=%d:%d",num1,num2);
    Swap1(&num1,&num2);//由于使用的是俩个数的地址，所以我们在这里要取地址才能够把他们的数值进行交换
    printf("交换后=%d:%d",num1,num2);
    
    return 0;
    
}
//当实参传递给形参等等时候，形参是实参的一份临时拷贝
//对形参的修改并不会对实参有影响
//为什么第一个代码不能够实现俩个数字的交换呢，是因为我们在给这个函数输入数值的时候输入的是跟我们实参相同的俩个数值，例如，num1=10，num2=20，我们把这俩个数给函数的时候，函数会生成一个一模一样的数值，但是他们的地址并不一样，也就是数值是相同的，但地址并不同，在函数中这俩个数是交换了，但是实际上是俩个形参交换了，并不是我们俩个实参交换的，所以跟我们的实参并没有关系，所以最后输出结果跟输入结果是一模一样的。
```



### 2.3函数的参数

#### 2.3.1实际参数（实参）

**真实传给函数的参数叫做实参**

**实参可以是:常量，变量，表达式，函数等。**

**无论实参是何种类型的量，在进行参数调用时，他们必须有确定的值，以便把这些值传给形参**

#### 2.3.2形式参数(形参)：

**形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（也就是分配内存单元），所以就叫做形式参数，形式参数调用完之后就自动销毁了，所以形式参数只有在函数中才有效果。**

<a href="https://smms.app/image/gqLh9uPzTfiUBDZ" target="_blank"><img src="https://s2.loli.net/2023/10/16/gqLh9uPzTfiUBDZ.png" ></a>



我们可以看的这里的swap1函数在调用的时候，x，y拥有自己的空间（内存单元），同时拥有了和实参一模一样的内容，所以我们可以简单认为：**形参实例化之后相当于实参的一份临时拷贝**

<a href="https://smms.app/image/aZNEAGLrgw3yDTM" target="_blank"><img src="https://s2.loli.net/2023/10/16/aZNEAGLrgw3yDTM.png" ></a>

### 2.4函数的调用

#### 2.4.1传值调用

传值调用就是把a，b俩个值调给x，y这俩个变量，让他们拥有和a，b一模一样的值，但他们所占的内存单元不同，也就是地址不同。

#### 2.4.2传址调用

**传址调用就是把函数外部创建的变量的内存地址传递给函数参数的一种调用参数的方式，这种调用方式才把函数内外的变量建立起了真正的关系，意思也就是说可以直接操作函数外部的变量**

### 2.5函数的嵌套调用和链式访问

#### 2.5.1 嵌套调用

```c
#include <stidio.h>
void new_line()
{
    printf("hi\n");
}
void three_line()
{
	int i = 1;
    for(i = 0; i < 3;i++)
    {
        new_line;
    }
}

int main ()
{
    three_line();
    return 0;
}
//每个函数的地位都是相同的，可以像上面那样嵌套使用但不能嵌套定义

int Add(int x ,int y)
{
    return x+y;
	int Sub(int x,int y)
    {
        return (x - y);
    }
}
//上面写法就是嵌套定义，这种是不能够执行下去的。
int main ()
{
    return 0;
}
```

#### 2.5.2链式访问

**把一个函数的返回值作为另外一个函数的参数**

```C
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[20] = "hi";
    int ret = strlen(stract(arr,"bit"));
    printf("%d\n",ret);
    return 0;
}

#include <stdio.h>
int main ()
{
    printf("%d",printf("%d",printf("%d",43)))
//这个数值输出结果是4321，原因是最里面的打印的是43，(由于printf函数输出的是字符的数量是字符长度，所以他给第二个pritnf的值就是43的字符长度）然后中间的printf打印的是43这俩个字符的长度也就是2，最左边的printf打印的也是2的字符长度，也就是1，所以这三个printf打印一共出来就是4321.
//这是因为在C语言中，printf函数是顺序执行的，从上到下依次执行。首先,printf("%d",43)将43作为整数输出，然后返回输出的字符数量，即2。然后，这个返回值（2）被作为printf的第二个参数，因此第二个printf将输出字符'2'。最后，这个字符'2'的地址作为参数传递给最外层的printf，所以最外层的printf输出'1'。因此，整个表达式的结果为'4321'。        
    return 0;
}
```

**printf函数输出完所要打印的数值之后，会返回输出的字符数量**

### 2.6函数的声明和定义

#### 2.6.1函数声明

1.函数声明就是告诉编译器有一个函数是什么，参数有什么，返回类型是什么，但是这个函数具体存在不存在，并不是函数声明所能决定的。

2.函数声明一般出现在使用函数之前，必须要求**先声明后使用**

3.函数声明要放在头文件中

#### 2.6.2函数的定义

```c
//函数的定义
int Add(int x ,int y)
{
    return (x+y);
}
```

<a href="https://smms.app/image/wLZHWb5kVEXmOo7" target="_blank"><img src="https://s2.loli.net/2023/10/16/wLZHWb5kVEXmOo7.png" ></a>

<a href="https://smms.app/image/IDMNnSayEzfcRiZ" target="_blank"><img src="https://s2.loli.net/2023/10/16/IDMNnSayEzfcRiZ.png" ></a>

**当这个函数放在一个test.h的文件中，然后使用头文件`#include<test.h>`这样我们就可以使用这个test.h文件中的函数了**

### 2.7函数的递归

#### 2.7.1什么是递归

递归就是一个过程或者函数在其定义或者说明中有直接或者间接调用自身的一种方法，它通常把一个大型复杂的问题层层转化为一个问题与原问题相似的规模较小的问题来求解。

它只需要少量的程序就可以描述出解题过程所需要的多次重复计算，大大减少了程序的代码量**思考方式为：大事化小**

#### 2.7.2递归的必要条件

1）存在限制条件，当满足这个限制条件的时候，递归便不再继续

2）每次递归调用之后越来越接近这个限制条件

```C
#include <stdio.h>
void  print (int n)
{
    if (n >9 )
    {
        print(n/10);
    }
    printf("%d ",n%10);
}
int main ()
{
    int num = 0;     //&d打印的是有符号的整型（有正负数）
    scanf("%u",&num);//&u是打印无符号的整数
    print(num);
    return 0; 
}
```

```c
#include <stdio.h>
int Strlen (const char*str)
{
    if(*str =='0')
        return 0;
    else
        return 1+Strenlen (str + 1);   
}
int main ()
{
    char *P = "abcdef"
        int len = Strlen (p);
    printf ("%d\n",len);
    return 0;
}
```

#### 2.7.3递归与迭代

迭代其实就是循环（while，if）语句

有时候递归可能会更加方便，但也有时候递归不如迭代

当我要求一个斐波那契数的时候，这时候求的值越大，计算机的计算时间越长，导致最后崩溃。

```c
int factorial(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else
    {
        return n *factorial (n-1); 
    }
}
//这是求n的阶乘就比我们用迭代方便
```

```C
int fib (int n)
{
    if (n <= 2)
    {
        return 1;
    }
	else
    {
        return fib(n - 1)+fib(n - 2);
    }
}
//这个递归在求第50个斐波那契数的时候非常消耗时间，而且可能会求不出来，在求第1000的阶乘的时候可能会崩溃
//原因就是这个递归函数在求第50个斐波那契数的时候，一直有许多重复的计算，导致消耗计算机的算力，所以我们要将这个递归的代码修改成迭代的代码，会减少许多的计算量
```

```c
int count  = 0;//这个count是全局变量
int fib (int n)
{
    if(n == 3)
        count ++;
    if(n <= 2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
//用迭代的方式就很简单的解决了这个问题，且速度非常快（不考虑栈溢出的问题）
int Fib(int n)
{
    int a =1;
    int b =1;
    int c =1;
    while(n >=3)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c ;
}
int main()
{
    int n =0;
    scanf("%d\n",&n);
	int ret =Fib(n);
    printf("%d\n",ret);

	return 0;
}
//上面这个代码很好的使用迭代的方法去减少了许多的计算过程，是计算效率大大提高了。
```

---



## 3.数组

### 3.1数组的创建和初始化

#### 3.1.1数组的创建

**数组的类型是int []**

```c
int arr[10]={0};
//这个数组的类型是int [10];
int arr[10] ={0};
printf("%d",sizeof(arr));
printf("%d",sizeof(int [10]));
//他们俩个打印结果都是40
```

```c
type_t arr_name [const_n];
//type_t 是数组的元素类型
//const_n是一个常量表达式，用来指定数组大小
```

  ```C
  //1.C
  int arr1[0];
  //2.C
  int count = 10;
  int arr1[count];//通常[]里面是不能使用变量的，但是C99语法是支持这种写法的
  //3.C
  char arr3[10];
  float arr4[1];
  double arr5[20];
  //这是数组创建类型的方法
  ```

在C99标准之前，数组的大小必须是常量或者常量的表达式。

C99之后，数组的大小可以是变量，为了支持长数组。

#### 3.1.2数组的初始化

 在创建数组的时候我们要给数组一个合理的初始化

```C
int arr1[10] = {1,2,3,4,5};
int arr2[] = {1,2,3,4,5,6};
char arr3[] = {1,'a',2,'b'};
char arr4[] ={'a','b','c'};
char arr5[] ="abcdefg";
```

  ```c
  //如果数组初始化，但给定的初始值没有占满所给的数组的地方，这种就叫不完全初始化
  int arr1[10] = {1,2,3,4};
  //上面这种就是不完全初始化
  int arr2[10] ={1,2,3,4};
  //上面代码储存的数字里面就是：1 2 3 4 0 0 0 0 0 0 
  //这就是不完全初始化
  //如果数组里面储存的是字符串，也是不完全初始化，会与上面代码有什么不同
  int arr3[10] = "abc";
  //这个代码储存的数组就是：a b c \0 0 0 0 0 0 0
  //这样我们的栈区的空间可能就会不被充分利用
  //我们要时刻记得字符串后面还有一个\0
  ```

####  3.1.3一维数组的使用

**[]这是是解引用下标操作符，它其实就是数组访问的操作符。**

```C
int arr[] = {1,2,3,4,5,6,7,8,9};
//打印数组中的元素
printf("%d\n",arr[4]);//打印数组第3个的字符
//求数组中元素的个数
int sz = sizeof(arr)/sizeof(arr[0]);
//打印数组中每个元素的地址
int i = 0；
int sz = sizeof(arr)/sizeof(arr[0]);    
for (i = 0; i< sz; i++)
{
    printf("&arr[%d] = %p\n",i,&arr[1]);
}
```

**1）数组是使用下标来访问的，下标是从0开始的**

**2）数组的大小是可以通过计算得到的**



### 3.1.4一堆数组在内存中的储存

<a href="https://smms.app/image/1TB7rk4DJYjKSdN" target="_blank"><img src="https://s2.loli.net/2023/10/17/1TB7rk4DJYjKSdN.png" ></a>

**数组在内存中是连续储存的，数组的地址是数组中第一个元素的地址**

**数组的地址是从高地址到低地址**

### 3.2二维数组的创建和初始化

#### 3.2.1二维数组的创建

```C
//数组创建
int arr[2][3];
char arr[2][3];
double arr[2][3];
```

#### 3.2.2二维数组的初始化

```C
//数组初始化
int arr1[2][3] = {1,2,3,4,5,6};
int arr2[2][3] = {{1,2,3},{4,5,6}};
int arr3[][4] = {{1,2}，{3,4}};
//二维数组如果初始化，行可以省略，列不能省略。
//下面是错误示范
int arr4[2][] ={{0,1,2},{3,4,5}};//行可以省略，列不能省略
int arr5[2][4] ={{0,1,2},{3,4},{5}};//行规定有俩，但是这里有三，所以也不行
int arr6[][3] ={{0,,2},{},{3,4,5}};//不能空格，这里面俩种都是错误的
```

#### 3.2.3二维数组的使用

**二维数组跟一维数组一样都是通过下标访问**

```C
int main ()
{
    int arr[3][4] ={0};
    int i =1;
    for(i = 0;i<3;i++)
    {
        int j = 0 ;
        for(j = 0;j < 4; j++)
        {
            arr[i][j] = i*4+j;
        }
    }
	for(i = 0;i<3;i++)
    {
        int j = 0;
        for(j = 0;j < 4; j++)
        {
            printf("%d",arr[i][j]);
        }
    }
    return 0;
}
```

```C
int arr1[3][4] = {{1,2},{3,4},,{5,6}};
//下面图片是上面这个数组的监视情况
```

<a href="https://smms.app/image/Uvl6rbsdZ4YEFik" target="_blank"><img src="https://s2.loli.net/2023/10/18/Uvl6rbsdZ4YEFik.png" ></a>



#### 3.2.4二维数组的存储

```C
#include <stdio.h>
int main ()
{
    int arr[3][4] ={1,2,3,4,2,3,4,5,3,4,5,6};
    int i =0;
    for(i =0;i <3;i++)
    {
        int j = 0;
        for(j = 0; j < 4; j++)
        {
            printf(:&arr[%d][%d] = %p\n,i,j,&arr[i][j]);
        }
    }
	return 0;
}
```

<a href="https://smms.app/image/XYHVC2GnaxR9Tzg" target="_blank"><img src="https://s2.loli.net/2023/10/18/XYHVC2GnaxR9Tzg.png" ></a>

这是这个二维数组的存储地址，不难看出，它与一维数组的储存方式是相同的，都是以第一行第一列的元素的地址为数组地址，依次往后增加。

### 3.3数组越界

数组的每个元素的下标都是有范围的，如果一旦超出下标元素的范围，那么就可能会导致出现一些奇怪的数字，如果数组有n个元素，那么最后一个元素的下标就是n-1.但是一旦数组的下标访问越界的话，编译器也不一定会报错，但也不意味着程序的正确的，所以一定要时刻注意数组的越界检查。

**二维数组的行和列也可能存在越界**



### 3.4数组作为函数参数

#### 3.4.1冒泡排序的错误设计

在我们使用数组的时候，总是会将整个数组作为参数传个函数

```C
//错误的使用是求数组的元素个数
#include <stdio.h>
 void bubble_sort(int arr[])
 {
     //地址是应该用来使用指针来接受，所以arr这里看似是数组，但它的本质是指针变量
     int sz =sizeof(arr/sizeof(arr[0]));
     //不能在函数里面直接求数组的元素个数，因为传过来的是数组首元素的地址，也就是第一个元素，如果直接使用的话，结果就是这个数组的首元素与arr[0]（还是这个数组的首元素），就相当于自己除以自己，就是1，并不是我们需要的这个数组的元素个数。
     int i = 0;
     for (i = 0; i <sz - 1;i++)
     {
         //一趟冒泡排序
         int j =0;
         for (j = 0; j<sz-i-1;j++)
         {
             if (arr[j] > arr[j+1])
             {
                 //交换
                 int tmp = arr[j];
                 arr[j] = arr[j+1];
                 arr[j+1] =tmp;
             }
         }
     }
 }

int main()
{
    int arr[] ={9,8,7,6,5,4,3,2,1};
    bubble_sort(arr);//调用冒泡函数
    for(i = 0; i<sizeof(arr)/sizeof(arr[10]);i++)
    {
		printf("%d",arr[i]);
    }
   
    return 0;
}
//这个函数的输出结果并不能为我们排序
```



#### 3.4.2冒泡排序的正确设计

```C
//2.c
void bubble_sort(int arr[],int sz)
{
    int i = 0;
     for (i = 0; i <sz - 1;i++)
     {
         //一趟冒泡排序
         int j =0;
         for (j = 0; j<sz-i-1;j++)
         {
             if (arr[j] > arr[j+1])
             {
                 //交换
                 int tmp = arr[j];
                 arr[j] = arr[j+1];
                 arr[j+1] =tmp;
             }
         }
     }
 }

int main ()
{	
    int j =0;
    int arr[] = {4,3,5,6,7,1,9,8,0};
    int sz =sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    for(j=0;j<sz;j++)
    {
        printf("%d",arr[j]);
    }
    return 0;
}
//输出结果为013456789
```

#### 3.4.3数组名是什么

**数组名本质上是：数组首元素的地址**

<a href="https://smms.app/image/Dfr3WiOqvGRL9lV" target="_blank"><img src="https://s2.loli.net/2023/10/18/Dfr3WiOqvGRL9lV.png" ></a>

**这里我们可以看出使用数组的区别： **

1）数组名确实能表示**首元素的地址**

2）**sizeof（数组名）**，这里的数组名表示整个数组，计算的整个数组的大小，单位是字节

3）**&数组名**，这里的数组名表示整个数组，取出的是整个数组的地址



从上面的图片可以看出，&arr+1是整个数组加一，也就是跳过这个数组，而arr+1是跳过首元素，arr[0]+1也是跳过首元素。

**二维数组的数组名也是首元素的地址，但第一行是一个地址，而不是第一行第一列的那个元素的地址是首元素的地址，而是第一行的所有元素的地址**

如果我们像上面那样给二维数组加一，那么它跳过的是第一行，从第二行开始

`	sizeof(arr)/sizeof(arr[0]);`这个是求几行

`	sizeof(arr[0])/sizeof(arr[0][0]);`这个是求几列





## 4.操作符

### 4.1算术操作符

```c
  +   -   *   /   %
```

1)除了%操作符之外，其他几个操作符都可以用于整数和浮点型

2)对于/ 操作符如果俩个操作数都为整数，执行整数除法，而只要有浮点数执行就是浮点数除法。

3)%操作符的俩个操作数必须为整数。返回的是整除之后的余数。

 ```c
 int a = 7 % 2;// 结果是1 因为7除2，商3余1，这个1就是他的模
 int b = 7 / 2;// 结果是3 它取的是商
 printf("%d\n",a);//1
 printf("%d\n",b);//3
 ```

**% 取模操作符的俩端必须是整数**



### 4.2位移操作符

```c
<<   //左移操作符
>>   //右移操作符
//注： 位移操作符的操作数只能是整数。    
```



<a href="https://sm.ms/image/kswLWJSMeE3qjrG" target="_blank"><img src="https://s2.loli.net/2023/10/21/kswLWJSMeE3qjrG.png" ></a>

 

#### 4.2.1左移操作符

**规则：左边抛弃,右边补零**

<a href="https://sm.ms/image/NgR3JTLopfqXC9B" target="_blank"><img src="https://s2.loli.net/2023/10/21/NgR3JTLopfqXC9B.png" ></a>

**整数左移\*2，右移/2**

```c
int main()
{
		int a = 7;
		int b = -7;
	
		printf("%d ", a << 1);//14
		printf("%d ", a >> 1);//3
		printf("%d ", b << 1);//-14
		printf("%d ", b >> 1);//-4
		return 0;
}
```

#### 4.2.2右移操作符

右移分俩种：

1）逻辑位移（不常见）

左边用0补充，右边丢弃

2）算术位移（比较常见）

左边用原该值补充，右边丢弃

**注：**

**对于位移运算符，不要移动负数为位，这个是标准为定义的**

```c
int num = 10 ;
num >> -1//error.
```

<a href="https://sm.ms/image/HEJYSOQ46ZpIcMG" target="_blank"><img src="https://s2.loli.net/2023/10/21/HEJYSOQ46ZpIcMG.png" ></a>



### 4.3位操作符

```c
&  //按位与
|  //按位或
^  //按位异或
//他们的操作数必须是整数。    
```

```C
int main ()
{
	int a =  3 ;
    int b = -5 ;
    int c = a & b;
    //0x00011   3的补码
    //1x00101   -5的原码
    //1x11010   -5的补码
    //0x00011    3的补码
    //0x00011  3和-5的（按位与） 
}
```

1. 按位与（&）：这个运算符会将两个数字进行按位与运算。例如，如果两个相应的二进制位都为1，则该位的结果值为1，否则为0。
2. 按位或（|）：这个运算符会将两个数字进行按位或运算。例如，如果两个相应的二进制位中至少有一个为1，则该位的结果值为1，否则为0。
3. 按位异或（^）：这个运算符会将两个数字进行按位异或运算。例如，如果两个相应的二进制位是不同的，则该位的结果值为1，否则为0。

<a href="https://sm.ms/image/Nh3iPdotkE9XZvp" target="_blank"><img src="https://s2.loli.net/2023/10/21/Nh3iPdotkE9XZvp.png" ></a>

<a href="https://sm.ms/image/DbPOYg5zHC7w6Q4" target="_blank"><img src="https://s2.loli.net/2023/10/21/DbPOYg5zHC7w6Q4.png" ></a>

<a href="https://sm.ms/image/WTMjFhI9PxAe8BJ" target="_blank"><img src="https://s2.loli.net/2023/10/21/WTMjFhI9PxAe8BJ.png" ></a>

<a href="https://sm.ms/image/CDgZrN9lTb8w6V4" target="_blank"><img src="https://s2.loli.net/2023/10/21/CDgZrN9lTb8w6V4.png" ></a>





### 4.4单目操作符

#### 4.4.1单目操作符的介绍

```c
!    		逻辑反操作符
-    		负值
+    		正值
&	 		取地址
sizeof    	操作数的类型长度（以字节为单位）
~			对一个数的二进制按位取反
--			前置，后置——
++			前置，后置++
*			间接访问操作符(解引用操作符)
(类型) 	   强制转换类型    
```

```C
    int a = 1
    int b = a++ //后置++，先使用，再++，也就是先让 b = a，然后再让 a+1
    int b = ++a //同理可得，先++，后使用。
    int b = a-- //后置--，先使用，后--
    int b = --a //同理可得。    
```

```c
int main()
{
	int x = 5;
	printf("%d\n",x++* 3);//先使用后加加，也就是先进行5*3=15，在进行x+1=6,
	printf("%d\n", x);
	return 0;
}
//输出结果一个是15一个是6,
```



#### 4.4.2数组和sizeof

```c
int main ()
{
	int a = 10 ;
	int n = sizeof(a);
	int i = sizeof(int);//也可以计算int类型的大小，或者是char类型的大小
	int j = sizeof a ;//这里我们可以看出sizeof是一个操作符，而不是函数，因为函数后面的()不能省略
    int m = sizeof(char);
		printf("%d\n",a);//10
    	printf("%d\n",n);//4
    	printf("%d\n",i);//4
    	printf("%d\n",j);//4
   		printf("%d\n",m);//1
    //这里我们可以知道char类型的所占内存空间的大小是1，而int是4
    return 0;
} 
```

```c
void text1 (int arr[])
{
    printf("%d\n",sizeof(arr));//4
}
void test2 (char ch[])
{
	printf("%d\n",ch[]);//4
    //因为数组传参是传的第一个元素的地址(也就是指针)，一个指针占内存中的大小是4个字节(不管是什么类型的指针，他们的地址的内存大小都是4个字，并且是根据当前电脑的环境决定，x86和x64的不同，4或8个字节)
}
int main ()
{

    int arr[10] = {0};
    char ch[10] = {0};
    printf("%d\n",sizeof(arr));//40
    printf("%d\n",sizeof(ch));//10
    test1(arr);
    test2(ch);
    
	return 0;
}
```

```c
//sizeof和strlen的区别
int main ()
{
	if(3 == 5)
    {
        ....
    }
	
    if("abc" == "abcdef")//这样写是比较俩个字符串的首字符的地址
    {
        ...
    }
}
//如果我们想用比较俩个字符串是否相等，我们应该使用strcmp这个库函数来进行比较.
```



### 4.5关系操作符

```c
>
>=
<
<=
!=   用于测试“不相等”
==   用于测试“相等” 
```

**注意：在编程过程中我们要注意==和=的区分和编写**

### 4.6逻辑操作符

```c
&&		逻辑与 
    //逻辑与  （并且）  例如：a&&b  如果a和b中有一个是（0）假的，那么全为假，如果俩个都是真的，那么全为（1）真。
||    	逻辑或
    //逻辑或（或者）例如：a||b 如果a和b中有一个是真的，那么全为真。

// |与||的区别
   1 | 2 ---->3
   1 || 2 --->1 
```

**使用逻辑操作符的过程的使用方法**

```c
int main ()
{
	int i = 0, a = 0, b = 2, c = 3, d =4;
    //&&左边为假，右边就不计算了
    //||左边为真，右边就不计算了
    
    
    i = a++ && ++b && d++;//a++先使用，后++，由于a先使用且为0，所以&&左边为假，后面的++b和d++就不需要计算了
   //i = a++ || ++b || d++;//由于++b为3，所以||右边为真，所以d++就不计算了
        
    printf("a=%d, b=%d, c=%d, d=%d ",a,b,c,d); // 第一个的输出为1234
    printf("a=%d, b=%d, c=%d, d=%d ",a,b,c,d); // 第二个的输出为1334

	return 0;
}
```



### 4.7条件操作符

**（也叫三目操作符）**

```c
exp1 ? exp2 : exp 3

//例如
    if(a > 5)
        b =  3;
	else
        b = -3;
//就等于
a > 5 ? b = 3 : b = -3;
//或者
b = (a > 5 ? 3 : -3);
```

 

### 4.8逗号表达式

```c
exp1 , exp2 ,exp3, exp4......expN
```

```c
int main()
{
    	int a=10;
        int b= 20;
    	int c = 0;
      		 //  c=8   28    5
    	int d =(c=a-2,a=b+c,c-3);
    	printf("%d",d);
    //输出结果只有5
    //逗号表达式的特点是：从左往右依次计算，整个表达式的结果是最后一个表达式的结果。
    return 0;
}
```

<a href="https://sm.ms/image/dF5Ex7thPrk62w3" target="_blank"><img src="https://s2.loli.net/2023/10/19/dF5Ex7thPrk62w3.png" ></a>



### 4.9下标引用,函数调用和成员结构

#### 4.9.1[]下标应用操作符

操作数：一个数组名+一个索引值

```c
	int arr[10];//创建数组
	arr[9] = 10;//将arr数组中的第10个数赋值为10
	//[]的俩个操作数是arr和9
	9[arr] = 10 //这个与上面的代码是一样的，可以进行互换，但创建数组时候不能互换
```

<a href="https://sm.ms/image/z2oeHgSiuKaA8f7" target="_blank"><img src="https://s2.loli.net/2023/10/23/z2oeHgSiuKaA8f7.png" ></a>



#### 4.9.2()函数调用操作符

```c
int Add (int x, int y)
{
	return (x + y);
}
int main ()
{
	int a =10;
    int b =20;
    //函数调用
    int c =Add(a,b);
	//()就是函数调用操作符，操作数是：Add，a，b
    //函数最低一个操作数也就是Add
	return 0;
}
```



#### 4.9.3访问成员结构

```c
.		结构体.成员名
->		结构体指针->成员名    
```

```c
struct Stu
{
    char name[10];
    int age ;
    char sex[5];
    double score;  
};//这里必须带上；

void set_stu(struct Stu* ps)
{
	strcpy((*ps).name,"Dicker");
	(*ps).age = 20;
    (*ps).score = 100.0;
    
    strcpy(ps->name,"Dicker");
    ps->age = 20;
    ps->score =100.0
        
    //(*ps).name就等于ps->name    
}

void print_stu (struct Stu ss)
{
	printf("%s %d %lf\n",ss.name , ss.age , ss.score);
}

int main ()
{
	struct Stu s ={0};
    set_stu(&s);//把数组s的地址传给这个函数，避免形参修改而实参不修改
    print_stu(s);//打印出数组s的全部信息
    
    return 0;
}
```

**(*ps).name就等于ps->name  **

**结构体 -> 成员**

**结构体对象.成员**



### 4.10表达式求值

#### 4.10.1隐式类型转换

C语言中的整型算术运算总是是至少以缺少整型类型的精度来进行的。

为了获得这个精度，表达式中的字符和短整型操作数在使用之前被转换为普通整型，这种转换被称为**整型提升**

**整型提升的意义：**

> 表达式的整型运算要在CPU的相应运算器件内执行，CPU内整型运算器(ALU)的操作数的字节长度 一般就是int的字节长度，同时也是CPU的通用寄存器的长度。 因此，即使两个char类型的相加，在CPU执行时实际上也要先转换为CPU内整型操作数的标准长 度。 通用CPU（general-purpose CPU）是难以直接实现两个8比特字节直接相加运算（虽然机器指令 中可能有这种字节相加指令）。所以，表达式中各种长度可能小于int长度的整型值，都必须先转 换为int或unsigned int，然后才能送入CPU去执行运算。

```c
//例1
char a,b,c;
    ...
 a = b + c ;
//在这里abc都被定义为字符类型而不是整型，当它们需要加减时候，就需要先对其进行截断
```

<a href="https://sm.ms/image/ubBalqYdN2zegAi" target="_blank"><img src="https://s2.loli.net/2023/10/23/ubBalqYdN2zegAi.png" ></a>

```c
//负数的整型提升
char ch1 = -1；
//变量c1的二进制位(补码)中只有8个比特位
11111111//这个就是-1截断之后的二进制
//因为char为有符号的char 所以整型提升的时候，高位补充符号位，既1
11111111111111111111111111111111
//这个为-1的补码 

//正数的整型提升
char ch2 = 1；
//变量c1的二进制位(补码)中只有8个比特位
00000001
//因为char为有符号的char 所以整型提升的时候，高位补充符号位，既0
00000000000000000000000000000001
//这个为1的补码   
    
//无符号的整型提升，高位补0    
```

```c
int main ()
{
	char a = 0xb6;
    short b = 0xb600;
    int c =	0xb6000000;
      if(a==0xb6)
          printf("a");//a是char类型的，需要进行整型提升，所以a会变成负数，跟0xb6不相等
      if(b==0xb600)
          printf("b");//b是short类型的，也需要整型提升，所以b也会变成负数
	  if (c==0xb6000000)
          printf("c");//由于c是整型，不需要进行整型提升，所以c不变，跟0xb6000000相等，所以最后输出结果只有c
    return 0;
}
```

```c
//例2
int main ()
{
	char c = 1;
    printf("%u\n",sizeof(c));
    printf("%u\n",sizeof(+c));
    printf("%u\n",sizeof(-c));
   	
    return 0;
}
//打印的结果是1 4 4
//原因是c只要参与表达式运算就会发生整型提升，表达式+C就会发生提升，所以sizeof（+C）是4个字节，而-c也相同一样会，但是sizeof(c)并不会发生整型的提升，因为它没有参与表达式的运算，所以就是1个字节，也就是8个比特位
```



#### 4.10.2算术转换

如果某个操作符的各个操作数属于不同的类型，那么除非其中的一个操作数的转换为另一个操作的类型就无法进行。下面的层次体系为**寻常算术转换**

```c
long double
double
float
unsigned long int
long int 
unsigned int
int     
//某个操作数的类型在这个列表中的排名较低，就需要首先转换为另一个操作数的类型后，执行运算
 float f = 3.14;
//隐式转换，可能会导致精度丢失
 int num =f;   
```



#### 4.10.3操作符的属性

复杂表达式的求值有三个影响的因素：

​	1）操作符的优先级

​	2）操作符的结合性

​	3）是否控制求值顺序

**俩个相邻的操作符先执行哪个取决于它们的优先级，如果两者的优先级相同，就取决于他们的结合性**

<a href="https://sm.ms/image/4odNSb71eRqOAX2" target="_blank"><img src="https://s2.loli.net/2023/10/23/4odNSb71eRqOAX2.png" ></a>

<a href="https://sm.ms/image/CqzeXBL5IWNw9id" target="_blank"><img src="https://s2.loli.net/2023/10/23/CqzeXBL5IWNw9id.png" ></a>

```c
//表达式1
a*b + c*d + e*f
//这是一个问题表达式，由于*的优先级比+高，所以只能保证，*的计算比+的早，但不能决定第三个*比第一个+执行的早
//表达式2
 c + --c
//这同样也是一个问题表达式，只能决定自减的运算在+的运算前面，没办法直到是先c再--c，还是先--c在c
```

**所以我们在编写代码的时候人如果不能通过操作符的唯一的计算路径，那么这个表达式就是存在问题**



---

## 5.指针

### 5.1指针是什么

1）指针是内存中一个最小单元的编号，也就是地址

2）平时口语所说的指针，通常指的是指针变量，是用来存放内存地址的变量

**总结：指针就是地址，口语中说的指针通常指的是指针变量**

<a href="https://smms.app/image/zVq2IPETOmjBAt5" target="_blank"><img src="https://s2.loli.net/2023/10/16/zVq2IPETOmjBAt5.png" ></a>

**指针变量就是存放变量的内存地址的一个变量，他是存放地址的，而指针就是地址**

```c
int main ()
{
  int a = 10;//先在内存中开辟出一片地址
  int* p =&a;//取出a的地址，使用的是&操作符，又因为a变量占用4个字节的空间，这里是a的4个字节的第一个字节的地址存放在p变量中，p就是一个指针变量
  
  return 0;
}
```

**结：**

1）指针是用来存放地址的，地址是唯一标识一块地址空间的

2）指针的大小在32位平台是4个字节，在64位平台是8个字节



### 5.2指针和指针类型

指针也有类型，它的类型对应的是这个指针存放的是什么类型的地址

```c
char *pc =NULL;
int *pi =NULL;
short *ps =NULL;
long *pl =NULL;
float *pf =NULL;
double *pd =NULL;
//指针的定义方式为 type + *
//sizeof 返回的值的类型是无符号整型 unsigned int
```

`char*`类型存放的指针是为了存放char类型变量的地址。

`short*`类型的指针是为了存放short类型变量的地址

`int*`类型的指针是为了存放int类型变量的指针



#### 5.2.1指针+-整数

```c
int main()
{
	int n = 10;
	char*pc =(char*)&n;
  int *pi =&n;
  
  printf("%p\n",&n);	//000000A2F2CFF644
  printf("%p\n",pc);	//000000A2F2CFF644
  printf("%p\n",pc+1);//000000A2F2CFF645	//从这里char类型+1加了1个字节
  printf("%p\n",pi);	//000000A2F2CFF644
  printf("%p\n",pi+1);//000000A2F2CFF648	//这里的int类型+1加了4个字节

	return 0;
}
```

**指针类型决定了指针向前或者向后走一步有多大（距离）。**

<a href="https://sm.ms/image/ekNrpBwTuXqVi6d" target="_blank"><img src="https://s2.loli.net/2023/10/23/ekNrpBwTuXqVi6d.png" ></a>

#### 5.2.1指针的解引用

```c
int main ()
{
  int n = 0x11223344;
  char*pc= (char*)&a;	//把int类型的指针地址，强制转换成char类型的地址
  *pc =0;
  
  //指针类型决定了指针在被解引用的时候访问的几个字节
  //如果int*的指针，解引用访问4个字节
  //如果是char*的指针，解引用访问1个字节
  //其他类型也是如此
  return 0;
}
```

**指针的类型决定了，对指针解引用的时候有多大的权限（能操作几个字节）**

比如：char*的指针解引用就只能访问一个字节，而int\*的指针解引用是就能访问4个字节

<a href="https://sm.ms/image/9xL8myArReEPV1J" target="_blank"><img src="https://s2.loli.net/2023/10/23/9xL8myArReEPV1J.png" ></a>

**存放地址的内存单元是4或者8个字节，而类型访问1个或4个字节等等，它们俩并没有联系**



### 5.3野指针

#### 5.3.1野指针的成因

1）指针未初始化

```c
int main ()
{
	int *p;//未初始化，导致p存的地址为止，为随机值
  *p = 10
	return 0;
}
```

1）指针越界访问

```c
int main ()
{
		int arr[10] = {0};
  	int *p = arr;//使p中存的地址为arr数组的地址
  	int i =0;
  	for(i=0;i<=11; i++)
    {
      //当野指针指向的范围超出arr的范围的时候，p就是野指针
      *(p++) = i;
    }
	return 0;
}
```

3）指针指向的空间释放

```c
int test()
{
  int a =10;//这里的a是一个临时变量，当这个程序结束后，就会自动销毁，但是这个a的地址并不会销毁，只要这个地址没有被用，他就一直是10，如果被使用就可能会被改成别的数值，所以下面的P存的是这个地址，但是当它想再次使用的时候可能就会变成别的数值，这就造成了非法访问。
  return &a;
}
int main ()
{
  int*p = test();
  printf("hi\n");//这里打印一个数，会使这个*p解引用的值会变得不一样  
  if(p != Null)
  {
    printf("%d\n",*p);
  }
  
  return 0;
}
```

```c
//NULL=0
int* p2 = Null;
*P2 = 10;//这里p2给的是为NULL，也就是0，这个0也没有地址，所以如果要给这个p2赋值为10的话，也就无法赋值，因为没有地址去存放这个10
```



#### 5.3.2如何规避野指针

1）指针一定要初始化

2）小心指针越界

3）指针指向空间释放既及时去放置NULL

4）避免返回局部变量的地址

5）指针使用之前检查有效性



### 5.4指针运算

#### 5.4.1指针+-整数

```c
#define N_VALUES 5
float values[N_VALUES];
float *vp;
for(vp = &values[0];vp < &values[N_VALUES];)
```

<a href="https://sm.ms/image/xsM5bvwHASiNDpE" target="_blank"><img src="https://s2.loli.net/2023/10/24/xsM5bvwHASiNDpE.png" ></a>

#### 5.4.2指针-指针

```c
int my_strlen(char *s)
{
 char* start =str;
  while(*str != '\0')
  {
    str++;
  }
  return (str - start);
}
int main ()
{
	int len =my_strlen("abcedf");
  printf("%d\n",len);
  
	return 0;
}
```



#### 5.4.3指针关系的运算

```c
for(vp =&values[N_VALUES];vp > &values[0];)
{
  *--vp = 0;
}
```

```c
for(vp =&values[N_VALUES-1];vp >= &values[0];vp--)
{
  *vp = 0;
}
//我们应该避免这种写，因为标准规定它并不可能都实现
```



**标准规定：**

> 允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与 指向第一个元素之前的那个内存位置的指针进行比较。



<a href="https://sm.ms/image/W6B3YrAswh2KuFm" target="_blank"><img src="https://s2.loli.net/2023/10/24/W6B3YrAswh2KuFm.png" ></a>

<a href="https://sm.ms/image/H6s2qYvk5PST8wZ" target="_blank"><img src="https://s2.loli.net/2023/10/24/H6s2qYvk5PST8wZ.png" ></a>

### 5.5指针和数组

```c
//例子
int main ()
{
  int arr[10] = {1,2,3,4,5,6,7,8,9,0};
  printf("%p\n",arr);			//012FFB90
  printf("%p\n",&arr[0]); //012FFB90
  
  return 0;
}
```

**结论：数组名表示的手元素的地址（一般情况下）**

```c
int arr[10] = {1,2,3,4,5,6,7,8,9,0};
int *p = arr;//p存放的是首元素的地址也就是arr的地址
```

```c
int main ()
{
 	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
  int *p= arr;	//存放首元素地址
  int sz = sizeof(arr)/sizeof(arr[0]);
  for(i=0;i < sz; i++)
  {
    
    printf("&arr[%d] = %p <===> p+%d=%p\n",i,&arr[i],i,p+i);
  }
  
  return 0;
}
```

<a href="https://sm.ms/image/jQCJV8kUanuhFqx" target="_blank"><img src="https://s2.loli.net/2023/10/24/jQCJV8kUanuhFqx.png" ></a>

从这里可以看出p+i其实就相等于arr下标为i的元素的地址

我们也可以通过指针来访问数组。

```c
int main ()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int* p=arr;//指针存放首元素的地址
  int sz =sizeof(arr)/sizeof(arr[0]);
  int i =0;
  for (i = 0;i < sz; i++)
  {
		printf("%d",*(p + i));
  }
  	
  return 0;
}
```



### 5.6二级指针

**指针变量也是变量，只要是变量都有地址，那么这个指针变量的地址存的地方就是二级指针**

**存放指针变量的地址叫做二级指针**

<a href="https://sm.ms/image/8rt9BWlZn4yVGAO" target="_blank"><img src="https://s2.loli.net/2023/10/24/8rt9BWlZn4yVGAO.png" ></a>

```c
int main ()
{
	int a =10;
  int *pa =&a;//pa是一个指针变量，，叫做一级指针变量
  int **ppa =&pa;//ppa是一个二级指针变量，它是用来存放pa这个指针变量的地址
  **ppa = 20;//*ppa访问的是pa
  
  printf("%d\n",a);
  
	return 0;
}
```

**\*二级指针是用来存放一级指针变量的地址的\***



### 5.7指针数组

**指针数组是指针，是存放指针的数组**

```c
int	 arr1[5];//里面存放的都是整型类型
char arr2[6];//里面存放都是字符类型
int *arr3[5];//里面存放的都是整型指针
```



指针数组的应用：

```c
int main ()
{
	int arr1[4] = {1,2,3,4};
  int arr2[4] = {2,3,4,5};
  int arr3[4] = {3,4,5,6};
  
  int * parr[3] ={arr1,arr2,arr3};//存放上面三个数组的地址
  int i=0;
  for(i = 0;i < 3 ; i ++)
  {
    int j =0;
		for(j=0;j<4;j++)
    {
			printf("%d",parr[i][j]);//这里parr[i][j]就相当于arr1[j]或者arr2[j]或者arr3[j],因为前面parr中存放的首元素的地址，所以可以使用[j]来获取某个数组首地址+j的元素（前面的arr1，arr2，arr3存放在parr中，使用parr[i]只是获取到了arr1或者arr2的地址，后面的[j]才是去获取arr1中的某个元素。
    }
    printf("\n");
  }

	return 0;
}
```

<a href="https://smms.app/image/zVq2IPETOmjBAt5" target="_blank"><img src="https://s2.loli.net/2023/10/16/zVq2IPETOmjBAt5.png" ></a>

---

## 6.结构体

### 6.1结构体的声明

#### 6.1.1结构体的声明和类型

> 结构体是一些值的集合，这些值称为成员变量，结构的每个成员可以是不同类型的变量

```c
struct tag
{
  
  member-list
}variable-list;
```

```c
//例
typedef struct Stu
{
  char name[20];
  int age;
  char sex[5];
  char id [20];
  
  
}Stu;//分号不能丢
//stu是全局的结构体变量
```

<a href="https://sm.ms/image/w8Om2iZMT7kgJX5" target="_blank"><img src="https://s2.loli.net/2023/10/24/w8Om2iZMT7kgJX5.png" ></a>

**这个结构体的创建是不占任何内存的**

**结构的成员可以是标量，数组，指针，甚至可以是其他结构体**

```c
//例如一个结构体里面还有一个结构体
struct Peo
{
  char name[20];
  char tele[12];
  char sex[5];
  int height;
};//分号不能丢

struct Stu
{
  struct Peo p;//这个就是结构体里套结构体
  int num;
  float f;
};//分号不能丢

int main ()
{
	struct Peo p1 ={"dicker","112233445566","man",181};
	//这里需要用，隔开每一个成员变量，如果不是数组，就不用”“来表示
  struct St s ={{"Jonh","112233445566","woman"170},90,3.14f};
  //这里的结构体套结构体就需要{}多次使用，来区别开哪个结构体是哪个，剩下就和上面一样
	return 0;
}
```

**浮点数在内存中不能精确保存**

<a href="https://sm.ms/image/TG1u6XkziRfdjVe" target="_blank"><img src="https://s2.loli.net/2023/10/24/TG1u6XkziRfdjVe.png" ></a>



#### 6.1.2结构体变量的定义和初始化

```c
struct Point 
{
 	int x;
  int y;	//声明类型的同时定义变量p1
}p1;
struct Point p2;//定义结构体变量2
//初始化就是定义变量的同时赋值

struct Point p3 ={x , y}

struct Stu
{
  char name [15];
  int age;
};
struct Stu s ={"zhangsan",20};//初始化

struct Node
{
  int data;
  struct Point p;
  struct Node* next;
}n1 ={10, {4,5},NULL};//结构体嵌套初始化

struct Node n2 ={20,{5,6},NULL};//结构体嵌套初始化
```



### 6.2结构体成员的访问和传参

结构体的成员是通过(.)操作符访问的，点的操作数有俩个

```c
struct S s ;
strcpy(s.name,"dicker");//结构体.成员名称
s.age =20;//使用.访问age成员
```

我们应该怎样使用结构体指针去访问变量的成员

```c
struct Stu
{
  char name [20];
  int age;
  
};

void print(struct Stu* ps)
{
  printf("name = %s  age =%d\n",(*ps).name,(*ps).age);
  printf("name = %s  age =%d\n",ps->name,ps->age);
  //第一行代码是用.操作符来访问成员的,会拷贝一份形参
  //第二行代码是通过指针地址来直接访问成员，不会临时拷贝一份文件
}
int main ()
{
  struct Stu s ={"dicker",20}//完全初始化
  struct Sts s2 ={ 0 }//不完全初始化
  printf("&s");//结构体地址传参
  
  return 0;
}
```

```c
struct S
{
  int data[1000];
  int num;
};
struct S s ={{1,2,3,4},1000};
//1下面是结构体传参 结构体变量.成员变量
void print1(struct S s)
{
  printf("%d\n",s.num);
}
//2结构体地址传参  结构体指针->成员变量
void print2(struct S* ps)
{
  printf("%d\n",ps->num);
}

int main()
{
	
  print1(s);//传结构体
  print2(&s);//传地址
  return 0;
}
```

**print2函数更好，因为它不需要再创建一个形参去拷贝实参，很大程度上节省了内存空间**

> 函数传参的时候，参数是需要压栈的。 如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的 下降。

**结构体传参是时候最后传结构体的地址**





---

## 7.调试

### 7.1调试是什么和步骤

> 调试（英语：Debugging / Debug），又称除错，是发现和减少计算机程序或电子仪器设备中程序 错误的一个过程。



### 7.2调试的基本步骤

1. 发现程序错误的存在
2. 隔离和消除等方式对错误进行定位
3. 确定错误的产生的原因
4. 提出纠正错误的解决办法
5. 对程序错误给予修正，并且重新测试

### 7.3Debug和Release的介绍

> Debug 通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程序。 Release 称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优 的，以便用户很好地使用。

```c
int main ()
{
  int i = 0;
  int arr[10] = {0};
  for(i = 0; i<= 12;i++)
  {
    arr[i] = 0;
    printf("hi\n");
  }
  
  return 0;
}
//如果是 debug 模式去编译，程序的结果是死循环。
//如果是 release 模式去编译，程序没有死循环。
```

<a href="https://sm.ms/image/udFK4HT2JAICziZ" target="_blank"><img src="https://s2.loli.net/2023/10/25/udFK4HT2JAICziZ.png" ></a>

### 7.4快捷键的操作

- F5：启动调试，经常用来直接跳到下一个断点处
- F9：创建断点和取消断点,断点的重要作用，可以直接在程序的任意位置设置断点
- F10：逐过程，通常用来处理一个过程，一个过程可以是一次函数的调用，或者是一条语句
- F11：逐语句，通常用来处理一个过程，一个过程可以是一次函数的调用，或者是一条语句
- CTRL+F5：开始执行不调试，如果你想让程序直接运行起来而不调试就可以直接使用



### 7.5调试的时候查看当前程序的信息

![Snipaste_2023-10-25_17-26-48.png](https://s2.loli.net/2023/10/25/F87SLHbDUY9en4r.png)

<a href="https://sm.ms/image/7fEcyKwj2uRVLa5" target="_blank"><img src="https://s2.loli.net/2023/10/25/7fEcyKwj2uRVLa5.png" ></a>

<a href="https://sm.ms/image/2Vtcv6ZyoIeAnFr" target="_blank"><img src="https://s2.loli.net/2023/10/25/2Vtcv6ZyoIeAnFr.png" ></a>

<a href="https://sm.ms/image/EZr3yBAKuq6nTcp" target="_blank"><img src="https://s2.loli.net/2023/10/25/EZr3yBAKuq6nTcp.png" ></a>

<a href="https://sm.ms/image/w84u9TaAiDYJNOG" target="_blank"><img src="https://s2.loli.net/2023/10/25/w84u9TaAiDYJNOG.png" ></a>

<a href="https://sm.ms/image/olNgidGWvrSEZpT" target="_blank"><img src="https://s2.loli.net/2023/10/25/olNgidGWvrSEZpT.png" ></a>





### 7.6如何写成好代码

1. 代码运行正常 
2.  bug很少 
3.  效率高 
4.  可读性高
5.  可维护性高 .
6. 注释清晰 
7. 文档齐全
8. 使用assert 
9. 尽量使用const 
10. 养成良好的编码风格
11.  添加必要的注释 
12. 避免编码的陷阱。



### 7.7const的作用

```c
//1.c
void test1()
{
	int n = 10;
  int m = 20;
  int*p = &n;
  	*p = &n;
  	p = &m;
}

//2.c
void test2()
{
	int n = 10;
  int m = 20;
  const int*p = &n;
  	*p = &n;
  	p = &m;
}

//3.c

void test3()
{
	int n = 10;
  int m = 20;
  int* const p = &n;
  	*p = &n;
  	p = &m;
}
int main ()
{
  test1();
  
  test2();
  
  test3();
}
```

const修饰指针变量的时候： 

> 1. const如果放在*的左边，修饰的是指针指向的内容，保证指针指向的内容不能通过指针来改 变。但是指针变量本身的内容可变。 
> 2. const如果放在*的右边，修饰的是指针变量本身，保证了指针变量的内容不能修改，但是指 针指向的内容，可以通过指针改变。

<a href="https://sm.ms/image/tCJTorxdvVwlH3W" target="_blank"><img src="https://s2.loli.net/2023/10/25/tCJTorxdvVwlH3W.png" ></a>

<a href="https://sm.ms/image/BGlyUXxhVeNE9FP" target="_blank"><img src="https://s2.loli.net/2023/10/25/BGlyUXxhVeNE9FP.png" ></a>



```c
//模拟实现strlen函数
int my_strlen (const char* str)
{
  int count = 0;
  assert(str != NNULL);//如果str为NULL就会警报
  while(*str)
  {
    count++;
    str++;
  }
  return count;
}
int main ()
{
	
  const char* p = "abcdef";
  int len = my_strlen(p);
  printf("len = %d\n",len);
  
	return 0;
}
```



### 7.8编程常见错误

1. 编译型错误：直接看错误信息提示，然后解决问题，或者凭借经验就可以搞定，相对来说比较简单
2. 链接型错误：看错误提示信息，主要代码中找到错误信息，然后定位问题所在，一般是标识符不存在或者拼写错误
3. 运行时错误：借助调试，逐步定位问题，最难搞







---

# 三.进阶

## 3.1数据类型

### 3.1.1数据类型介绍

```c
char 				//字符数据类型			//1byte
short				//短整型						//2byte
int 				//整型						 //4byte
long				//长整型						//4\8byte
long long		//更长的整型				 //8byte		//C99
float				//单精度浮点				 //4byte
double  		//双精度浮点				 //8byte
```



### 3.1.2类型的归类

```c
//整型家族
char
  unsigned char
  signed char
short
  unsigned short[int]
  signed short[int]
int
  unsigned int
  signed int
long
  unsigned long[int]
  signed long [int]
```

<a href="https://sm.ms/image/Ej2tAxZyGN5Rsom" target="_blank"><img src="https://s2.loli.net/2023/10/26/Ej2tAxZyGN5Rsom.png" ></a>

<a href="https://sm.ms/image/KuGpcodwUICnmyz" target="_blank"><img src="https://s2.loli.net/2023/10/26/KuGpcodwUICnmyz.png" ></a>



<a href="https://sm.ms/image/Ck4LSXvEUg751mW" target="_blank"><img src="https://s2.loli.net/2023/10/26/Ck4LSXvEUg751mW.png" ></a>



```c
//浮点家族
float
double
```

<a href="https://sm.ms/image/UEk6dJ8SexfFHMl" target="_blank"><img src="https://s2.loli.net/2023/10/26/UEk6dJ8SexfFHMl.png" ></a>



```c
//构造类型
>数组类型
>结构体类型 struct
>枚举类型 enum
>联合类型 union
```

<a href="https://sm.ms/image/92q3VGNhZDXQs4P" target="_blank"><img src="https://s2.loli.net/2023/10/26/92q3VGNhZDXQs4P.png" ></a>

```c
//指针类型
int *pi;
char*pc;
float*pf;
void*pv;
```

```c
void 表示空类型（无类型）
//通常用于函数的返回型，函数的参数，指针类型  
```

<a href="https://sm.ms/image/Q6lhTxrfzNeApPi" target="_blank"><img src="https://s2.loli.net/2023/10/26/Q6lhTxrfzNeApPi.png" ></a>



### 3.1.3整型在内存中的储存

#### 3.1.3.1原码，反码，补码

```c
int a =10;
//00000000000000000000000000010100-原码
//00000000000000000000000000010100-反码
//00000000000000000000000000010100-补码
//十六进制表示为：0x00 00 00 14
int b = -10；
//10000000000000000000000000001010-原码
//0x80 00 00 0a  
//11111111111111111111111111110101-反码
//0xfffffff5  
//11111111111111111111111111110110-补码
//0xfffffff6  

//整数的二进制有三种表示方式：
//1.正的整数，原码，反码，补码都相同
//2.负的整数，原码，反码，补码是需要计算的
//原码：直接通过正负的形式直接写成二进制序列的是原码
//反码：原码的符号位不变，其他位按位取反就是反码
//补码：反码+1就是补码
//补码+1等于原码
//整数中存放的都是二进制序列（都为补码）  
```

<a href="https://sm.ms/image/cYhGo8d6QAsWw1P" target="_blank"><img src="https://s2.loli.net/2023/10/26/cYhGo8d6QAsWw1P.png" ></a>

<a href="https://sm.ms/image/KPovdcne92a3wk7" target="_blank"><img src="https://s2.loli.net/2023/10/26/KPovdcne92a3wk7.png" ></a>



#### 3.1.3.2大小端

**什么是大小端**

> 大端（存储）模式，**是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址 中；** 
>
> 小端（存储）模式，**是指数据的低位保存在内存的低地址中，而数据的高位,，保存在内存的高地 址中。**

**为什么要有大小端**

> 为什么会有大小端模式之分呢？
>
> 这是因为在计算机系统中，我们是以字节为单位的，每个地址单元 都对应着一个字节一个字节为8 bit。但是在C语言中除了8 bit的char之外，还有16 bit的short型，32 bit的long型（要看具体的编 译器），另外，对于位数大于8位 的处理器，例如16位或者32位的处理器，由于寄存器宽度大于一个字节，那么必然存在着一个如何将多个字节安排的问题。因此就 导致了大端存储模式和小端存储模式。 例如：一个 16bit 的 short 型 x ，在内存中的地址为0x0010 ，x 的值为 0x1122 ，那么 0x11 为 高字节， 0x22 为低字节。对于大端 模式，就将 0x11 放在低地址中，即 0x0010 中， 0x22 放在高地址中，即 0x0011 中。小端模式，刚好相反。我们常用的 X86 结构是 小端模式，而 KEIL C51 则为大端模式。很多的ARMDSP都为小端模式。有些ARM处理器还可以 由硬件来选择是大端模式还是小端模式。

<a href="https://sm.ms/image/qNLtu3sok148bMA" target="_blank"><img src="https://s2.loli.net/2023/10/26/qNLtu3sok148bMA.png" ></a>



- 大端字节序序储存：把一个数据的高位字节的内容放在地地址处，把地位字节序的内容放在高地址处，就是大端字节序储存
- 小端字节序储存：把一个数据的高位字节序的内容放在高地址处，把低位字节序内容放在低地址处，就是小端字节序储存

```c
//通过代码来判定该编译器是大端还是小端
int main ()
{
  int a = 1;
  if(*(char*)&a == 1)//通过强制类型转换，让int*类型转换为char*类型的，这样就只访问俩个字节，来判断访问的是00还是01.
  {
    printf("大端\n");
  }
  else
  {
    printf("小端\n")；
  }
  
  return 0;
}
```



#### 3.1.3.3浮点型在内存中的储存

```c
int main ()
{
	
  int n =9;
  //00000000000000000000000000001001
  //0 00000000000 00000000000000000001001
  //E = -126
  //M= 0.00000000000000000001001
  //+ 0.00000000000000000001001* 2 ^ -126
  //V=(-1)^0 × 0.00000000000000000001001×2^(-126)=1.001×2^(-146)
  //这是int类型，转化为float类型输出，就会改正浮点数输出类型的，所以就无线小，越等于0
  //显然，V是一个很小的接近于0的正数，所以用十进制小数表示就是0.000000。
  float *pfloat =(float*)&n;
  printf("n的值为：%d\n",n);
  printf("pFloat的值为：%f\n",*pFloat);
  
  *pFloat = 9.0;
  //1001.0 9.0的浮点数
  //1.001*2^3
  //S = 0 E = 3 M = 1.001
  //01000001000100000000000000000000
  //0  10000010 001 0000 0000 0000 0000 0000
  //这个32位的二进制数，还原成十进制，正是 1091567616 
  //这是float的类型，但是被转化为整型输出，所以就直接输出这个源码，所以这个数输出就比较大
  printf("n的值为：%d\n",n);
  printf("pFloat的值为：%f\n",*pFloat);
	return 0;
  
}
//一个整型储存在内存中，必须用整型的方式取出，而不能用其他类型取出，浮点数储存就是浮点数取出，不能用整型取出

//n的值为：9
//pFloat的值为：0.000000
//n的值为：1091567616
//pFloat的值为：9.000000
```



1. **储存规则：**

   根据国际标准IEEE（电气和电子工程协会） 754，任意一个二进制浮点数V可以表示成下面的形式：

2. >  (-1)^S * M * 2^E 
   >
   > (-1)^s表示符号位，当s=0，V为正数；当s=1，V为负数。
   >
   >  M表示有效数字，大于等于1，小于2。
   >
   >  2^E表示指数位。
   >
   > 
   >
   > 十进制的5.0，写成二进制是 101.0 ，相当于 1.01×2^2 。 
   >
   > 那么，按照上面V的格式，可以得出s=0，M=1.01，E=2。 
   >
   > 十进制的-5.0，写成二进制是 -101.0 ，相当于 -1.01×2^2 。
   >
   > 那么，s=1，M=1.01，E=2。

   

3. **对于32位的浮点数，最高的1位是符号位s，接着的8位是指数E，剩下的23位为有效数字M。**

   <a href="https://sm.ms/image/5KQWUPckhea743B" target="_blank"><img src="https://s2.loli.net/2023/10/27/5KQWUPckhea743B.png" ></a>

4. **对于64位的浮点数，最高的1位是符号位S，接着的11位是指数E，剩下的52位为有效数字M。**

   <a href="https://sm.ms/image/KXSQbn4eMLGm5uT" target="_blank"><img src="https://s2.loli.net/2023/10/27/KXSQbn4eMLGm5uT.png" ></a>

   <a href="https://sm.ms/image/dUmp1cWV68Lkh9I" target="_blank"><img src="https://s2.loli.net/2023/10/27/dUmp1cWV68Lkh9I.png" ></a>

   

5. **IEEE 754对有效数字M和指数E，还有一些特别规定。** 

6. > 前面说过， 1≤M<2 ，也就是说，M可以写成 1.xxxxxx 的形式，其中xxxxxx表示小数部分。
   >
   > IEEE 754规定，在计算机内部保存M时，默认这个数的第一位总是1，因此可以被舍去，只保存后面的 xxxxxx部分。
   >
   > 比如保存1.01的时 候，只保存01，等到读取的时候，再把第一位的1加上去。
   >
   > 这样做的目的，是节省1位有效数字。
   >
   > 以32位 浮点数为例，留给M只有23位， 将第一位的1舍去以后，等于可以保存24位有效数字。

   **至于指数E，情况就比较复杂。 首先，E为一个无符号整数（unsigned int）**

7. > 这意味着，如果E为8位，它的取值范围为0~255；如果E为11位，它的取值范围为0~2047。但是，我们 知道，科学计数法中的E是可以出 现负数的，所以IEEE 754规定，存入内存时E的真实值必须再加上一个中间数，对于8位的E，这个中间数 是127；对于11位的E，这个中间 数是1023。比如，2^10的E是10，所以保存成32位浮点数时，必须保存成10+127=137，即 10001001。

   **float ->E(真实值）  +127（中间值）  -> 126 - 存储**

   **double ->(真实值）+1023(中间值）  ->1022 -存储**

   

8. **E不全为0或不全为1**

9. > 这时，浮点数就采用下面的规则表示，即指数E的计算值减去127（或1023），得到真实值，再将 有效数字M前加上第一位的1。
   >
   >  比如： 0.5（1/2）的二进制形式为0.1，由于规定正数部分必须为1，即将小数点右移1位，则为 1.0*2^(-1)，其阶码为-1+127=126，表示为 01111110，而尾数1.0去掉整数部分为0，补齐0到23位00000000000000000000000，则其二进 制表示形式为:
   >
   > 0   01111110    00000000000000000000000

   

10. **E全为0**

11. > **这时，浮点数的指数E等于1-127（或者1-1023）即为真实值， 有效数字M不再加上第一位的1，而是还原为0.xxxxxx的小数。这样做是为了表示±0，以及接近于 0的很小的数字。**

    

12. **E全为1**

13. > 这时，如果有效数字M全为0，表示±无穷大（正负取决于符号位s）；





## 3.2指针的进阶

### 3.2.1字符指针

```c
int main ()
{
  char ch = 'w';
  char *pc = &ch;
  *pc = 'w';
  return 0;
}

int main ()
{
  const char * pstr = "hi boy!";
  //把字符串的字符h的地址赋值给了pstr
  //并不是把hiboy!的放到pstr中，是首字符的地址放在pstr中的
  printf("%s\n",pstr);
  return 0;
}
```

```c
int main ()
{
  char str1[] = "hi boy!";
  char str2[] = "hi boy!";
  //数组需要开辟空间，所以这俩个数组是俩个空间，也就是俩个不一样的地址，空间不同，地址也不同
  
  const char *str3 = "hi boy!";
  const char *str4 = "hi boy!";
  //str3和str4的字符串相等，所以这里会自动指向同一个字符串，所以他俩指向的地址都是同一个地址，也就是h字符的地址
  if(str1 == str2)
  {
		printf("str1 == str2\n");
  }
  else
  {
		printf("str1 != str2\n");
  }
  
  if(str3 == str4)
  {
    printf("str3 == str4");
  }
  else
  {
    printf("str3 != str4");
  }
  
  
  return 0;
}
//输出结果
//str1 != str2
//str3 == str4
```

> 这里str3和str4指向的是一个同一个常量字符串。C/C++会把常量字符串存储到单独的一个内存区域，当 几个指针。指向同一个字符串的时候，他们实际会指向同一块内存。但是用相同的常量字符串去初始化 不同的数组的时候就会开辟出不同的内存块。所以str1和str2不同，str3和str4不同。



### 3.2.1指针数组

```c
int  *arr[10];//整型指针的数组
char *arr2[4];//一级字符指针的数组
char **arr3[5];//二级字符指针的数组
```

```c
//指针数组 -- 重点在数组，是用来存放指针的数组

int arr[10];//整型数组 数组中存放的全是int类型的
char ch[5];//字符数组 数组中存放的全是char类型的
int*arr2[6];//存放整型指针的数组 数组中存放都是整型指针 也就是地址
char*arr3[5];//存放字符指针的数组 数组中存放都是字符指针 也是地址
```

```c
int *p1[10];//p1是指针数组

int (*p2)[10];//p2是数组指针
//p2指向数组，该数组是10个元素，每个元素是int类型的
//解释：p2和*结合，说明p是一个指针变量，然后指向的是一个大小为10个整型的数组，所以p2是一个指针，指向一个数组，叫做数组指针
//注意：[]的优先级高于*号的，所以必须加上（）来保证p先和*结合
```



```c
int arr[] = {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8};
int(*P)[10] = &arr
//[]中必须写清楚几个数字，否则会报错  
```



> 在C和C++编程中，数组指针和指针数组是两个非常常见的概念，它们在语法和用途上有一些重要的区别。
>
> 1.数组指针（Array Pointer）：
>
> 数组指针是指向数组的第一个元素的指针。在C和C++中，数组的名字本质上是一个指向数组第一个元素的指针。因此，数组指针通常被用于通过引用整个数组来修改数组中的值，而不是单独修改元素的值。此外，数组指针可以用来查找数组中的特定元素，因为它可以遍历整个数组。
>
> 例如：
>
> ```cpp
> int arr[5] = {1, 2, 3, 4, 5};  
> int *ptr = arr; // ptr是指向arr数组的第一个元素的指针
> ```
>
> 2.指针数组（Pointer Array）：
>
> 指针数组是一个包含指针的数组。每个元素都是一个单独的指针，可以指向不同的内存地址。在C和C++中，你可以创建一个包含多个指针的数组，这些指针可以指向不同的变量或数组。
>
> 例如：
>
> ```cpp
> int *ptr1 = new int(1); // 创建一个指向整数的指针  
> int *ptr2 = new int(2); // 创建另一个指向整数的指针  
> int *array[2] = {ptr1, ptr2}; // 创建一个包含两个指向整数的指针的数组
> ```
>
> 总结：
>
> - 数组指针是一个指向数组第一个元素的指针，通常用于操作整个数组。
> - 指针数组是一个包含多个指针的数组，每个指针可以指向不同的内存地址。



### 3.2.2&数组名和数组名

```C
int main()
{
  int arr [10] = { 0 };
  printf("%p\n",arr);//00000088A38FF9E8
  printf("%p\n",&arr);//00000088A38FF9E8
  
  printf("%p\n",arr+1);//00000088A38FF9EC
  printf("%p\n",&arr+1);//00000088A38FFA10
  
}
//虽然&arr和arr的值是一样的，但是意义不一样，&arr是数组的地址，而不是首元素的地址，尽管值相等，但是意义不同，arr是首元素的地址
//数组的地址+1，跳过整个数组的大小，所以 &arr+1 相对于 &arr 的差值是40
```



### 3.2.3数组指针的使用

```c
void print_arr1(int arr[3][5], int row ,int col)
{
  int i = 0;
  for(i = 0; i < row; i++)
  {
    for(j = 0;j < col; j++)
    {
      printf("%d",arr[i][j]);
    }
    printf("\n");
  }
}
//(*arr)  
void print_arr2(int (*arr)[5],int row ,int col)
  //arr是一个数组指针，指向的是数组有5个元素，类型是int类型
{
	 int i = 0;
  for(i = 0; i < row; i++)
  {
    for(j = 0;j < col; j++)
    {
      printf("%d",arr[i][j]);
      //print("%d ",*(*(p + i)+ j ));
      //这俩个代码相同
    }
    printf("\n");
  }
}

int main ()
{
  int arr[3][5] ={1,2,3,4,5,6,7,8,9,0};
  print_arr1(arr,3,5);
  //这里传参传的是arr也就是首元素的地址
  //但是二维数组的首元素地址就是第一行的地址
  //所以这里传的arr地址相当于第一行的地址，也就是第一行这个一维数组的地址
  //可以用数组指针来接受
  print_arr2(arr,3,5);
  reeturn 0;
}
```

```c
int arr[5];							//arr是整型数组
int *parr1[10];					//parr1是整型指针数组
int (*parr2)[10];				//parr2是数组指针
int (*parr3[10])[5];		//parr3是存放数组指针的数组
```

<a href="https://sm.ms/image/2G5xzXi1KZtdp8f" target="_blank"><img src="https://s2.loli.net/2023/10/27/2G5xzXi1KZtdp8f.png" ></a>

> `int (*parr3[10])[5];`
>
> 这是一个C语言中的指针数组的定义。这个定义表示`parr3`是一个数组，其元素为指向一个大小为5的整型数组的指针。
>
> 我们可以把这个定义分解来看：
>
> - `int (*)[5]`：这是一个指向大小为5的整型数组的指针。
> - `int (*parr3[10])[5]`：这是声明了一个名为`parr3`的数组，该数组的元素类型是`int (*)[5]`，也就是说，数组中的每个元素都是一个指向大小为5的整型数组的指针。



### 3.2.4数组参数，指针参数

#### 3.2.4.1数组传参

**<a href="https://sm.ms/image/tY3z6WcKe97VGNO" target="_blank"><img src="https://s2.loli.net/2023/10/27/tY3z6WcKe97VGNO.png" ></a>**



```c
void test(int arr[])//ok
{}
void test(int arr[10])//ok
{}
void test(int *arr)//ok
{}
void test2(int *arr[20])//ok
{}
void test2(int **arr)//ok
{}
int main()
{
 int arr[10] = {0};
 int *arr2[20] = {0};
 test(arr);
 test2(arr2);
}

```

```c
void test (int **p)
{ 
}
int mian ()
{
	
  char c = 'b';
  char*pc=&c;
  char**ppc=&pc;
  char*arr[10];
  
  test(&pc);
  test(ppc);
  test(arr);
 
  return 0;
}
```









#### 3.2.4.2函数指针

```c
int Add(int x ,int y)
{
  return x + y;
}
int main ()
{
  int arr[5] = {0};//&数组名，取出数组的地址
  int (*P)[5] = &arr;	//数组指针
  
 	printf("%p\n",&Add);
  printf("%p\n",Add);
  
  //&函数名-就是取出函数的地址
  //对于函数来说，&函数名和函数名都是函数地址
  int (*pf)(int ,int ) = &Add;
  
  //pf是一个函数指针，它解引用就是Add的地址，不解引用直接使用就是Add一样的用法  
  //*pf指向的是一个函数，它接受俩个int类型的参数并返回int类型的函数
  
  int ret = (*pf)(2,3);
  int ret =  Add (2,3);
 	int ret =   pf (2,3);
  
  //运算符的优先级使得星号 (*) 的操作顺序比函数调用的操作顺序高。这意味着，*pf(2,3) 会首先解引用pf指向的地址，然后尝试将2和3作为参数传递给该地址，这是非法的
  //不加(）pf先和()进行结合，返回值是5，5没法解引用，所以直接报错
  printf("%d\n",ret);
  return 0;
}
```

> 1. `int (*pf)(int ,int )`：这部分定义了一个函数指针 `pf`。这个函数指针指向一个接受两个 `int` 类型参数并返回 `int` 类型的函数。
> 2. `= &Add`：这行将 `pf` 初始化为 `Add` 函数的地址。这意味着 `pf` 现在指向 `Add` 函数，可以用来间接地调用 `Add` 函数。

```c
(*(void (*)())0 )();
//void (*)()是一个函数指针类型，在这里用作强制类型转换，类似char*,int*
//这个代码是一次函数调用，调用的是0作为地址处的函数
//把0强制转换为：无参，返回类型是void类型的函数地址
//调用0地址这个函数
```

```c
void( * signal ( int ,  void( * ) ( int ) ) )(int);
//首先void(*)(int)是一个函数指针类型，signal是函数名，外部的void(*内部)(int)也是函数指针类型,声明signal函数的第一个参数的类型是int，第二个参数类型是函数指针，该函数指向的函数参数是int，返回类型是void，signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int，返回类型是void。
typedef void(* pf_t )(int);
//把void(*)(int)类型重命名为pf_t
void( * signal ( int ,  void( * ) ( int ) ) )(int);
pf_t signal(int,pf_t);
//这俩个代码相同
```



### 3.2.5函数指针数组

```c
int (*parr1[10])();
//parr1是一个指针，指向数组是10个元素，类型是int类型,是int(*)()类型的函数指针
//函数指针数组的用途也叫：转移表
```



```c
#include <stdio.h>
int add(int a, int b)
{
 return a + b;
}
int sub(int a, int b)
{
 return a - b;
}
int mul(int a, int b)
{
 return a*b;
}
int div(int a, int b)
{
 return a / b;
}
int main()
{
 int x, y;
 int input = 1;
    int ret = 0;
    do
   {
        printf( "*************************\n" );
        printf( " 1:add           2:sub \n" );
        printf( " 3:mul   0.quit  4:div \n" );
        printf( "*************************\n" );
        printf( "请选择：" );
        scanf( "%d", &input);
        switch (input)
       {
        case 1:
              printf( "输入操作数：" );
              scanf( "%d %d", &x, &y);
              ret = add(x, y);
              printf( "ret = %d\n", ret);
              break;
        case 2:
              printf( "输入操作数：" );
              scanf( "%d %d", &x, &y);
              ret = sub(x, y);
              printf( "ret = %d\n", ret);
              break;
        case 3:
              printf( "输入操作数：" );
              scanf( "%d %d", &x, &y);
              ret = mul(x, y);
              printf( "ret = %d\n", ret);
              break;
        case 4:
              printf( "输入操作数：" );
              scanf( "%d %d", &x, &y);
              ret = div(x, y);
              printf( "ret = %d\n", ret);
              break;
        case 0:
                printf("退出程序\n");
 breark;
        default:
              printf( "选择错误\n" );
              break;
       }
 } while (input);
    
    return 0;
}
//可以改写成
void calc (int (*pf)(int, int))
{
		int x = 0;
  	int y = 0;
  	int ret = 0;
  	
  	printf("输入俩个操作数：");
  	scanf("%d %d",&x,&y);
  	ret = pf (x,y);
  	printf("%d\n",ret);
}
.....
  switch(input)
  {
    case 1:
      calc(Add);
      break;
    case 2:
      calec(Sub);
      break:
		case 3:
   	  calec(Mul);
      break:
    case 4:
      calec(Div);
      break:
    case 0:
    	printf("quit\n") ;
      break:
    default:
      printf("error\n");
      break;
  }
//还能改成
int main()
{
		int x = 0;
  	int y = 0;
  	int ret = 0;
  
  //函数指针的数组
  int(*pfArr[](int, int) = {0, Add, Sub, Mul,Div});
  //pfArr是一个函数指针数组，指向的函数是int，int类型的，返回类型是int类型
  
  do
  {
    menu();
    printf("choose:");
    scanf("%d",&input);
    if(input== 0)
    {
      printf("quit\n");
    }
    else if(input >= 1 && input <= 4)
    {
      printf("输入两操作数")；
      scanf("%d %d\n",&x,&y);
      ret = pfArr[input](x,y);
      printf("%d\n",ret);
    }
    else
    {
			printf("选择错误\n");
    }
    
  }while(input);
}
```



### 3.2.6 指向函数指针数组的指针

```c
void test (const char* str )
{
	printf("%s\n",str);
}
int main ()
{
  			void (*pfun)(const char *) =test;//函数指针pfun
  			void (*pfunArr[5])(const char * str);//函数指针的数组pfunArr
 	 			pfunArr[0] = test;//指向函数指针数组pfunArr的指针ppfunArr
 	 			void (*(*ppfunArr)[5])(const char*) = &pfunArr;//指向-函数指针数组-的指针
         
        return 0;
}
```



### 3.2.7回调函数

> 回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个 函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该函数 的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进 行响应。

```c
#include <stdlib.h>
#include <stdio.h>

int int_cmp1(const void* e1,const void *e2)
{
	if(*(int*)e1 > *(int*)e2 )
    return 1;
  else if (*(int*)e1 == *(int*)e2 )
		return 0;
	else
    return -1;
}

int int_cmp2 (const void* p1, const void * p2） 
{
  return (*(int *)p1 - *(int *)p2);
  //qsort函数规定，如果左边大于右边输出一个正数，左右俩边相等输出0，右边大于左边输出负数
}

int main()
{
	int arr[] = { 1,4,5,7,8,2,3,0,6};
  int i =0;
//void*是无具体类型指针，可以接受任意类型的地址，但是它是无具体类型的指针，所以不能解引用，也不能+-操作
//  void qsort (void * base,//排序的起始位置，也就是你要排序的数组什么的
  							//	size_t num,//待排序的数据元素个数
  							//	size_t width,//待排序的元素大小（单位字节，例如int是4个字，char是1个字节）
  							//	int(*cmp)(const * void *e1,const void * e2)//函数指针-指向的是比较函数
                //   );//下面是使用例
  qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(int),int_cmp2);
//arr是排序的起始位置， sizeof(arr)/sizeof(arr[0])是待排序的元素个数，sizeof(int)是待排序的元素大小，int_cmp是我们自己编写的比较函数，指向这个函数的指针。
  for(i =0;i < sizeof(arr)/sizeof(arr[0]);i++)
  {
		printf("%d",arr[i]);
    
  }
  printf("\n");
	return 0;
}
```

```c
//使用回调函数，模拟实习qsort函数
int cmp_stu_by_name (const void * e1,const void * e2)
{
  return strcmp (((struct Stu*)e1)->name,((struct Sty*)e2)->name);
  //将e1，e2强制转换为自己定义的Stu的类型
  //名字比较是根据abcdf的顺序比较，如果第一个字母相同，就比较下一个字母
}
void test1()
{
  //使用qsort来排序结构数据
  struct Stu s[] = {{"dicker",15},{"lisi",31},{"dfsf",22} };
  int sz = sizeof(arr)/sizeof(arr[0]);
  qsort(s,sz,sizeof(s[0]),cmp_stu_by_name);
  //s是起始位置，sz是元素个数，sizeof(s[0])是元素大小，cmp_stu_by_name是函数指针-指向排序名字的那个函数
}
int  main ()
{
	test1();
  return 0;
}

void bubble_sort (void*base,int sz,int width,int (*cmp)(const void*e1,const void*e2))
{
		int i =0;
  	for(i=0; i<sz-1 ; i++)
    {
      int flag =1;
      int i =0;
      for (j=0;i <sz -1 -i; j ++)
      {
				if(cmp((char*)base+j*width,(char* )base+(J+1)*width) > 0)
//当我们不知道会对什么类型的元素且不知道它们的大小时，我们如果要跳过一个元素，就需要用char来定义，char是一个字符，只要我们知道他们的大小，就可以用j*来计算每次跳过一个元素需要的大小
        {
          //进行交换
          Swap((char*)base+j*width,(char* )base+(J+1)*width);
          flag = 0;//这里的flag是用来判断是否跳出语句，如果一次都没有进行交换，flag一直都等于1，就可以直接跳过for循环，然后去输出这个数组，如果交换过一次就会使flag为0，就无法跳出这个循环语句
        }
      }
      if(flag = 1)
      {
				break;
      }
    }
}
```





### 3.2.8指针和数组的理解



```c
//一维数组
int a[] = {1,2,3,4};
printf("%d\n",sizeof(a));//sizeof(数组名)取出的是整个数组，所以大小是16
printf("%d\n",sizeof(a+0));//这里的a不是单独放在sizeof内部的，也没有取地址，所以a就是首元素的地址，a+0还是首元素的地址，大小是4/8个字节
printf("%d\n",sizeof(*a));//*a就是取a数组的首元素的地址，*a就是对首元素的地址进行解引用，也就是找到首元素，大小是4个字节
printf("%d\n",sizeof(a+1));//a+1也就是第二个元素的地址，sizeof(a+1)就是地址大小4/8
printf("%d\n",sizeof(a[1]));//计算的是数组的第二个元素的大小4
printf("%d\n",sizeof(&a));//&a取出的数组的地址，数组的地址，也就是整个地址，4/8
printf("%d\n",sizeof(*&a));//16，&a是数组名的地址，类型是int(*)[4]，是一个数组指针，数组指针解引用就是数组，所以*&a-->a，也就是sizeof(a)
printf("%d\n",sizeof(&a+1));//4/8&a取出的是数组的地址，&a+1是从数组a的地址向后跳过了一个（4个整型元素的）数组大小，&a+1还是地址，是地址它的大小就是4/8字节
printf("%d\n",sizeof(&a[0]));//&a[0]就是取数组a的首元素的地址，地址的大小就是4/8个字节
printf("%d\n",sizeof(&a[0]+1));//相当于&a[1]，也就是地址，大小是4/8字节
```

```c
char arr [] = { 'a', 'b', 'c', 'd','e', 'f'};

printf("%d\n", sizeof(arr));//sizeof(数组名)，取的还是整个数组，所以大小是整个数组的大小也就是6
printf("%d\n", sizeof(arr+0));//这里的arr+0，表示的是首元素的地址，地址的大小是4/8字节
printf("%d\n", sizeof(*arr));//*arr就是arr数组解引用，也就是首元素，大小是1字节
printf("%d\n", sizeof(arr[1]));//1
printf("%d\n", sizeof(&arr));//&arr是数组的地址，地址就是4/8字节
printf("%d\n", sizeof(&arr+1));//&arr+1是数组后面的地址，也4/8字节
printf("%d\n", sizeof(&arr[0]+1));
printf("%d\n", sizeof(arr[0]+1));//()里面计算的是arr[0]也就是数组的第一元素加上一个1,arr[0]需要进行整型提升，转换为int类型于1相加，得出的这个结果是int类型的，输出的也是int类型，int类型都是4个字节。
```

```c
char arr [] = { 'a', 'b', 'c', 'd','e', 'f'};
printf("%d\n", strlen(arr));//因为这里不知道\0在哪里，所以输出的值是随机值
printf("%d\n", strlen(arr+0));//arr+0表示的是首元素地址，首元素的地址变成一个去访问另一个地址，所以值是随机值
printf("%d\n", strlen(*arr));//strlen(’a‘) 也就是strlen(97),97去求字符长度，访问到另一个地址，值也是随机值
printf("%d\n", strlen(arr[1]));//strlen(98)
printf("%d\n", strlen(&arr));//随机值
printf("%d\n", strlen(&arr+1));//随机值-6，跳过一个数组，&arr是数组地址+1就是跳过这个数组
printf("%d\n", strlen(&arr[0]+1));//随机值-1，跳过一个字符
//strlen()的()里面必须放地址，所以如果放数字就会访问这个数字的地址，也就是随机值
```

```c
char arr[] = "abcdef";
printf("%d\n", sizeof(arr));//7，\0也占一个字符
printf("%d\n", sizeof(arr+0));//4/8，arr+0，表示的是首元素地址，地址是4/8字节
printf("%d\n", sizeof(*arr));//*arr就是首元素，首元素就是1字节
printf("%d\n", sizeof(arr[1]));//表示第二个元素
printf("%d\n", sizeof(&arr));//表示地址
printf("%d\n", sizeof(&arr+1));//地址加一还是地址
printf("%d\n", sizeof(&arr[0]+1));//取出arr[0]的地址，然后跳过这个地址，指向的还是一个地址
printf("%d\n", strlen(arr));//6
printf("%d\n", strlen(arr+0));//6
printf("%d\n", strlen(*arr));//err，*arr是首元素，首元素放在这里不合法，报错
printf("%d\n", strlen(arr[1]));//err
printf("%d\n", strlen(&arr));//6，取的是arr的地址
printf("%d\n", strlen(&arr+1));//随机值，跳过arr这个数组，不知道\0在哪，所以大小不确定
printf("%d\n", strlen(&arr[0]+1));//5，跳过第一个元素
```

```c
char *p = "abcdef";
printf("%d\n", sizeof(p));//p是一个地址所以地址大小是4/8字节
printf("%d\n", sizeof(p+1));//p+1是跳过这个地址，指向下一个地址，所以大小还是4/8字节
printf("%d\n", sizeof(*p));//*p是对p进行解引用，求的是p指向的第元素，也就是a的大小，是1
printf("%d\n", sizeof(p[0]));//p[0]=*(p+0)=*p所以大小还是1
printf("%d\n", sizeof(&p));//&p是对p进行取地址，所以本质还是地址，大小还是4/8字节
printf("%d\n", sizeof(&p+1));//&p+1也是一个地址
printf("%d\n", sizeof(&p[0]+1));//也是地址

printf("%d\n", strlen(p));//6,p是地址指向的是a的地址，求得是长度，大小是6
printf("%d\n", strlen(p+1));//跳过第一个字节，指向b，大小是5
printf("%d\n", strlen(*p));//err，*p就等于一个地址的值，这个值是随机的，所以报错
printf("%d\n", strlen(p[0]));//相同
printf("%d\n", strlen(&p));//&p是随机值，取出的是p的地址，随机值
printf("%d\n", strlen(&p+1));//地址+1，随机值（这个随机值跟上面的随机值不想同）
printf("%d\n", strlen(&p[0]+1));//5
```

```c
//二维数组
int a[3][4] = {0};
printf("%d\n",sizeof(a));//48,整个数组的大小
printf("%d\n",sizeof(a[0][0]));//4
printf("%d\n",sizeof(a[0]));//a[0]是第一行这个一维数组的数组名，单独放在sizeof内部，a[0]表示第一个整个这个一维数组，计算的就是第一行的大小
printf("%d\n",sizeof(a[0]+1));//a[0]并没有单独放在sizeof内部，也没有取地址，a[0]表示就是首元素的地址，就是第一行第一个元素的地址，再加一就第一行第二个元素
printf("%d\n",sizeof(*(a[0]+1)));//*（a[0]+1）就是第一行第二个元素，4
printf("%d\n",sizeof(a+1));//a是二维数组地址，么有单独放在sizeof内部，也没取地址，又加一，表示第二行的地址4/8
printf("%d\n",sizeof(*(a+1)));//是对第二行的地址进行解引用，表示第二行，也就是16
printf("%d\n",sizeof(&a[0]+1));//对第一行的数组名进行取地址，拿出的是第一行地址，+1得到第二行地址
printf("%d\n",sizeof(*(&a[0]+1)));//16
printf("%d\n",sizeof(*a));//16
printf("%d\n",sizeof(a[3]));//16 
```



```C
int main()
{
    int a[5] = { 1, 2, 3, 4, 5 };
    int *ptr = (int *)(&a + 1);
    printf( "%d,%d", *(a + 1), *(ptr - 1));//2 , 5
    return 0;
}

struct Test
{
 int Num;
 char *pcName;
 short sDate;
 char cha[2];
 short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
int main()
{
 printf("%p\n", p + 0x1);
  //0x100000+20 = 0x100014
 printf("%p\n", (unsigned long)p + 0x1);
  //0x100000+1=0x100001
 printf("%p\n", (unsigned int*)p + 0x1);
  //0x10000+4 = 0x100004
 return 0;
}
```

```c
int main()
{
    int a[4] = { 1, 2, 3, 4 };
    int *ptr1 = (int *)(&a + 1);
    int *ptr2 = (int *)((int)a + 1);
    printf( "%x,%x", ptr1[-1], *ptr2);
    return 0;
}
```

```c
int main ()
{
  int a[4] = {1, 2, 3, 4};
  int*ptr1 = (int*)(&a + 1);
  int*ptr2 = (int*)((int)a + 1);
  printf("%x %x",ptr1[-1], *ptr2);//ptr1[-1]=*(ptr1 - 1),也就是这个a的地址加4字节
  //a由一个地址强制转换成int类型，也就是变成了数字，+1就是这个地址的数字+1
  return 0;
}
```

<a href="https://sm.ms/image/COYtPnpdDvwFLTe" target="_blank"><img src="https://s2.loli.net/2023/10/31/COYtPnpdDvwFLTe.png" ></a>

```c
int main ()
{
  int a[3][2] = {(0,1),(2,3),(4,5)};//这里是逗号表达式
  //看清楚这里是()而不是{}，所以数组内容为{1,3,5};
  //a[0]是第一行的数组名，a[0]表示首元素的地址既，a[0][0]的地址，
  int*p;
  p=a[0];
  printf("%d",p[0])//*(p+0)
  //1
  return 0;
}
```

```c
int mian ()
{
	int a[5][5];//a属于int(*)[5]类型的
  int(*p)[4];//p属于int(*)[4]类型的
  p = a ;//这俩个变量的类型不相等，但仍可赋值
	printf("%p %d\n",&p[4][2] - &a[4][2],&p[4][2] - &a[4][2]);
	
	return 0;
}
```

<a href="https://sm.ms/image/CUdWMfV1nQuOKTY" target="_blank"><img src="https://s2.loli.net/2023/11/01/CUdWMfV1nQuOKTY.png" ></a>

```c
int main ()
{
	char* a[] = {"work" , "at" , "alibaba"};
  char** pa = a;
  
	pa++;
	printf("%s\n".*pa)
	rerurn 0;
}
```

<a href="https://sm.ms/image/OAT615lXwzExZnH" target="_blank"><img src="https://s2.loli.net/2023/11/01/OAT615lXwzExZnH.png" ></a>

```c
int main()
{
	char*c[] = {"ENTER","NEW","POINT","FIRST"};
  char**cp[] = { c + 3 , c + 2, c + 1, c};
	char*** cpp = cp;
	
  printf("%s\n",**++cpp);
  printf("%s\n",*--* ++cpp + 3);
  printf("%s\n",*cpp[-2] + 3);
  printf("%s\n", cpp[-1][-1] + 1);
  
	return 0;
}
```

<a href="https://sm.ms/image/nKRj7xSrYzOIgZM" target="_blank"><img src="https://s2.loli.net/2023/11/01/nKRj7xSrYzOIgZM.png" ></a>







## 3.3字符函数和字符串函数

#### 3.3.1strlen

```c
size_t strlen ( const char *str );
```

1. 字符串以‘\0’作为结束标志，计算的是‘\0’前面字符的个数，不包含’\0‘
2. 参数指向的字符串必须要以’\0‘结束
3. 注意函数的返回值为size_t，是无符号函数

```c
int main ()
{

  const char* str1 = "abcder";
  const char* str2 = "bbb";
  if(strlen(str2)-strlen(str1)>0)
  {
		printf("str2>str1\n");
  }
  else
  {
		printf("str2<str1");
  }
  
	return 0;
}
//输出结果是str2>str1
//strlen相减输出的是无符号整型，所以-3被转化为非常大的数，所以肯定比str1大

size_t my_strlen (const char * str)
{
  siez_t count = 0;
  assert(str)
    while(*str != '\0')
    {
      count ++;
      str++;
    }
  return count ;
}
```





#### 3.3.2strcpy

```c
char* strcpy (char* destination, const char * source);
```

1. 源字符串必须以’\0‘结束
2. 会将源字符串中的’\0‘拷贝到目标空间
3. 目标空间必须足够大，以确保能存放源字符串
4. 目标空间必须可变

```c
int mian ()
{
	char name1[20] = "xxxxxxxxxxx";
  char name2[20] = "xxxxxxxxxxx";
  strcpy(name1,"dicker");
  strcpy(name2,"dic\0er");//遇到\0就直接不拷贝了,拷贝的是\0之前的字符
  printf("%s\n",name1);//dicker
  printf("%s\n",name2);//dic

	return 0;
}
```

```c
char * my_strcpy (char * dest ,const char * src)
{
  assert(dest && src);//如果dest和src有一个为NULL就会报错
  char * ret =dest;
  while (*dest ++ = *src ++)
    ;
  
  return ret;
}
char * my_strcpy(char* str2, const char* str1)
{
	//assert(str2);报错 
	//assert(str1);报错
  //assert(str2 && str2)
	
	char* ret = *str2;
	//用来保存起始地址，最后返回的是地址，能更好的模拟实现strcmp的函数功能
	
	while (*str1 != '\0')
	//while(*str2++ = *str1++)这种更简洁
	
  {
		*str2 = *str1;
		*str2++;
		*str1++;
	}
	
	*str2 = *str1;
	//拷贝\0
	
  return ret;
	//返回起始地址
}


int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	//char name [3] = "";程序会崩溃
  //char* p ="abcdef";常量字符串不能更改
	my_strcpy(arr2, arr1);
	printf("%s", arr2);
	return 0;
}
```



#### 3.3.3strcat

```c
char * strcat (char * destination, const char* source);
//追加字符，就是给一个字符串追加上另一个字符串
```

1. 源字符必须以‘\0’结束
2. 目标空间足够大
3. 目标空间必须可以更改
4. 字符串不能自己追加自己（就是自己给自己追加字符）

```c
char* my_strcat (char* dest,const char* src)
{
	
  char* ret =dest;
	assert(dest && src);
	//先找到'\0'
  while(*dest != '\0')
  {
		dest ++;
  }
	//再进行拷贝
  while(*dest++=*src++)
  {
		;
  }
	return  ret;
  
}
int mian ()
{
  char arr1[20] = "hello ";
  my_strcat(arr1,"world");
  printf("%s\n,"arr1);
  
}
//hello world
```

#### 3.3.4strcmp

```c
int strcmp (const char* str1 ,const char* str2);
```

1. 第一个字符串大于第二个字符串，则返回大于0的数字

2. 第一个字符串等于第二个字符串，则返回0,

3. 第一个字符串小于第二个字符串，则返回小于0的数字

   **字符的每个比较是比较的字符的ASCII码值哪个大**

```c
int mian ()
{
  char arr1[20] = "dicker";
  char arr2[] = "dickers";
  //比较俩个字符串是否相等
  //arr1和arr2是数组名，数组名是数组首元素的地址
  if(arr1 == arr2)
  {
		printf("==\n");
  }
  else
  {
		printf("!=\n");
  }
  
  return 0;
}
//这里输出的虽然是!=,但是当这俩个数组相同的时候，也输出!=，因为这是俩个字符的首元素地址在比较，而不是在比较俩个字符串的内容，他们俩个的地址肯定不相等，所以一直都是不相等
```

```c
int my_strcmp (const char * str1,const char* str2)
{
  assert(str1 && str2);
  while(*str1 == *str2)
  {
    if(*str1 == '\0')
      return 0;//输出0表示相等
  
    str1++;  
    str2++;
  }
  if(*str1 > *str2)
    return 1;
  else
    return -1;
 //return (*str1 - *str2);
  //直接输出相减的ASCII值也可以判断哪个字符大
}
int main ()
{
  char arr1[10] = 'abcd';
  char arr2[10] = 'abdd';
  //结果是arr2大，d的ASCII码值大于c的，所以如果长度相等，也会arr2大
  int ret = my_strcmp(arr1,arr2);
  //int ret = strcmp (arr1,arr2);
  if(ret < 0)
    printf("<\n");
  else if (ret == 0)
    printf("==\n");
  else 
    printf (">\n");
  return 0;
}
```



#### 3.3.5strncpy

```c
char * strncpy ( char * destination, const char * source ,size_t num);
```

1. 拷贝num个字符从源字符串到目标空间
2. 如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个

```c
#include <string.h>

int main ()
{
	char arr1[20] = "abcdef";
	char arr2[] = "bit";
  strncpy(arr1,arr2,3);
  
  printf("%s\n",arr1);
  
	return 0;
}
```





#### 3.3.6strncat

```c
char* strncat (char* destnation,const char* source,size_t num);
```

<a href="https://sm.ms/image/RDBNb3FfEvmwOqe" target="_blank"><img src="https://s2.loli.net/2023/11/02/RDBNb3FfEvmwOqe.png" ></a>

```c
int main ()
{
  char str1[20];
  char str2[20];
  strcpy(str1,"to be ");
  strcpy(str2,"or not to be");
  strncat(str1,str2,6);
  puts(str1);
  return 0;
}
//to be or not 
//追加时会自动加\0
```





#### 3.3.7strcmp

```c
int strncmp (const char * str1,const char * str2, size_t num);
//num是几就比较几个，直到出现不一样的或者字符串介绍了，或者num个字符比较完了，就结束了
```

```c
int main ()
{
	char arr1[] = "abcdefgh";
  char arr2[] = "abc";
  char arr3[] = "abcq";

  int ret1 = strncmp(arr1,arr2,4);
  int ret2 = strncmp(arr1,arr3,4);
  printf("%d %d \n",ret1,ret2);
  
  
	return 0;
}
//1 -1

```



#### 3.3.8strstr

```C
char * strstr (const char * str1,const char * str2);
//返回值是char*类型的，需要用指针接收
```

```c
int main ()
{
	char str[] = "abcdefg";
  char*p;
  p= strstr (str, "def");
  if(p == NULL)
  {
    puts(error);
  }
 
  else
  {
    puts(p);
  }
	return 0;
}
//输出defg
```

```c
//模拟实现strstr函数
my_strstr(const char *str1,const char* str2)
{
	assert(str1 && str2);
  const char* s1 = str1;
  const char *s2 = str2;
  const char * p = str1;
  //p是一个定位指针，就是当有可能去找到那个字符相等的字符的首地址
  while(*p)
  {
    s1 = p;//如果s1=s2，说明有可能是这个地址，需要p去接受这个地址来记录这个位置，如果不可以再回来并且+1，从p后面的那个地址继续找
    s2 = str2;
    while (*s1 != '\0' && s2  != '\0' &&  *s1 == *s2 )
    {
			s1++;
      s2++;
   	}
    if(*s2 == '\0')//如果s2=‘\0’,说明已经找到 这个字符串了就该返回这个p的地址了
    {
      return (char*)p;//强制转换为char*类型
    }
    p++;//找不到就+1
  }
	
  return NULL;//如果字符串全部找一遍了，到返回NULL指针
}
```





#### 3.3.9strtok 

```c
char * strtok (char * str, const char * sep);
```

> 1. sep参数是个字符串，定义了用作分隔符的字符集合 
> 2. 第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标 记。
> 3. strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注： strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容 并且可修改。）
> 4.  strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串 中的位置。 
> 5. strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标 记。
> 6. 如果字符串中不存在更多的标记，则返回 NULL 指针。

```c
int main ()
{
  const char * sep = "@.";
  char emaill[]= "sdasdadas@126.com";
  char cp[20] = {0};
  strcpy(cp, emaill);
  
  char * ret = strtok (cp, sep);
  printf("%s\n",ret);
  ret = strtok (NULL, sep);
  printf("%s\n",ret);
  ret = strtok (NULL, sep);
  printf("%s\n",ret);
  ret = strtok (NULL, sep);
  
  return 0;
}
//sdasdadas
//126
//com
//如果再多一个
//printf("%s\n", ret);
//ret = strtok(NULL, sep);
//那么就输出(NULL);
```





#### 3.3.10strerror

```c
#include <errno.h>
//必须包含的头文件
char * strerror (int errnum);
```

> 作用是返回错误码，所对应的错误信息

```c
int main ()
{
  printf("%s\n",strerror(1));//Operation not permitted
  printf("%s\n",strerror(2));//No such file or directory
  printf("%s\n",strerror(3));//No such process
  printf("%s\n",strerror(4));//Interrupted function call
  printf("%s\n",strerror(5));//Input/output error
  printf("%s\n",strerror(6));//No such device or address
  
  //errno - C语言中设置的一个全局的错误码存放的变量
  
  FILE*pf = fopen ("test.txt","r");
  //FILE*pf = fopen ("C:\\Users\\Public\\Desktop\\test.txt","r")
  //输入要找的文件的地址就可以对应去寻找是否有这个文件
  if(pf == NULL)
  {
    printf("%s\n",strerror(errno));//No such file or directory
    return 1;
  }
  else
  {
    //
  }
  return 0;
}

```

<a href="https://sm.ms/image/ZtqN7zTx9rJUfPW" target="_blank"><img src="https://s2.loli.net/2023/11/02/ZtqN7zTx9rJUfPW.png" ></a>

<a href="https://sm.ms/image/VTBqRY2mWn6HQyO" target="_blank"><img src="https://s2.loli.net/2023/11/02/VTBqRY2mWn6HQyO.png" ></a>

```c
int tolower (int c );//大写变小写
int toupper (int c );//小写变大写
//int ret = tolower ('W');
//int ret = toupper ('w');
```

```C
#include <ctype.h>
int main ()
{
	int a = tolower("A");
  int b = toupper("a");
  printf("%c %c",a,b);

	return 0;
}
```





#### 3.3.11memcpy

```c
void * memcpy(void * destination, const void * source, size_t num);
//num的单位是字节，一个int是4个字节，如果有五个int类型的，num要填20
```

> - 函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。 
> - 这个函数在遇到 '\0' 的时候并不会停下来。 
> - 如果source和destination有任何的重叠，复制的结果都是未定义的。

```c
int main ()
{
	int arr1[] = {1,2,3,4,5,6,7};
  int  arr2[10] ={0};
  my_memcpy(arr2,arr1,28);
    
  float arr3[5] = {1.0,2.0,3.0,4.0,5.0};
  float arr4[10] = {0.0};
  memcpy(arr4,arr3,20);
//正是因为memcpy是void*的，所以不管什么类型的数组中的元素都可以拷贝过来
	return 0;
}
```

```c
//模拟实现memcpy
void * my_memcpy (void* dest,const void * src, size_t num)
{
  assert (dest && src);
  void* ret =dest;
  //储存地址
  while (num--)//num--，每复制一个字节就减一
  {
    *(char *)dest = *(char*)src;
    //不知道传过来的参数的dest和src是什么类型的，所以都强制转换为char*类型的，这样就每次就只复制一个字节，不管你是什么类型的，最小单位都是字节，所以强制转换为char*的，可以帮助我们更好的去实现这个函数
    dest = (char *)dest +1;
    src = (char *)src + 1;
    
  }
  
  return ret;
}
//memcpy函数是不用来处理重叠的内存之间的数据拷贝的（但可以进行这个作用）
//使用memmove函数来实现，重叠内存之间的数据拷贝
```





#### 3.3.12memmove

```c
void * memmove (void * destination,const void* source,size_t num);
```

> - 和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的。
> -  如果源空间和目标空间出现重叠，就得使用memmove函数处理。

```c
int main ()
{
  char str [] ="memmove can be very useful.......";
  memmove (str+20,str+15,11);
  puts(str);
  
  return 0;
}
//memmove can be very very useful..
```

```c
void* my_memmove(void* dest, const void* src, size_t num)
{
    assert(dest && src);
    char* ret = dest;//保存地址，以此输出地址
    if (dest < src)
    {
        //从前往后
        while (num--)
        {
            *(char*)dest = *(char*)src;
            dest = (char*)dest + 1;
            src = (char*)src + 1;
        }
    }
    else
    {
        //从后往前
        while (num--)
            //复制一个字节，就减一，这个num一直在变
        {
            *((char*)dest + num) = *((char*)src + num);
            //不需要进行加一或者减一，num在while的判断语句中一直在变化
        }

    }
    return ret;
}

int test3()
{
    int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
    my_memmove(arr1 + 1, arr1 + 3, 20);
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }

}

int main()
{
    test3();
    return 0;
}
//1 4 5 6 7 8 7 8 9 0
```

<a href="https://sm.ms/image/qfnRlFmKA2hZP17" target="_blank"><img src="https://s2.loli.net/2023/11/03/qfnRlFmKA2hZP17.png" ></a>



#### 3.3.13memcmp

```c
int memcmp (const void* ptr1, const void* ptr2, size_t num);
//相等返回值为0，第一个数组小于第二个数组返回值为负值，大于则返回正值
```

- 比较从ptr1和ptr2指针开始的num个字节进行比较

```c
int main ()
{
	int arr1[] = { 1, 2, 3, 4 ,5};
  int arr2[] = { 1, 2, 3};
  int ret =memcmp (arr1,arr2,12);
	printf("%d" ,ret);//0 说明相等
  
  
  int arr3[] = {1,2,4,5,6};
  int ret2 = memcmp(arr1,arr3,20);
  printf("%d" ,ret2);//-1 说明arr3大于arr1
	return 0;
}
```





#### 3.3.14memset

```c
int main ()
{
  char arr[] = "hi boy";
  memset(arr,'x',2);//xx boy
  memset(arr+2,'x',2);//hixxxx
  printf("%s\n",arr);
	return 0;
}
//memset函数可以去对字符进行更改

int main ()
{
  int arr[] = {0};
  memset(arr,1,40);
  int i =0;
  for (i = 0; i< 10; i++)
  {
    printf("%d\n",arr[i]);
  }
  return 0;
}
//16843009 输出全为这个 说明 并不是改的四个字节，而是一个一个字节进行更改
```

<a href="https://sm.ms/image/HimfKA46FhW7ByZ" target="_blank"><img src="https://s2.loli.net/2023/11/03/HimfKA46FhW7ByZ.png" ></a>
