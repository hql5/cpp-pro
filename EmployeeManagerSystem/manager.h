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

//������
class Manager :public Worker
{
public:

	//���캯��
	Manager(int id, string name, int dId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ����
	virtual string getDeptName();

};