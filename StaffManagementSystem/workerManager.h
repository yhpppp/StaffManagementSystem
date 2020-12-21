#pragma once // 防止头文件重复
#include <iostream>
using namespace std;

class WorkerManager
{
public:
	WorkerManager();

	// 展示菜单
	void showMenu();

	// 退出系统
	void exitSystem();

	~WorkerManager();
};