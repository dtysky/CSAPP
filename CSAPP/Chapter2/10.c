//
//  10.c
//  CSAPP
//
//  Created by DaiTianyu on 16/6/7.
//  Copyright © 2016年 dtysky@outlook.com. All rights reserved.
//

#include "10.h"

void inplace(int* x, int* y){
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void main_c2_e10(int nx, int ny){
    int a = nx;
    int b = ny;
    int* x = &a;
    int* y = &b;
    inplace(x, y);
    printf("src: %d, %d\n", nx, ny);
    printf("dst: %d, %d\n", *x, *y);
}