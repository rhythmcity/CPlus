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
class Person {
private:
    char name[30];
    int  age;
    char sex;
public:
    Person();
    Person(int age);
    void setAge(int age);
    int getAge() const;
    const char *getName()const;
    void info()const;
};

#endif /* defined(__cplus__Person__) */
