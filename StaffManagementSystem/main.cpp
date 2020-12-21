#include <iostream>
using namespace std;
#include "workerManager.h"

int main() {
	// 实例化管理者对象
	WorkerManager wm;
	// 调用展示菜单成员函数
	wm.showMenu();

	system("pause");
}