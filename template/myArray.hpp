/*
 * @Author: lhq
 * @Date: 2022-11-07 18:55:20
 * @LastEditTime: 2022-11-07 19:57:34
 * @LastEditors: lhq
 * @Description: 模板实现自定义数组类
 * @FilePath: \cpp-pro\template\myArray.cpp
 */
#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray {
public:
    //构造函数
    MyArray(int capacity) {
        this->mCapacity = capacity;
        this->mSize = 0;
        pAddress = new T[this->mCapacity];
    }
    //拷贝构造
    MyArray(const MyArray &arr) {
        cout << "拷贝构造函数执行。" << endl;
        this->mCapacity = arr.mCapacity;
        this->mSize = arr.mSize;
        this->pAddress = new T[this->mCapacity];    //拷贝构造重新开辟堆区内存
        for (int i = 0; i < this->mSize; i++)
        {
            //如果元素类型T为对象，而且还包含指针，必须重载"="运算符；
            //普通类型可以直接赋值，指针类型需要深拷贝
            this->pAddress[i] = arr.pAddress[i];
        }
        
    }
    //重载“=”操作符，防止浅拷贝问题
    MyArray& operator=(const MyArray& myArray) {
        if (this->pAddress != NULL)
        {   //清空原有内存空间
            delete [] this->pAddress;
            this->mCapacity = 0;
            this->mSize = 0;
        }
        this->mCapacity = myArray.mCapacity;
        this->mSize = myArray.mSize;
        this->pAddress = new T[this->mCapacity];    //重新开辟空间
        for (int i = 0; i < this->mSize; i++)
        {
            this->pAddress[i] = myArray[i];
        }
        return *this;    //返回指针类型
    }
    //重载[]操作符，返回数组元素（不重载只能返回普通值，现在可以返回对象）
    //不考虑数组越界问题
    T& operator [] (int index) {
        return this->pAddress[index];
    }
    //尾插法
    void Push_back(const T& val) {
        if (this->mCapacity == this->mSize)
        {
            return;
        }
        this->pAddress[this->mSize] = val;
        this->mSize++;  //int type
        
    }
    //尾删法
    void Pop_back(){
        if (this->mSize == 0)
        {
            return;
        }
        this->mSize--;  //int type
    }
    //获取数组容量
    int getCapacity() {
        return this->mCapacity;
    }
    //获取数组大小
    int getSize() {
        return this->mSize;
    }
    //析构函数
    ~MyArray() {
        if (this->pAddress != NULL)
        {
            delete [] this->pAddress;
            //删除空间后还要把指针置空
            this->pAddress = NULL;
            this->mCapacity = 0;
            this->mSize = 0;
        }
    }

private:
    T * pAddress;   //存数据，在堆区
    int mCapacity;
    int mSize;
};