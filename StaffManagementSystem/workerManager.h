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

	// 获取统计人数
	int getEmpNum();

	// 初始化职员
	void initEmp();

	// 显示员工
	void showEmp();

	// 删除职工
	void delEmp();

	// 修改职工
	void modEmp();

	// 查找职工
	void findEmp();

	// 排序职工
	void sortEmp();

	int isExistEmp(int id);
	~WorkerManager();

	// 记录职工人数
	int m_EmpNum;
	// 职工数组指针
	Worker** m_EmpArray;
	// 存储数据文件是否为空
	bool m_FileIsEmpty;
};