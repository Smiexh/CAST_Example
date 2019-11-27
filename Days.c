#include<stdio.h>

int rennian(int n){
    if(n%400==0||(n%4==0&&n%100!=0)){
        return 1;
    }else{
        return 0;
    }
}

int Days(int years,int month,int day){
    int month_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    month_days[2]+=rennian(years);
    int i;
    int sum = 0;
    for(i = 1; i < month; i++ ){
        sum += month_days[i];
    }
    sum += day;
    return sum;
}

int main(){
    int i, j, k;
    scanf("%d-%d-%d",&i,&j,&k);
    int result = Days(i, j, k);
    printf("%d\n",result);
    return 0;
}