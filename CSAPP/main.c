//
//  main.c
//  CSAPP
//
//  Created by DaiTianyu on 16/5/30.
//  Copyright © 2016年 dtysky@outlook.com. All rights reserved.
//

#include <stdio.h>
#include "Chapter2/42.h"

int main(int argc, const char * argv[]) {
    
    int x = -1;
    int ux = (unsigned)x;
    printf("%d", x + x == ux + ux);
    return 0;
}
