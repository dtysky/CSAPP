//
//  26.c
//  CSAPP
//
//  Created by DaiTianyu on 16/6/13.
//  Copyright © 2016年 dtysky@outlook.com. All rights reserved.
//

#include "26.h"

int strlonger_orig(char *s, char *t){
    return strlen(s) - strlen(t) > 0;
}

int strlonger(char *s, char *t){
    return strlen(s) > strlen(t);
}

void main_c2_e26(char *s, char *t){
    printf("Origin: %d\n", strlonger_orig(s, t));
    printf("Right: %d\n", strlonger(s, t));
}