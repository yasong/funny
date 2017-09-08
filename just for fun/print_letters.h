#ifndef __PRINT_LETTERS_H_
#define __PRINT_LETTERS_H_

#include <stdlib.h>
#include <stdio.h>

#define LINE 7
#define ROW 5

void print_A(char ch, int n, char *array, int len);
void print_B(char ch, int n, char *array, int len);
void print_C(char ch, int n, char *array, int len);
void print_D(char ch, int n, char *array, int len);
void print_E(char ch, int n, char *array, int len);
void print_F(char ch, int n, char *array, int len);
void print_G(char ch, int n, char *array, int len);
void print_H(char ch, int n, char *array, int len);
void print_I(char ch, int n, char *array, int len);
void print_J(char ch, int n, char *array, int len);
void print_K(char ch, int n, char *array, int len);
void print_L(char ch, int n, char *array, int len);
void print_M(char ch, int n, char *array, int len);
void print_N(char ch, int n, char *array, int len);
void print_O(char ch, int n, char *array, int len);
void print_P(char ch, int n, char *array, int len);
void print_Q(char ch, int n, char *array, int len);
void print_R(char ch, int n, char *array, int len);
void print_S(char ch, int n, char *array, int len);
void print_T(char ch, int n, char *array, int len);
void print_U(char ch, int n, char *array, int len);
void print_V(char ch, int n, char *array, int len);
void print_W(char ch, int n, char *array, int len);
void print_X(char ch, int n, char *array, int len);
void print_Y(char ch, int n, char *array, int len);
void print_Z(char ch, int n, char *array, int len);


void print_A(char ch, int n, char *array, int len)
{
    int i, j;
    int offset = len * (ROW + 2) - 2;
    for ( j = 0; j < LINE; ++j){
        if ( j == 0 ){
            array[(ROW + 2) * n + 2] = ch;
        }
        else if ( j == 1){
            array[(ROW + 2) * n + j * offset + 1] = ch;
            array[(ROW + 2) * n + j * offset + 3] = ch;
       }
        else if ( j == 3){
            array[(ROW + 2) * n + j * offset + 0] = ch;
            array[(ROW + 2) * n + j * offset + 1] = ch;
            array[(ROW + 2) * n + j * offset + 2] = ch;
            array[(ROW + 2) * n + j * offset + 3] = ch;
            array[(ROW + 2) * n + j * offset + 4] = ch;
        }
       else {
            array[(ROW + 2) * n + j * offset + 0] = ch;
            array[(ROW + 2) * n + j * offset + 4] = ch;
        } 
            
    }
}

void print_B(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 0 || i == 3 || i == LINE - 1){
            for ( j = 0; j < ROW - 1; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
            
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
    } 
}
void print_C(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 0 || i == LINE - 1){
            for ( j = 1; j < ROW ; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
            
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
        }
    } 
}
void print_D(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 0 || i == LINE - 1){
            for ( j = 0; j < ROW - 1; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
            
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
    } 
}

void print_E(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 0 || i == 3 || i == LINE - 1){
            for ( j = 0; j < ROW; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
            
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
        }
    }
}
void print_F(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 0 || i == 3){
            for ( j = 0; j < ROW; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
            
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
        }
    }
}

void print_G(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 0 || i == LINE - 1){
            for ( j = 1; j < ROW ; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
            
        }
        else if ( i == 4){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 3] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        else if ( i == 5){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
        }
    } 
}

void print_H(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 3){
            for ( j = 0; j < ROW; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
            
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
    }
}

void print_I(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 0 || i == LINE - 1){
            for ( j = 0; j < ROW ; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
            
        }
        else{
            array[n * 7 + i * offset + 2] = ch;
        }
    }
}

void print_J(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 0){
            for ( j = 0; j < ROW ; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
            
        }
        else if (i == LINE - 1){
            for ( j = 0; j < ROW - 1; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
        }
        else if (i == LINE - 2){
                array[n * 7 + i * offset ] = ch;
                array[n * 7 + i * offset + 3] = ch;
        }
        else{
            array[n * 7 + i * offset + 3] = ch;
        }
    }
}

