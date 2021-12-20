/*
 * @Author: Juncfang
 * @Date: 2021-12-20 21:09:46
 * @LastEditTime: 2021-12-20 21:21:33
 * @LastEditors: Juncfang
 * @Description: 
 * @FilePath: \learn-c-primer-plus\chapter2\2.12.5.c
 *  
 */

#include <stdio.h>

void br(void);
void ic(void);

int main(void){
    br();
    printf(", ");
    ic();
    printf("\n");

    ic();
    printf("\n");
    br();

    getchar();

    return 0;
}

void br(void){
    printf("Br, Ru");
}

void ic(void){
    printf("In, Ch");
}