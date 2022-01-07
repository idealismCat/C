#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//// 操作符 -- ~ : 把对应二进制数 按位取反
//int main()
//{
//	int a = 0;
//	printf("%d", ~a); // 输出的值 是 -1
//	// 整数 的数据 在内存中 存储的是 补码
//	/*  整数a  0  变成了 11111111111111111111111111111111
//	* 这对应 是 -1对应 00000000000000000000000000000000
//	* 按位取反之后 的 补码
//	*/
//	return 0;
//}

//// ++  和  -- 操作符
//int main()
//{
//	int a = 10;
//	int b = ++a; // 前置 ++ 是 先 ++ ，后使用 
//	int c = a++; // 后置 ++ 是 先使用 ，后 ++
//	printf("%d\n", b);
//	printf("%d\n", a);
//	printf("%d\n", c);
//	return 0;
//}

//// () -- 强制类型转换
//int main()
//{
//	int a = (int)3.14; // 因为 a 是 int型 ，无法 被 3.14(浮点型) 赋值
//	return 0;
//}

// 关系操作符 <= >= == !=
// 逻辑操作符 &&(逻辑与) 和 ||(逻辑或)
//int main()
//{
//	int a = 0; // 非 0 为 真
//	int b = 1; // 0 为 假
//	int c = a && b;
//	printf("%d",c);
//	return 0;
//}

//// 三目操作符 ? :
//// exp1 ? exp2 : exp3
//// 表达式 exp1 成立 ，exp2 计算，整个表达式的结果是：exp2 的结果
//// 表达式 exp1 成立 ，exp2 计算 ，整个表达式的结果是： exp3 的结果
//int main()
//{
//	int a = 3;
//	int b = 1;
//	int max = 0;
//
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//
//	max = a > b ? a : b;
//	printf("%d", max);
//	return 0;
//}

// 逗号表达式
//int main()
//{
//	int a = 0;
//	int b = 52;
//	int c = 12;
//	int d = (a = b + 4, b = 1 + a, c = a + b);
//	// 逗号表达式 的逻辑是 ：将括号里的式子 从左向右依次执行 
//	//整个表达式结果 取(是) 最后一个表达式的 结果
//	printf("%d %d", c, d);
//	return 0;
//}

// 下标引用操作符 [] 
//int main()
//{
//	int arr[5] = { 1,2,3,5,4 }; // 这里 的 [] 不是操作符
//	printf("%d", arr[1]); // 这里的 [] 就是 下标引用操作符
//	return 0;
//}

// 函数调用操作符 ()
//int main()
//{
//	printf("hahah"); // () -- 函数调用操作符 
//	return 0;
//}

// c 语言 提供的关键字 keyword 
// 1. 是 c语言提供的 ，不能自己创建关键字
// 2. 变量名 不能是关键字
//int main()
//{
//	// auto -- 自动的 -- 每个局部变量 都是 auto 修饰的
//	//{
//	//	int a = 10; // a 是个自动变量 -- 自动创建 自动销毁 (auto) ing a = 10; -- 省略掉了
//	//}
//
//	return 0;
//}
// 计算机中，数据 可以存储在  寄存器 、高速缓存 、内存 、硬盘 、网盘 
// 从右往左 -- 造价越高 、 存取速度越快、 空间越小
// define 和 include 不是关键字， 它们是 预处理指令.

