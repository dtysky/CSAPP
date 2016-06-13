//
//  11.c
//  CSAPP
//
//  Created by DaiTianyu on 16/6/7.
//  Copyright © 2016年 dtysky@outlook.com. All rights reserved.
//

#include "11.h"

void reverse_array_org(int a[], int cnt){
    int first, last;
    for (first = 0, last = cnt - 1; first <= last ;first ++, last --){
        inplace(&a[first], &a[last]);
    }
}

void reverse_array(int a[], int cnt){
    int first, last;
    for (first = 0, last = cnt - 1; first < last ;first ++, last --){
        inplace(&a[first], &a[last]);
    }
}

void main_c2_e11(int a[], int cnt){
    for (int i = 0; i < cnt; i ++) {
        printf("%d, ", a[i]);
    }
    printf("\n");
    reverse_array(a, cnt);
    for (int i = 0; i < cnt; i ++) {
        printf("%d, ", a[i]);
    }
}