#include<stdio.h>

struct Student {

    char*  ID;
    char*  name;
    int    age;
    float  score;
    
} stu_info_1, stu_info_2 = { "B18010920", "smiexh", 19, 100.0 };

//我们看到这里”stu_info_2“是整体赋值的，而在第一个例子中我们是分开赋值的
//那我们尝试一下对”stu_info_1“整体赋值，看看会发生什么


int main(){

    stu_info_1 = { "B18010919", "xxx", 19, 99.0};

    //读取"stu_info_1"成员的值
    printf("ID    :  %s\n"    , stu_info_1.ID);
    printf("name  :  %s\n"  , stu_info_1.name);
    printf("age   :  %d\n"   , stu_info_1.age);
    printf("score :  %f\n" , stu_info_1.score);

    return 0;
}

//我们发现它报错了，这说明整体赋值仅限于定义结构体变量的时候，
//在使用过程中只能对成员逐一赋值，这和数组的赋值非常类似
//