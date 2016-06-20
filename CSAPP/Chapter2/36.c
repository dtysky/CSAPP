//
//  36.c
//  CSAPP
//
//  Created by DaiTianyu on 16/6/20.
//  Copyright © 2016年 dtysky@outlook.com. All rights reserved.
//

#include "36.h"

int tmul_ok(int x, int y){
    return (long long)x * (long long)y == x * y;
}

void main_c2_e36(int x, int y){
    printf("Can: %d\n", tmul_ok(x, y));
}