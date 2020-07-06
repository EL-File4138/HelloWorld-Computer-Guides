/*
** @FileName: program_7_6.c
** @Author: YuanchenZhu
** @Date: 07-06-2020
** @Version: 1.0.0
** @Description: Program 7.6
** @Encoding: UTF-8
*/

#include <stdio.h>

int main(){
    int i = 43;
    float j = 942.51f;

    printf("|%d|%4d|%-4d|%4.3d|\n", i, i, i, i);
    printf("|10.3f|%10.3e|%-10g|\n", j, j, j, j);
    return 0;
}
