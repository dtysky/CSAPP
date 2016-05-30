//
//  utils.c
//  CSAPP
//
//  Created by DaiTianyu on 16/5/30.
//  Copyright © 2016年 dtysky@outlook.com. All rights reserved.
//

#include "utils.h"

void show_bytes(byte_pointer start, int len){
    int i;
    for(i = 0; i < len; i ++){
        printf(" %.2x", start[i]);
    }
    printf("\n");
}