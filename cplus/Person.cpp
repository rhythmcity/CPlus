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
    name=new char[255];
    strcpy(name,"liyan");
    age=30;
    sex='m';
}


Person::Person(int age)
{
    name=new char[255];
    strcpy(name,"liyan");
    this->age=age;
    sex='m';
}

Person::Person(const Person & per)
{   this->name=new  char[255];
    strcpy(this->name, per.name);
   // this->name=per.name;
    this->age=per.age;
    this->sex=per.sex;
}

Person & Person::operator =(const Person & right)
{
   // this->name=new char [255];
    strcpy(this->name, right.name);
   // this->name=right.name;
    this->age=right.age;
    this->sex=right.sex;
    return *this;
}

void Person::setAge(int age){

    this->age =age;
}

int Person::getAge() const
{
    return age;
}

void Person::setName(const char* name)
{
    strcpy(this->name, name);

}

const char * Person::getName()const
{
    return name;

}
Person * Person::Create()
{
    Person *per =new Person();
    return per;

}
Person * Person:: Create(const  char* name)
{
// Person *per =new Person();
    Person *per=Person::Create();
    strcpy(per->name, name);
    return per;

}
void Person::info()const{
    
    printf("我是一个人\n");
    printf("%s",this->name);
   // printf("%s\n%d\n%c\n",name,age,sex);

}

Person::~Person()
{
  
    delete []name;
    printf("~Person\n");

}
// Action
void Action:: move(int x, int y)
{
    this->x=x;
    this->y=y;
    

}


//  student
void Student::info() const 
{
   // Person::info();
    printf("我是一个学生\n");
//printf("%f\n",score);

}

Student::Student()
{
    score=100.0f;

}
Student:: ~Student()
{

    printf("~student");
}
//worker
void Worker:: info() const{
    printf("我是一个工人\n");

}