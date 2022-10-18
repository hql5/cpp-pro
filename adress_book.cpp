/*
 * @Author: lhq
 * @Date: 2022-10-15 22:28:38
 * @LastEditTime: 2022-10-16 17:11:35
 * @LastEditors: lhq
 * @Description: 内存空间实现通讯录管理
 * @FilePath: \cpp-pro\adress_book.cpp
 */
#include <iostream>
#include <string>

#define MAX 1000

using namespace std;

//Person
struct Person
{
    string m_name;
    int m_sex;
    int m_age;
    string m_phone;
    string m_address;
};

//Adress Book
struct AddressBook
{
    Person person_arr[MAX];
    int m_size;
};

//Add person
void addPerson(AddressBook *asbo)
{
    //full of address book
    if (asbo->m_size == MAX)
    {
        cout << "通讯录已经满了！" << endl;
        return;
    }
    else
    {
        string tname;
        int tsex = 0; // 1 male, 2 female
        int tage = 0;
        string tphone = "";
        string taddress = "";

        cout << "input name : " << endl;
        cin >> tname;
        cout << "input gender : " << endl;
        cin >> tsex;
        cout << "input age : " << endl;
        cin >> tage;
        cout << "input phone number : " << endl;
        cin >> tphone;
        cout << "input address : " << endl;
        cin >> taddress;

        asbo->person_arr[asbo->m_size].m_name = tname;
        asbo->person_arr[asbo->m_size].m_sex = tsex;
        asbo->person_arr[asbo->m_size].m_age = tage;
        asbo->person_arr[asbo->m_size].m_phone = tphone; 
        asbo->person_arr[asbo->m_size].m_address = taddress;

        asbo->m_size++;

        cout << "添加成功！" << endl;

    }
}

//Show persons
void showPerson(AddressBook *asbo)
{
    if (asbo->m_size == 0)
        cout << "通讯录为空。" << endl;
    else
    {
        for (int i = 0; i < asbo->m_size; i++)
        {
            cout << "姓名: " << asbo->person_arr[i].m_name << "\t";
            cout << "性别: " << (asbo->person_arr[i].m_sex == 1 ? "男" : "女") << "\t";
            cout << "年龄: " << asbo->person_arr[i].m_age << "\t";
            cout << "电话: " << asbo->person_arr[i].m_phone << "\t";
            cout << "住址: " << asbo->person_arr[i].m_address << "\t";
            cout << endl;
        }
    }
}

//Delete person
void deletePerson(AddressBook *asbo)
{
    int idx = -1;
    string dname;
    cout << "输入要删除的联系人: " << endl;
    cin >> dname;

    for (int i=0; i < asbo->m_size; i++)
    {
        if (asbo->person_arr[i].m_name == dname)
        { 
            idx = i;
        }
    }
    
    for (int i=idx; i < asbo->m_size; i++)
    {
        if (i == -1)
        {
            cout << "没有此联系人。" << endl;    //no person dname to delete
            return;
        }
        asbo->person_arr[i] = asbo->person_arr[i+1];
    }
    asbo->m_size--;
    cout << "删除成功。" << endl;
    // showPerson(asbo);

}

//Find person
void findPerson (AddressBook *asbo)
{
    int idx = -1;
    string fname;
    cout << "输入要查找的联系人: " << endl;
    cin >> fname;

    for (int i=0; i < asbo->m_size; i++)
    {
        if (asbo->person_arr[i].m_name == fname)
        { 
            idx = i;
        }
    }

    if (idx == -1)
    {
        cout << "没有此联系人。" << endl; 
        return;
    }
   
    cout << "姓名: " << asbo->person_arr[idx].m_name << "\t";
    cout << "性别: " << asbo->person_arr[idx].m_sex << "\t";
    cout << "年龄: " << asbo->person_arr[idx].m_age << "\t";
    cout << "电话: " << asbo->person_arr[idx].m_phone << "\t";
    cout << "住址: " << asbo->person_arr[idx].m_address << "\t";
 
}

//Edit person
void editPerson (AddressBook *asbo)
{
    int idx = -1;
    string ename;
    cout << "输入要修改的联系人: " << endl;
    cin >> ename;

    for (int i=0; i < asbo->m_size; i++)
    {
        if (asbo->person_arr[i].m_name == ename)
        { 
            idx = i;
        }
    }

    if (idx == -1)
    {
        cout << "没有此联系人。" << endl; 
        return;
    }

    string tname;
    int tsex = 0; // 1 male, 2 female
    int tage = 0;
    string tphone = "";
    string taddress = "";

    cout << "input name : " << endl;
    cin >> tname;
    cout << "input gender : " << endl;
    cin >> tsex;
    cout << "input age : " << endl;
    cin >> tage;
    cout << "input phone number : " << endl;
    cin >> tphone;
    cout << "input address : " << endl;
    cin >> taddress;

    asbo->person_arr[idx].m_name = tname;
    asbo->person_arr[idx].m_sex = tsex;
    asbo->person_arr[idx].m_age = tage;
    asbo->person_arr[idx].m_phone = tphone;
    asbo->person_arr[idx].m_address = taddress;

    cout << "修改成功。" << endl;

}

//Clear persons
void clearPerson(AddressBook *asbo)
{
    asbo->m_size = 0;
    cout << "通讯录已清空。" << endl;
}

//菜单界面
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}


int main()
{
    int select = 0;
    AddressBook asbo;
    asbo.m_size = 0;

	while (true)
	{
		showMenu();

		cin >> select;
		
		switch (select)
		{
		case 1:  //添加联系人
            addPerson(&asbo);
			break;
		case 2:  //显示联系人
            showPerson(&asbo);
			break;
		case 3:  //删除联系人
            deletePerson(&asbo);
			break;
		case 4:  //查找联系人
            findPerson(&asbo);
			break;
		case 5:  //修改联系人
            editPerson(&asbo);
			break;
		case 6:  //清空联系人
            clearPerson(&asbo);
			break;
		case 0:  //退出通讯录
			cout << "欢迎下次使用" << endl;
			return 0;
			break;
		default:
			break;
		}
	}
}