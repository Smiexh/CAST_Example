#include<stdio.h>


struct Student {

    char*  ID;
    char*  name;
    int    age;
    float  score;
    
} stu_info_1[2], stu_info_2[] = {{ "B18010920", "smiexh", 19, 100.0 },
                                  { "B18010919", "xxx"   , 20, 88.0}};

//结构体数组，第一个没有赋值，第二个整体赋值,当对数组中全部元素赋值时，也可不给出数组长度


int main(){
    //对结构体数组”stu_info_1[2]“的第一个元素赋值
    stu_info_1[0].ID    = "B18010910";
    stu_info_1[0].name  = "hhh";
    stu_info_1[0].age   = 16;
    stu_info_1[0].score = 99.0;

    //对结构体数组”stu_info_1[2]“的第二个元素赋值
    stu_info_1[1].ID    = "B18010910";
    stu_info_1[1].name  = "jjj";
    stu_info_1[1].age   = 17;
    stu_info_1[1].score = 89.0;

    //读取"stu_info_1"成员的值
    printf("ID    :  %s\n"    , stu_info_1[0].ID);
    printf("name  :  %s\n"    , stu_info_1[0].name);
    printf("age   :  %d\n"    , stu_info_1[0].age);
    printf("score :  %f\n"    , stu_info_1[0].score);
    putchar('\n');

    printf("ID    :  %s\n"    , stu_info_1[1].ID);
    printf("name  :  %s\n"    , stu_info_1[1].name);
    printf("age   :  %d\n"    , stu_info_1[1].age);
    printf("score :  %f\n"    , stu_info_1[1].score);
    putchar('\n');

    //读取"stu_info_1"成员的值
    printf("ID    :  %s\n"    , stu_info_2[0].ID);
    printf("name  :  %s\n"    , stu_info_2[0].name);
    printf("age   :  %d\n"    , stu_info_2[0].age);
    printf("score :  %f\n"    , stu_info_2[0].score);
    putchar('\n');

    printf("ID    :  %s\n"    , stu_info_2[1].ID);
    printf("name  :  %s\n"    , stu_info_2[1].name);
    printf("age   :  %d\n"    , stu_info_2[1].age);
    printf("score :  %f\n"    , stu_info_2[1].score);

    return 0;
}