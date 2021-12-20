/*
 * @Author: Juncfang
 * @Date: 2021-12-20 21:06:49
 * @LastEditTime: 2021-12-20 21:07:57
 * @LastEditors: Juncfang
 * @Description: 
 * @FilePath: \learn-c-primer-plus\第二章\2.12.4.c
 *  
 */
#include <stdio.h>

void jolly(void);

int main(void){
    jolly();
    jolly();
    jolly();
    printf("Which nobody can deny!\n");
    return 0;
}

void jolly(void){
    printf("For he's a jolly good fellow!\n");
}