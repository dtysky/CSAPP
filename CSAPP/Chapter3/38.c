//
//  38.c
//  CSAPP
//
//  Created by DaiTianyu on 16/7/4.
//  Copyright © 2016年 dtysky@outlook.com. All rights reserved.
//

#include "38.h"

void fix_set_diag(fix_matrix A, int val){
    int i;
    for(i = 0; i < N; i++){
        A[i][i] = val;
    }
}

void fix_set_diag_opt(fix_matrix A, int val){
    int i;
    int *Aptr = &A[0][0];
    int Aoffset = 0;
    for(i = 0; i != N; i++){
        Aptr[Aoffset] = val;
        Aoffset += N + 1;
    }
}

void main_c3_38(fix_matrix A, int val){
    fix_set_diag_opt(A, val);
    int i, j;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("%d", A[i][j]);
        }
        printf("\n");
    }
}