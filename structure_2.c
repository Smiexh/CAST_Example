#include<stdio.h>

//在定义结构体的同时也可以定义结构体变量
//也可以直接赋值
//For example

struct Student {

    char*  ID;
    char*  name;
    int    age;
    float  score;
    
} stu_info_1, stu_info_2 = { "B18010920", "smiexh", 19, 100.0};


int main(){
    
    //读取"stu_info_1"成员的值
    printf("ID    :  %s\n"    , stu_info_1.ID);
    printf("name  :  %s\n"  , stu_info_1.name);
    printf("age   :  %d\n"   , stu_info_1.age);
    printf("score :  %f\n" , stu_info_1.score);

    //读取"stu_info_2"成员的值
    printf("ID    :  %s\n"    , stu_info_2.ID);
    printf("name  :  %s\n"  , stu_info_2.name);
    printf("age   :  %d\n"   , stu_info_2.age);
    printf("score :  %f\n" , stu_info_2.score);

    return 0;
}