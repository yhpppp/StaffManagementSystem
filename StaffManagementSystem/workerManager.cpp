#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

WorkerManager::WorkerManager() {
	// 初始化人数
	this->m_EmpNum = 0;
	//初始化数组指针
	this->m_EmpArray = NULL;
}

void WorkerManager::showMenu() {
	cout << "*****************************************" << endl;
	cout << "*******  欢迎使用职工管理系统!  *********" << endl;
	cout << "***********  0. 退出管理程序  ***********" << endl;
	cout << "***********  1. 增加职工信息  ***********" << endl;
	cout << "***********  2. 显示职工信息  ***********" << endl;
	cout << "***********  3. 删除离职职工  ***********" << endl;
	cout << "***********  4. 修改职工信息  ***********" << endl;
	cout << "***********  5. 查找职工信息  ***********" << endl;
	cout << "***********  6. 按照编号排序  ***********" << endl;
	cout << "***********  7. 清空所有文档  ***********" << endl;
	cout << "*****************************************" << endl;
	cout << endl;
}

void WorkerManager::exitSystem() {
	cout << "系统已退出,欢迎下次使用!" << endl;
	system("pause");
	exit(0);
}

void WorkerManager::addEmp() {
	cout << "请输入增加员工数量: " << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0) {
		// 计算新空间大小
		int newSize = this->m_EmpNum + addNum;
		// 开辟新空间
		Worker** newSpace = new Worker * [newSize];
		// 将原空间下内容存放到新空间下
		if (this->m_EmpArray != NULL) {
			for (int i = 0; i < this->m_EmpNum; i++) {
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		// 输入数据
		for (int i = 0; i < addNum; i++) {
			int id;
			string name;
			int selected;

			cout << "请输入第 " << i + 1 << " 个新职工编号:" << endl;
			cin >> id;
			cout << "请输入第 " << i + 1 << " 个新职工姓名:" << endl;
			cin >> name;
			cout << "请输入该职工的岗位: " << endl;
			cout << "1. 普通职工" << endl;
			cout << "2. 经理" << endl;
			cout << "3. 老板" << endl;
			cin >> selected;

			Worker* worker = NULL;
			switch (selected)
			{
				// 普通职工
			case 1:
				worker = new Employee(id, name, 1);
				break;
				// 经理
			case 2:
				worker = new Manager(id, name, 2);
				break;
				// 老板
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			newSpace[this->m_EmpNum + i] = worker;
		}

		// 释放原数组
		delete[] this->m_EmpArray;
		// 更改新空间的指向
		this->m_EmpArray = newSpace;
		// 更改新的个数 ?
		this->m_EmpNum = newSize;

		cout << "成功添加" << addNum << "名新职工!" << endl;
	}
	else {
		cout << "输入有误!" << endl;
	}
	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager() {

}