void print_K(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    j = 4;
    for (i = 0; i < LINE; ++i){
        if (j > i ){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + j - i] = ch;
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + i - j + 2] = ch;
        }
        
    }
}

void print_L(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == LINE -1){
            for ( j = 0; j < ROW; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
            
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
        }
    }
}

void print_M(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 1){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 1] = ch;
            array[n * 7 + i * offset + 3] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        if (i == 2 || i == 3){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 2] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
    }
}

void print_N(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 1){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 1] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        if (i == 3){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 2] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        if (i == 5){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 3] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
    }
}

void print_O(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i ==0 || i == LINE - 1){
            for ( j = 1; j < ROW - 1; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
            
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
    }
}
void print_P(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i ==0 || i == 3 ){
            for ( j = 0; j < ROW  - 1; ++j){
                array[n * 7 + i * offset + j] = ch;
            }  
        }
        else if(i == 1 || i == 2){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
        }
    }
}

void print_Q(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i ==0 ){
            for ( j = 1; j < ROW - 1; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
        }
        else if (i == LINE - 1){
            for ( j = 1; j < ROW - 1; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
        }
        else if (i == LINE - 2){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 3] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
    }
}
void print_R(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i ==0  || i == 3){
            for ( j = 0; j < ROW  - 1; ++j){
                array[n * 7 + i * offset + j] = ch;
            }  
        }
        else if(i == 1 || i == 2){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        else if(i == 4) {
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 2] = ch;
        }
        else if(i == 5) {
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 3] = ch;
        }
        else if(i == 6) {
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
    }
}
void print_S(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i ==0  || i == LINE - 1 || i == 3){
            for ( j = 0; j < ROW  ; ++j){
                array[n * 7 + i * offset + j] = ch;
            }  
        }
        else if(i == 1 || i == 2){
            array[n * 7 + i * offset + 0] = ch;
        }
        else{
            array[n * 7 + i * offset + 4] = ch;
        }
    }
}
void print_T(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i ==0 ){
            for ( j = 0; j < ROW ; ++j){
                array[n * 7 + i * offset + j] = ch;
            }  
        }
        else{
            array[n * 7 + i * offset + 2] = ch;
        }
    }
}
void print_U(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == LINE - 1){
            for ( j = 1; j < ROW - 1; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
            
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
    }
}

void print_V(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == LINE - 1){
            array[n * 7 + i * offset + 2] = ch;
        }
        else if (i == LINE - 2){
            array[n * 7 + i * offset + 1] = ch;
            array[n * 7 + i * offset + 3] = ch;
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
    }
}

void print_W(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 3 || i == 4){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 2] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        else if (i == 5){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 1] = ch;
            array[n * 7 + i * offset + 3] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
    }
}

void print_X(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 0 || i == LINE - 1){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        else if (i == 1 || i == LINE - 2){
            array[n * 7 + i * offset + 1] = ch;
            array[n * 7 + i * offset + 3] = ch;
        }
        else{
            array[n * 7 + i * offset + 2] = ch;
        }
    }
}

void print_Y(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 0  || i == 1){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        else if (i == 2){
            array[n * 7 + i * offset + 1] = ch;
            array[n * 7 + i * offset + 3] = ch;
        }
        else{
            array[n * 7 + i * offset + 2] = ch;
        }
    }
}

void print_Z(char ch, int n, char *array, int len)
{
    int i;
    int j;
    int offset;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        if (i == 0 || i == LINE - 1){
            for ( j = 0; j < ROW ; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
        }
        if (i == 1 ){
            array[n * 7 + i * offset + 3] = ch;
        }
        if (i == 3 ){
            array[n * 7 + i * offset + 2] = ch;
        }
        if (i == 5 ){
            array[n * 7 + i * offset + 1] = ch;
        }
    }
}
#endif