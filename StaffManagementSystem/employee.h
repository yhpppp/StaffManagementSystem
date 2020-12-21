#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class Employee : public Worker
{
public:
	Employee(int id, string name, int deptId);
	// 显示个人信息
	virtual	void showInfo();
	// 获取岗位名称
	virtual string getDeptName();
};