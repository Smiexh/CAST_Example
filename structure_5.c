#include<stdio.h>

typedef struct Student {

    char*  ID;
    char*  name;
    int    age;
    float  score;

} STU;
//这时的”STU“就不是变量名了，而且也不能在此定义新变量了
//”STU“是”struct Student“的别名
//现在可以用”STU“来定义新变量

/*
当然对类型取别名也可以在类型定义后进行
比如：

struct Student {

    char*  ID;
    char*  name;
    int    age;
    float  score;

};

typedef struct Student STU;

*/

int main(){

    STU stu_info_1 = {"B1801", "smiexh", 19, 100.0};

    //读取"stu_info_1"成员的值
    printf("ID    :  %s\n"    , stu_info_1.ID);
    printf("name  :  %s\n"  , stu_info_1.name);
    printf("age   :  %d\n"   , stu_info_1.age);
    printf("score :  %f\n" , stu_info_1.score);
    putchar('\n');


    //typedef 可以对任何已有的类型取别名，因为它本来就是干这个的。
    //For example
    
    typedef int smiexh;

    smiexh i = 1;
    printf("i = %d \n", i);
    return 0;
}
