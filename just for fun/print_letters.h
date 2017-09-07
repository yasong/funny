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
        if ( j == 0 )   array[(ROW + 2) * n + 2] = ch;
        if ( j == 1){
            array[(ROW + 2) * n + offset + 1] = ch;
            array[(ROW + 2) * n + offset + 3] = ch;
        }
        if ( j == 3){
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

#endif