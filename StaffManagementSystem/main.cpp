#include <iostream>
using namespace std;
#include "workerManager.h"
#include "employee.h"

int main() {
	Worker* worker = NULL;
	worker = new Employee(1, "大雄", 3);
	worker->showInfo();

	//// 实例化管理者对象
	//WorkerManager wm;
	//// 选择值
	//int choice = 0;

	//while (true)
	//{
	//	// 调用展示菜单成员函数
	//	wm.showMenu();
	//	cout << "请选择操作:" << endl;
	//	cin >> choice;
	//	switch (choice)
	//	{
	//		// 退出系统
	//	case 0:
	//		wm.exitSystem();
	//		break;
	//		// 增加职工
	//	case 1:
	//		break;
	//		// 显示职工
	//	case 2:
	//		break;
	//		// 删除职工
	//	case 3:
	//		break;
	//		// 修改职工
	//	case 4:
	//		break;
	//		// 查找职工
	//	case 5:
	//		break;
	//		// 排序职工
	//	case 6:
	//		break;
	//		// 清空文档
	//	case 7:
	//		break;
	//	default:
	//		break;
	//	}
	//}


	system("pause");
}