/*
 * @Author: Juncfang
 * @Date: 2021-12-20 22:49:17
 * @LastEditTime: 2021-12-20 22:53:13
 * @LastEditors: Juncfang
 * @Description: 
 * @FilePath: \learn-c-primer-plus\chapter2\2.12.8.c
 *  
 */

#include <stdio.h>
void one_three(void);
void two(void);

int main(void){
    printf("starting now:\n");
    one_three();
    printf("done!");
    getchar();
    return 0;
}

void one_three(void){
    printf("one\n");
    two();
    printf("three\n");
}

void two(void){
    printf("two\n");
}