#include <iostream>
#include <print>
//print在C23加入 

using namespace std;
//全局使用std命名空间，不使用则以下cout、endl、print、println需改为std::cout、std::endl、std::print、std::println

int main(){

	cout << "这是cout的第一句.";
	cout << "这是cout的第二句." << "\n\n";
	//\n是换行回车

	cout << "这是cout...endl的第一句." << endl;
	cout << "这是cout...endl的第二句." << endl << "\n";
	// endl是刷新缓冲区并换行回车

	print("这是C23的print的第一句.");
	print("这是C23的print的第二句.");
	print("\n\n");
	// print不会换行

	println("这是C23的println的第一句.");
	println("这是C23的println的第二句.");
	println("\n");
	// println会换行

	print("以上便是cout,endl,print,println的打印效果\n");

	return 0 ;
}