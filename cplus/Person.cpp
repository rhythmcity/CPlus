//
//  Person.cpp
//  cplus
//
//  Created by 李言 on 14-3-28.
//  Copyright (c) 2014年 李言. All rights reserved.
//

#include "Person.h"
Person::Person()
{
    strcpy(name,"liyan");
    age=30;
    sex='m';
}


Person::Person(int age)
{
    strcpy(name,"liyan");
    this->age=age;
    sex='m';
}

void Person::setAge(int age){

    this->age =age;
}

int Person::getAge() const
{
    return age;
}

const char * Person::getName()const
{
    return name;

}

void Person::info()const{

    printf("%s\n%d\n%c\n",name,age,sex);

}

