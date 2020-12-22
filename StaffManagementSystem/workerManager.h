#pragma once // 防止头文件重复
#include <iostream>
#include "worker.h"
#include <fstream>
#define	FILENAME "empFile.txt"

using namespace std;

class WorkerManager
{
public:
	WorkerManager();

	// 展示菜单
	void showMenu();

	// 退出系统
	void exitSystem();

	// 添加职工
	void addEmp();

	// 保存数据
	void saveFile();

	~WorkerManager();

	// 记录职工人数
	int m_EmpNum;
	// 职工数组指针
	Worker** m_EmpArray;

};