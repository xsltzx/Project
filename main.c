#include <stdio.h>
#include "twoSum.h"

struct Student{
    char s_id;
    char s_sex;
    char s_height;
    char s_weight;
    int s_name[4];
    int s_age;
    double s_score;
};

int main() {

    //结构体内存对齐
    struct Student stu;
    printf("%p\n", &stu.s_id);
    printf("%p\n", &stu.s_name);
    printf("%p\n", &stu.s_name[3]);
    printf("%p\n", &stu.s_sex);
    printf("%p\n", &stu.s_age);
    printf("%lu", sizeof(struct Student));

    //char*和char[]的区别
    /*
    char ch[] = "hello";
    char *p;
    p = ch;
    char *p1 = "hello world";
    printf("%s\n", p1);
    printf("%p\n", &p1);
    printf("%c", p[0]);
    printf("%c", ch[0]);
    */


    // 数组作为函数参数输入，以及作为函数返回值
    /*
    int nums[] = {2, 7, 11, 15};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    int returnSize;
    int *result;
    result = twoSum(nums, numsSize, target, &returnSize);
    if(returnSize > 0){
        for(int i = 0; i < returnSize; ++i){
            printf("%d\n", *(result + i));
            printf("%p\n", result + i);
        }
    }
    */

}
