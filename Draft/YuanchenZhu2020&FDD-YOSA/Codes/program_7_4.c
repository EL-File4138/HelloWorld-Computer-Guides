/*
** @FileName: program_7_4.c
** @Author: YuanchenZhu
** @Date: 07-06-2020
** @Version: 1.0.0
** @Description: Program 7.4
** @Encoding: UTF-8
*/

#include <stdio.h>

int main(){
    float height;
    int age;
    char name[50];
    
    printf("Hi! I'm Program_7_4. What's your name?\n> ");
    scanf("%s", name);
    printf("%s, I'm interested in your height, can you tell me?(cm)\n> ", name);
    scanf("%f", &height);
    printf("And your age?\n> ");
    scanf("%d", &age);
    printf("I'm get some basic data about you:\n");
    printf("\tname: %s\n", name);
    printf("\tage: %d\n", age);
    printf("\theight:%.2f cm\n", height);
    return 0;
}
