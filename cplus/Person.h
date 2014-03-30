//
//  Person.h
//  cplus
//
//  Created by 李言 on 14-3-28.
//  Copyright (c) 2014年 李言. All rights reserved.
//

#ifndef __cplus__Person__
#define __cplus__Person__

#include <iostream>
using namespace std;
class Person
{
private:
    char *name;
    int  age;
    char sex;
public:
    Person();//构造函数  默认构造
    Person(int age);
    Person(const Person & per);//拷贝构造
    Person & operator =(const Person & right);//赋值操作符重载
    void setAge(int age);
    int getAge() const;
    const char *getName()const;
    void setName(const char* name);
    /**
     *  虚函数，父类调用子类的函数
     */
    /**
     *  virtual void info() const=0  ;
     纯虚函数      包含纯虚函数的 类 叫 抽象类
     抽象类不可实例化
     纯虚函数在子类必须必须实现 否则子类一样不能实例化  ps： objective-c  协议  request
     */
   virtual void info()const;
    ~Person();//析构函数
    
    /**
     *  用 static 修饰  静态成员函数  类方法  ps：oc 中的  “+” 方法
     */
    static Person * Create();
    static Person * Create(const  char* name);
};

class Action {
private:
    int x ;
    int y ;
    
public:
    void move(int x, int y);
};

class Student:public Person,public Action {
    
private:
    float score;
public:
    Student();
    void info()const;
    ~Student();
    
};


class Worker:public Person {
    
public:
    void info() const;
};

#endif /* defined(__cplus__Person__) */
