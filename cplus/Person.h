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
    void info()const;
    ~Person();//析构函数
};

class Student:public Person {
    
private:
    float score;
public:
    Student();
    void info()const;
    
};

#endif /* defined(__cplus__Person__) */
