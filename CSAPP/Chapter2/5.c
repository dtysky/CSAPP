//
//  01.c
//  CSAPP
//
//  Created by DaiTianyu on 16/5/30.
//  Copyright © 2016年 dtysky@outlook.com. All rights reserved.
//

#include "5.h"
#include "utils.h"

void show_bytes(byte_pointer start, int len){
    int i;
    for(i = 0; i < len; i ++){
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void main_c2_e5(){
    int val = 0x87654321;
    byte_pointer valp = (byte_pointer) &val;
    show_bytes(valp, 1);
    show_bytes(valp, 2);
    show_bytes(valp, 3);
}