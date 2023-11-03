#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//
//	printf("%c", tolower('W'));
//
//	return 0;
//}#include <stdio.h>
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//	return 0;
//}

//int main()
//{
//	char str[100] = "memmove can be very useful.......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//
//	return 0;
//}
//模拟实现memmove
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//    assert(dest && src);
//    char* ret = dest;
//    if (dest < src)
//    {
//        //从前往后
//        while (num--)
//        {
//            *(char*)dest = *(char*)src;
//            dest = (char*)dest + 1;
//            src = (char*)src + 1;
//        }
//    }
//    else
//    {
//        //从后往前
//        while (num--)
//            //复制一个字节，就减一，这个num一直在变
//        {
//            *((char*)dest + num) = *((char*)src + num);
//            //不需要进行加一或者减一，num在while的判断语句中一直在变化
//        }
//
//    }
//    return ret;
//}
//
//int test3()
//{
//    int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//    my_memmove(arr1 + 1, arr1 + 3, 20);
//        int i = 0;
//
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//
//}
//
//int main()
//{
//    test3();
//    return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4 ,5 };
//	int arr2[] = { 1, 2, 3 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4 ,5 };
//	int arr2[] = { 1, 2, 3 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d", ret);//0 说明相等
//
//
//	int arr3[] = { 1,2,4,5,6 };
//	int ret2 = memcmp(arr1, arr3, 20);
//	printf("%d", ret2);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hi boy";
//	
//	memset(arr+2, 'x', 4);
//	printf("%s\n", arr);
//	
//	return 0;
//}
//int main()
//{
//    int arr[10] = { 0 };
//    memset(arr, 1, 40);
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d\n", arr[i]);
//    }
//    return 0;
//}