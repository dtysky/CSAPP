//
//  30.c
//  CSAPP
//
//  Created by DaiTianyu on 16/6/13.
//  Copyright © 2016年 dtysky@outlook.com. All rights reserved.
//

#include "30.h"

int tadd_ok(int x, int y){
    if(x > 0 && y > 0){
        return x + y > 0;
    }
    else if (x < 0 && y < 0){
        return x + y < 0;
    }
    
    return 1;
}

void main_c2_e30(int x, int y){
    printf("Can: %d\n", tadd_ok(x, y));
}