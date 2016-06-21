//
//  42.c
//  CSAPP
//
//  Created by DaiTianyu on 16/6/21.
//  Copyright © 2016年 dtysky@outlook.com. All rights reserved.
//

#include "42.h"

int div_16(int x){
    int bias = (x >> 31) & 0xf;
    return (x + bias) >> 4;
}

void main_c2_e42(int x){
    printf("Result: %d\n", div_16(x));
}