/* 
* @Author: Xiaokang Yin
* @Date:   2017-09-07 22:37:05
* @Last Modified by:   Xiaokang Yin
* @Last Modified time: 2017-09-07 23:18:58
*/

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
        if ( i = 4){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 3] = ch;
            array[n * 7 + i * offset + 4] = ch;
        }
        if ( i = 5){
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
    for (i = 1; i < LINE; ++i){
        if (i == 0 || i == LINE - 1){
            for ( j = 0; j < ROW - 1; ++j){
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
    for (i = 1; i < LINE; ++i){
        if (i == 0){
            for ( j = 2; j < ROW - 1; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
            
        }
        if (i == LINE - 1){
            for ( j = 1; j < ROW; ++j){
                array[n * 7 + i * offset + j] = ch;
            }
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + 4] = ch;
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
        if (j > i){
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + j - i] = ch;
        }
        else{
            array[n * 7 + i * offset + 0] = ch;
            array[n * 7 + i * offset + i - j] = ch;
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