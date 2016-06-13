//
//  25.c
//  CSAPP
//
//  Created by DaiTianyu on 16/6/13.
//  Copyright © 2016年 dtysky@outlook.com. All rights reserved.
//

#include "25.h"

float sum_elements_orig(float a[], unsigned length){
    int i;
    float result = 0;
    for (i = 0; i <= length - 1; i ++) {
        result += a[i];
    }
    
    return result;
}

float sum_elements(float a[], unsigned length){
    int i;
    float result = 0;
    for (i = 0; i < length; i ++) {
        result += a[i];
    }
    
    return result;
}

void main_c2_e25(float a[], int length){
//    printf("Origin: %f\n", sum_elements_orig(a, length));
    printf("Right: %f\n", sum_elements(a, length));
}