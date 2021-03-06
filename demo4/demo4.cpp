#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//内存管理
	//内存=资源
	//内存由操作系统掌控
	//我们能做的是需要时对操作系统申请资源，用完之后归还资源，这个过程称为内存管理

	// 申请和释放内存
	// 申请：使用运算符new
	// 释放：使用运算符delete

	// 申请
	// int* p = new int; //初始化定义指针，并接受new运算符申请到的内存的地址
	// （1）、int* p = new int(20);
	// （2）、int* p = new int;*p = 20;
	// 两种写法相同

	// 释放
	// delete p; //delete后面跟相应的指针
	// p = NULL;

	// 申请块内存
	// int* arr = new int[10]; //意思是申请了10个整形（int）的内存
	// 释放块内存
	// delete[]arr;

	// C语言方式申请
	// void* malloca(size_t size);
	// void* free(void* membblock);

	// 注：一定要配套使用，不能混搭

	// 注意事项
	// int* p = new int[1000];
	// if (p == NULL)
	// {
	// 	//内存分配失败
	// }
	// delete []p;
	// delete p;
	// p = NULL; //在释放内存的时候，也要把相应的指针设为null,如不赋值为null，相同的指针则会重复调用则会报错


	// demo:
	// （1）###########
	// int* p = new int;
	//
	// if (NULL == *p)
	// {
	// 	return 0;
	// }
	// *p = 20;
	// cout << *p << endl;
	// delete p;
	// p = NULL;
	// ###########

	// （2）###########
	int* p = new int[1000];

	if (NULL == *p)
	{
		return 0;
	}
	p[0] = 10;
	p[1] = 20;
	p[2] = 30;
	p[3] = 40;
	cout << p[0] << "," << p[1] << "," << p[2] << "," << p[3] << endl;
	delete []p; //如果不加中括号，则只会默认释放第一个即p[0]的内存
	p = NULL;
	// ###########


	return 0;
}
