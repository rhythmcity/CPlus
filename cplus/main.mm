//
//  main.m
//  cplus
//
//  Created by 李言 on 14-3-28.
//  Copyright (c) 2014年 李言. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <iostream>
#include "Person.h"
//using namespace std;
//
//int maxValue(int a,int b);
//int maxValue(int a, int b){
//    return a>b?a:b;
//
//}
//float maxValue(float a,float b=3.4);
//float maxValue(float a,float b){
//    return a>b?a:b;
//    
//}
int main(int argc, const char * argv[])
{

    
//    char *p =new char[10];
//    strcpy(p,"iPhone");
//    printf("%s\n",p);
//    delete [] p;
//   // maxValue(2.3,4.4);
//    printf("%f", maxValue(3.3));
//    per->setAge(30);
//    printf("%d",per.getAge());
//   const char *name=per.getName();
//   cout<<per.getAge()<<endl ;
//    
//    Person per=Person();
////    Person per1(per);
//    Person per1=Person();
//    per1=per;
//    per1.info();
    
//    Person *per=new Person();
//    per->setName("iPhone");
//    per->info();
//    delete per;
    
    Student stu= Student();
//    stu.setName("android");
//    stu.getAge();
    stu.info();
    printf("str,%lu",sizeof(stu));
    
    return 0;
}

