/*
 * @Author: lhq
 * @Date: 2022-11-02 19:16:41
 * @LastEditTime: 2022-11-02 19:35:05
 * @LastEditors: lhq
 * @Description: 
 * @FilePath: \cpp-pro\EmployeeManagerSystem\manager.h
 */
#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//经理类
class Manager :public Worker
{
public:

	//构造函数
	Manager(int id, string name, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取岗位名称
	virtual string getDeptName();

};