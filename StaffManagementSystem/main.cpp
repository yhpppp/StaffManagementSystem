#include <iostream>
using namespace std;
#include "workerManager.h"
//#include "employee.h"
//#include "manager.h"
//#include "boss.h"
#include <string>

int main() {
	//Worker* worker = NULL;
	//worker = new Employee(1, "大雄", 3);
	//// 多态
	//worker->showInfo();
	//delete worker;
	//worker = new Manager(2, "经理王", 2);
	//worker->showInfo();
	//delete worker;
	//worker = new Boss(3, "马云", 1);
	//worker->showInfo();
	//delete worker;
	//// 实例化管理者对象
	WorkerManager wm;
	// 选择值
	int choice = 0;

	while (true)
	{
		// 调用展示菜单成员函数
		wm.showMenu();
		cout << "请选择操作:" << endl;
		cin >> choice;
		switch (choice)
		{
			//退出系统
		case 0:
			wm.exitSystem();
			break;
			// 增加职工
		case 1:
			wm.addEmp();
			break;
			// 显示职工
		case 2:
			wm.showEmp();
			break;
			// 删除职工
		case 3:
			wm.delEmp();
			break;
			// 修改职工
		case 4:
			wm.modEmp();
			break;
			// 查找职工
		case 5:
			wm.findEmp();
			break;
			// 排序职工
		case 6:
			wm.sortEmp();
			break;
			// 清空文档
		case 7:
			wm.clearEmp();
			break;
		default:
			break;
		}
	}

	system("pause");
}