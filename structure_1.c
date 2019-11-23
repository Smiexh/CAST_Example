/*

结构体定义形式：

struct 结构体名 {
    结构体所包含的变量或数组；
}


*/

#include<stdio.h>

struct Student {

    char*  ID;
    char*  name;
    int    age;
    float  score;

    //这些变量与普通的变量和数组的定义方法相同，但不能初始化
    
};//“；”不能少

//现在 “struct Student”就是一个类型，我们可以使用这个类型来定义变量，就跟“int”、“double”一样

//For example

int main(){

    struct Student stu_info_1; //定义一个“struct Student”型的变量“stu_info_1”

    //对“stu_info_1”的成员赋值
    stu_info_1.ID    = "B18010920";
    stu_info_1.name  = "smiexh";
    stu_info_1.age   =  19;
    stu_info_1.score =  100;

    //读取成员的值
    printf("ID    :  %s\n"    , stu_info_1.ID);
    printf("name  :  %s\n"    , stu_info_1.name);
    printf("age   :  %d\n"    , stu_info_1.age);
    printf("score :  %f\n"    , stu_info_1.score);

    return 0;
}